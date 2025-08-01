// Day 6: Sound Sensor – Sound Detection
// Turns on LED when sound is detected using digital output pin of the sound sensor

// Pin Definitions
const int soundSensorPin = 2;  // Digital output from sound sensor
const int ledPin = 13;         // Built-in LED on most Arduino boards

void setup() {
  pinMode(soundSensorPin, INPUT);  // Set sensor pin as input
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
  Serial.begin(9600);              // Start serial communication
  Serial.println("Sound Sensor Initialized...");
}

void loop() {
  int soundState = digitalRead(soundSensorPin);  // Read sensor

  if (soundState == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn LED ON
    Serial.println("🔊 Sound detected!");
  } else {
    digitalWrite(ledPin, LOW);    // Turn LED OFF
  }

  delay(100);  // Short delay to debounce
}
