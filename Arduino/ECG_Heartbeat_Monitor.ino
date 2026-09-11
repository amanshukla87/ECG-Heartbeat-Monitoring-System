// Arduino-Based ECG Heartbeat Monitoring Prototype
// Arduino UNO + AD8232 ECG sensor

const byte ECG_PIN = A0;
const byte LEAD_OFF_PLUS = 10;
const byte LEAD_OFF_MINUS = 11;

const byte GREEN_LED = 6;
const byte RED_LED = 7;
const byte BUZZER = 8;

void setup()
{
  Serial.begin(9600);

  pinMode(LEAD_OFF_PLUS, INPUT);
  pinMode(LEAD_OFF_MINUS, INPUT);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop()
{
  const int ecgValue = analogRead(ECG_PIN);
  const bool leadOff = (digitalRead(LEAD_OFF_PLUS) == HIGH) ||
                       (digitalRead(LEAD_OFF_MINUS) == HIGH);

  if (leadOff)
  {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);

    Serial.println("Lead off");
  }
  else
  {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);

    // Send the ECG sample to the Arduino Serial Plotter.
    Serial.println(ecgValue);
  }

  delay(5);
}
