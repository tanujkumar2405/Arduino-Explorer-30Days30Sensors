// Day 7: MQ2 Gas Sensor – Smoke and Gas Leakage Detection
// Developed by Tanuj Kumar for Arduino Explorer Series

const int gasSensorPin = A0;     // Analog pin connected to MQ2 sensor
const int ledPin = 8;            // Digital pin connected to LED
const int buzzerPin = 9;         // Digital pin connected to Buzzer
int gasValue = 0;                // Variable to store sensor value
int gasThreshold = 300;          // Threshold value (adjustable)

void setup() {
  Serial.begin(9600);            // Start serial communication
  pinMode(ledPin, OUTPUT);       // Set LED pin as output
  pinMode(buzzerPin, OUTPUT);    // Set buzzer pin as output

  Serial.println("MQ2 Gas Sensor Monitoring Started...");
}

void loop() {
  gasValue = analogRead(gasSensorPin);  // Read analog value from sensor
  Serial.print("Gas Value: ");
  Serial.println(gasValue);             // Print value to Serial Monitor

  // If gas level exceeds threshold
  if (gasValue > gasThreshold) {
    digitalWrite(ledPin, HIGH);         // Turn on LED
    digitalWrite(buzzerPin, HIGH);      // Turn on Buzzer
    Serial.println("⚠️ ALERT: Gas Leakage Detected!");
  } else {
    digitalWrite(ledPin, LOW);          // Turn off LED
    digitalWrite(buzzerPin, LOW);       // Turn off Buzzer
  }

  delay(1000); // Wait 1 second before next reading
}
