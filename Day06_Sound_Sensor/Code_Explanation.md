# 🎯 Code Explanation – Sound Sensor (Day 6)

This file explains the working of the `sound_sensor.ino` Arduino sketch that detects sound using a **sound sensor module** and activates an LED upon detection.

---

## 📌 Purpose:

To detect loud sounds (like a clap) and provide a visual response (LED ON) using the **digital output** of the sound sensor.

---

## 🧠 Code Breakdown:

<br>  

1. **Pin Definitions**

```cpp
const int soundSensorPin = 2;
const int ledPin = 13;
```

- `soundSensorPin`: Connected to the **digital output** of the sound sensor.

- `ledPin`: Connected to the **built-in LED** (can also use external LED).

---

2. **Setup Function**

```cpp
void setup() {
  pinMode(soundSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Sound Sensor Initialized...");
}
```
- Configures sensor as **input** and LED as **output**.

- Starts the **serial monitor** to display messages for debugging.

---

3. **Loop Fuction**

```cpp
void loop() {
  int soundState = digitalRead(soundSensorPin);
```
- Reads the **digital signal** from the sound sensor.

If **sound level** > **threshold**, the sensor sends **HIGH**, else **LOW**.

---

4. **Condition Check**

```cpp
  if (soundState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("🔊 Sound detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
```
- If sound is detected (`HIGH`), turn ON the LED and show a message.

- If no sound (`LOW`), keep the LED OFF.

---

5. **Delay**

```cpp
  delay(100);
```
- A small delay helps to avoid multiple rapid triggers (debouncing).

---

## ✅ Output:

- LED turns ON when a loud sound is detected.

- Serial monitor prints: `🔊 Sound detected!`

---
