// Day 9: Soil Moisture Sensor – Smart Irrigation
// Developed for Arduino Explorer: 30 Days, 30 Sensors

const int moistureSensorPin = A0;  // Analog pin connected to soil moisture sensor
const int ledPin = 8;              // LED for dry soil indication
const int pumpPin = 9;             // Pump relay control pin
int moistureValue = 0;             // Variable to store sensor reading
int moistureThreshold = 500;       // Threshold value for dry/wet soil (adjustable)

void setup() {
  Serial.begin(9600);              // Start Serial Monitor
  pinMode(ledPin, OUTPUT);         // LED pin as output
  pinMode(pumpPin, OUTPUT);        // Pump relay pin as output

  Serial.println("Soil Moisture Sensor Monitoring Started...");
}

void loop() {
  moistureValue = analogRead(moistureSensorPin); // Read sensor value
  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // Check if soil is dry
  if (moistureValue > moistureThreshold) {
    digitalWrite(ledPin, HIGH);    // Turn on LED
    digitalWrite(pumpPin, HIGH);   // Turn on pump
    Serial.println("🌱 Soil is dry! Pump ON.");
  } else {
    digitalWrite(ledPin, LOW);     // Turn off LED
    digitalWrite(pumpPin, LOW);    // Turn off pump
    Serial.println("💧 Soil moisture sufficient. Pump OFF.");
  }

  delay(1000); // 1-second delay before next reading
}
