# 📘 Code Explanation – `pir_motion_sensor.ino`
This code allows an Arduino to detect motion using a **PIR (Passive Infrared) Motion Sensor** and respond by turning on an LED.

---

## 🔁 Overview

- **Sensor Used**: PIR Motion Sensor (HC-SR501 or similar)

- **Function**: Detects human motion using infrared heat signatures.

- **Output**: Turns on an LED when motion is detected.

---

## 🧠 Code Breakdown

```cpp
int pirPin = 2;     // PIR sensor output connected to digital pin 2
int ledPin = 13;    // Built-in LED on most Arduino boards

void setup() {
  pinMode(pirPin, INPUT);     // Set PIR pin as input
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  Serial.begin(9600);         // Start serial communication
}
```
- **pirPin** is assigned to pin `2`, where the PIR sensor is connected.

- **ledPin** is the onboard LED (pin 13).

-`pinMode()` sets the mode for both pins.

Serial communication is initialized for monitoring.

---

```cpp
void loop() {
  int motionDetected = digitalRead(pirPin);   // Read PIR sensor state

  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH);               // Turn on LED
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);                // Turn off LED
    Serial.println("No Motion.");
  }

  delay(500); // Short delay for stability
}
```
- `digitalRead()` checks if motion is detected.

- If `HIGH` (motion), LED turns ON and a message is printed.

- If `LOW`, LED stays OFF.

- A `delay()` of 500 ms prevents rapid toggling

---

## 🛠️ Customization Ideas

- Replace LED with a buzzer for audio alerts.

- Connect a relay to control appliances.

- Log motion events using an SD card or cloud.

---

## 🔍 Notes

- PIR sensors may take a few seconds to calibrate after powering on.

- Avoid touching the white dome while it's operating.

