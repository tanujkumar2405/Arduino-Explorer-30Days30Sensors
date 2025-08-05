// Day 8: Tilt Sensor – Orientation Change Detection
// Part of "Arduino Explorer: 30 Days, 30 Sensors"
// Developed by Tanuj Kumar

// Pin assignments
const int tiltPin = 2;    // Digital pin connected to tilt sensor
const int ledPin = 8;     // LED pin for visual alert
const int buzzerPin = 9;  // Buzzer pin for sound alert

// Variables
int tiltState = LOW;      // Stores current tilt sensor state

void setup() {
  Serial.begin(9600);                 // Start serial monitor
  pinMode(tiltPin, INPUT_PULLUP);     // Tilt sensor as input with internal pull-up
  pinMode(ledPin, OUTPUT);            // LED as output
  pinMode(buzzerPin, OUTPUT);         // Buzzer as output

  Serial.println("Tilt Sensor Orientation Monitoring Started...");
}

void loop() {
  tiltState = digitalRead(tiltPin);  // Read tilt sensor state

  if (tiltState == HIGH) {
    // Alert when tilt is detected
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("⚠️ Tilt Detected!");
  } else {
    // Normal state
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("✅ Stable Position");
  }

  delay(500);  // Small delay for stability
}
