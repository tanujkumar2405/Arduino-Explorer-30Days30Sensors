/*
  Day 02 - LDR Sensor Project
  Title: Light Detection and Brightness Control
  Description: This code reads the ambient light level using an LDR and adjusts
               the brightness of an LED accordingly.
  Author: Tanuj Kumar
*/

const int ldrPin = A0;     // LDR connected to analog pin A0
const int ledPin = 9;      // LED connected to digital PWM pin 9

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);      // Start serial communication for debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read light level (0-1023)
  int ledBrightness = map(ldrValue, 0, 1023, 255, 0); 
  // Invert: brighter light = dimmer LED

  analogWrite(ledPin, ledBrightness); // Set LED brightness

  // Debugging output
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" => LED Brightness: ");
  Serial.println(ledBrightness);

  delay(200);  // Delay for stability
}
