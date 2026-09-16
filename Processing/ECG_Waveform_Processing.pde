import processing.serial.*;

Serial myPort;

int[] ecgValues;
int writeIndex = 0;

void setup() {
  size(800, 400);

  // Arduino serial port
  myPort = new Serial(this, "COM17", 9600);

  // Clear any old serial data
  myPort.clear();

  // ECG buffer
  ecgValues = new int[width];

  // Initialize buffer to center line
  for (int i = 0; i < width; i++) {
    ecgValues[i] = 512;
  }

  background(0);
  frameRate(60);
}

void draw() {
  background(0);

  // Read ECG data from Arduino
  while (myPort.available() > 0) {
    String inData = myPort.readStringUntil('\n');

    if (inData != null) {
      inData = trim(inData);

      if (inData.length() > 0) {
        try {
          int value = int(inData);

          // Accept normal Arduino ADC range
          if (value >= 0 && value <= 1023) {
            ecgValues[writeIndex] = value;
            writeIndex = (writeIndex + 1) % width;
          }
        }
        catch (Exception e) {
          // Ignore invalid serial data
        }
      }
    }
  }

  // Draw ECG grid
  stroke(40);
  strokeWeight(1);

  for (int y = 50; y < height; y += 50) {
    line(0, y, width, y);
  }

  for (int x = 0; x < width; x += 50) {
    line(x, 0, x, height);
  }

  // Center reference line
  stroke(80);
  line(0, height / 2, width, height / 2);

  // Draw ECG waveform
  stroke(0, 255, 0);
  strokeWeight(2);
  noFill();

  beginShape();

  for (int x = 0; x < width; x++) {
    int bufferIndex = (writeIndex + x) % width;
    float y = map(ecgValues[bufferIndex], 0, 1023, height - 30, 30);
    vertex(x, y);
  }

  endShape();

  // Display information
  fill(0, 255, 0);
  textSize(16);
  text("ECG Heartbeat Monitoring", 20, 25);

  fill(180);
  textSize(12);
  text("Arduino: COM17 | Baud Rate: 9600", 20, height - 10);
}
