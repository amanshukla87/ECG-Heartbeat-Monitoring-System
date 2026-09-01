// Arduino-Based ECG Heartbeat Monitoring and Healthcare System
// Arduino UNO + AD8232 ECG sensor

const int ecgPin = A0;
const int leadOffPlus = 10;
const int leadOffMinus = 11;

const int greenLed = 6;
const int redLed = 7;
const int buzzer = 8;

void setup()
{
  Serial.begin(9600);

  pinMode(leadOffPlus, INPUT);
  pinMode(leadOffMinus, INPUT);

  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(buzzer, LOW);
}

void loop()
{
  int ecgValue = analogRead(ecgPin);

  // AD8232 indicates a disconnected electrode through LO+ or LO-.
  if (digitalRead(leadOffPlus) == HIGH || digitalRead(leadOffMinus) == HIGH)
  {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
    digitalWrite(buzzer, HIGH);

    Serial.println("Lead off");
  }
  else
  {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    digitalWrite(buzzer, LOW);

    // Send the ECG signal to the Serial Plotter.
    Serial.println(ecgValue);
  }

  delay(5);
}
