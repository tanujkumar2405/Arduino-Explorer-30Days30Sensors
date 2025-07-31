// File: pir_motion_sensor.ino

int pirPin = 2;        // PIR sensor connected to digital pin 2
int ledPin = 13;       // Onboard LED pin
int pirState = LOW;   // Current state of PIR sensor
int val = 0;          // Variable to read PIR status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(pirPin);  // Read PIR sensor value

  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);
    if (pirState == HIGH) {
      Serial.println("Motion ended.");
      pirState = LOW;
    }
  }
  delay(100);
}
