# Project: Ultrasonic Distance Measuring with HC-SR04 & Arduino

## 📌 Table of Contents

1. 🔰 [Introduction](#introduction)

2. 📦 [Libraries Used](#libraries-used)

3. 📊 [Concept: How Ultrasonic Sensor Works](#concept\:-how-ultrasonic-sensor-works)

4. 📋 [Code Walkthrough (Line by Line)](#code-walkthrough-\(line\-by\-line\))

5. 🧠 [Understanding Time, Distance & Speed](#understanding-time\,-distance-\&-speed)

6. 🛠️ [Advanced Explanation & Optimization Tips](#advanced-explanation-\&-optimization-tips)

7. ❓[FAQs / Troubleshooting](#faqs-\/-troubleshooting)

8. 🔗 [Resources for Deeper Learning](#resources-for-deeper-learning)

---

## 🔰 Introduction

This explanation is based on the code in `ultrasonic_sensor.ino` which measures distance using the **HC-SR04 ultrasonic sensor** and displays the result on the Serial Monitor.

The goal is to:

- Measure distance in centimeters.

- Understand how ultrasonic pulses work.

- Learn Arduino code from basic setup to advanced logic.



---

## 📦 Libraries Used
None!
This project uses only built-in *Arduino functions*. No external libraries are required.

---

## 📊 Concept: How Ultrasonic Sensor Works

HC-SR04 sends an **ultrasonic pulse** (inaudible sound wave). It bounces off an object and comes back. The sensor then:

- Measures the **round-trip time** of the pulse.

- Calculates the **distance** using the formula:

Distance = (Time × Speed of Sound) / 2  
Why divide by 2? Because the time includes both the forward and return journey.

| Component | Description                 |
| --------- | --------------------------- |
| TRIG Pin  | Sends ultrasonic pulse      |
| ECHO Pin  | Receives the reflected wave |
| VCC       | Connect to 5V               |
| GND       | Connect to GND              |


---

## 📋 Code Walkthrough (Line by Line)\

```cpp
const int trigPin = 9;  // Pin connected to TRIG
const int echoPin = 10; // Pin connected to ECHO
```
- We define `trigPin` and `echoPin` to match wiring on the Arduino.

```cpp
long duration;
float distanceCm;
```
- `duration` will store time taken for pulse to return.

- `distanceCm` will store calculated distance.

```cpp
void setup() {
  Serial.begin(9600);  
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
}
```
- `Serial.begin(9600)`: Opens the serial communication to print data.

- `pinMode`: Sets TRIG as output (to send pulse), and ECHO as input (to read pulse return).

```cpp
void loop() {
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);        
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);       
  digitalWrite(trigPin, LOW);  
```
- Sends a **10µs HIGH pulse** on TRIG to start ultrasonic burst.

- TRIG is first reset to LOW for 2µs to ensure a clean HIGH signal.

```cpp
  duration = pulseIn(echoPin, HIGH); 
```
- `pulseIn()` measures how long the ECHO pin stays HIGH — i.e., how long it took for the echo to return.

```cpp
  distanceCm = duration * 0.034 / 2;
```
- Converts time into distance:

    - Speed of sound = 343 m/s = 0.034 cm/µs.

    - Divided by 2 for one-way distance.

```cpp
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  delay(500);
}
```
- Prints the distance to Serial Monitor every 500 ms.

---

## 🧠 Understanding Time, Distance & Speed

- **Speed of Sound** = 343 m/s = 0.034 cm/µs

- **pulseIn()** gives time in microseconds

Dividing by 2 because echo travels to object and back.

---

## 🛠️ Advanced Explanation & Optimization Tips

| Improvement                         | Why it Matters                                   |
| ----------------------------------- | ------------------------------------------------ |
| Use `millis()` instead of `delay()` | For non-blocking measurements                    |
| Add averaging/filtering             | To reduce noise/jitter                           |
| Use LCD or OLED                     | For portable display (e.g., I2C 16x2 or SSD1306) |
| Encapsulate in functions            | Better code reusability                          |
| Use interrupts                      | Advanced method for real-time sensor triggering  |


## Example (Encapsulation):

```cpp
float getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}
```

---

## ❓FAQs / Troubleshooting

| Problem                        | Fix                                          |
| ------------------------------ | -------------------------------------------- |
| Always 0 cm                    | Check wiring or object too close             |
| Always max value (e.g., 400cm) | Object out of range or not reflective        |
| Flickering values              | Try placing smooth surface, use averaging    |
| No output on Serial            | Make sure baud rate in Serial Monitor = 9600 |

---

## 🔗 Resources for Deeper Learning

- [Arduino PulseIn() Docs](https://www.arduino.cc/reference/en/language/functions/advanced-io/pulsein/)

- [HC-SR04 Datasheet](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf)

- [Speed of Sound Reference](https://en.wikipedia.org/wiki/Speed_of_sound)

---

## 🎯 Summary

By now, you should understand:

- How ultrasonic sensors work

- How to write Arduino code from scratch

- How to optimize and scale the code

This project is the foundation for **object detection**, **obstacle-avoiding robots**, **distance loggers**, and more.

