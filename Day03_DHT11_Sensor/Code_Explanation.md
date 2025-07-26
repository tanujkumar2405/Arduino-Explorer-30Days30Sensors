# 📘 Code_Explanation.md

## 🔍 Day 03 – DHT11 Temperature and Humidity Sensor

**Project Goal**: Read temperature and humidity data using the DHT11 sensor and display it on the Serial Monitor.

---

## 📑 Table of Contents

1. [Introduction](#introduction)

2. [Hardware Connections](#hardware-connections)

    - [Pin Mapping Table](#pin-mapping-table)
    - [Simple Wiring Instructions](#simple-wiring-instructions)
    - [Optional](#optional)
    - [Visual Schematic](#visual-schematic)

3. [Libraries Used](#libraries-used)

4. [Code Walkthrough](#code-walkthrough)

5. [Advanced Understanding](#advanced-understanding)

6. [Common Errors & Fixes](#common-errors-&-fixes)

7. [FAQs](#faqs)

8. [Next Steps](#next-steps)

9. [Summary](#summary)

---

## 1. Introduction

This project uses a **DHT11** sensor to measure:

- 🌡️ Temperature (in °C)

- 💧 Humidity (in %)

We'll use **Arduino UNO** and display readings through the **Serial Monitor**.

---

## 2. Hardware Connections

The **DHT11** sensor has 3 pins and must be connected properly to the Arduino for it to function.

## Pin Mapping Table

| DHT11 Pin | Connects to Arduino | Description                                  |
| --------- | ------------------- | -------------------------------------------- |
| **VCC**   | **5V**              | Powers the DHT11 sensor                      |
| **DATA**  | **D2**              | Sends temperature & humidity data to Arduino |
| **GND**   | **GND**             | Ground connection (completes the circuit)    |

---

## Simple Wiring Instructions

**1. VCC → 5V**

- Connect the **VCC pin** (first pin) of the **DHT11** to the **5V pin** on the Arduino.

- This supplies power to the sensor.

**2. DATA → D2**

- Connect the **middle (DATA) pin** of the DHT11 to **Digital Pin 2 (D2)** on the Arduino.

- This is the communication line that sends temperature & humidity data.

**3. GND → GND**

- Connect the **GND pin** (last pin) of the DHT11 to a **GND pin** on the Arduino.

- This completes the circuit and is essential for stable performance.

---

## Optional 
***(But Recommended)***:
- Use a **10kΩ pull-up resistor** between **DATA and VCC** if your sensor is unstable.

    - Many DHT11 breakout boards already include this, so check yours first.

---

## Visual Schematic 
***(Text-based)***

```css

[DHT11 Sensor]         [Arduino UNO]
     VCC  ────────────►  5V
     DATA ────────────►  D2
     GND  ────────────►  GND
```


---

## 3. Libraries Used

**👉 `DHT.h`**  

- Allows communication with DHT11/DHT22 sensors.

- Part of the **Adafruit DHT Sensor Library**.

**Installation**:

- Open Arduino IDE → Sketch → Include Library → Manage Libraries.

- Search “**DHT sensor library by Adafruit**” and install.

- Also install “**Adafruit Unified Sensor**”.

---

## 4. Code Walkthrough

```cpp
#include "DHT.h"
```
- Includes the DHT sensor library. Without this, Arduino can't communicate with DHT11.

---

```cpp
#define DHTPIN 2
#define DHTTYPE DHT11
```

- `DHTPIN`: The pin where the DATA wire of the DHT11 is connected.

- `DHTTYPE`: Tells the library we’re using the DHT11 (not DHT22).

---

```cpp
DHT dht(DHTPIN, DHTTYPE);
```

- Initializes the sensor with the specified pin and type.

---

```cpp
void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Temperature & Humidity Sensor");
  dht.begin();
}
```

- `Serial.begin(9600)`: Starts the serial communication at 9600 bps (baud rate).

- `Serial.println(...)`: Sends a welcome message to the serial monitor.

- `dht.begin()`: Initializes the DHT sensor.

---

```cpp
void loop() {
delay(2000);
```

- Waits for 2 seconds before taking a new reading.
- DHT11 has a delay requirement (~1s minimum), so we use 2s to be safe.

---

```cpp
float humidity = dht.readHumidity();
float temperature = dht.readTemperature();
```
- `readHumidity()`: Gets humidity as a float (e.g., 55.3).

- `readTemperature()`: Gets temperature in Celsius.

---

```cpp
if (isnan(humidity) || isnan(temperature)) {
Serial.println("Failed to read from DHT sensor!");
return;
}
```

- **`isnan()`**: Checks if the reading is not a number (NaN) due to sensor error.

---

```cpp
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
```

- Prints temperature and humidity in a clean, formatted output.

---

## 5. Advanced Understanding

### ✅ Why use `float`?
- DHT11 returns decimal values like 25.4°C, so we use `float` instead of `int`.

### ✅ Can I use Fahrenheit?
Yes. Use:

```
dht.readTemperature(true);
```

## ✅ DHT11 vs DHT22?

| Feature  | DHT11              | DHT22                |
| -------- | ------------------ | -------------------- |
| Accuracy | ±2°C / ±5% RH      | ±0.5°C / ±2-5% RH    |
| Range    | 0–50°C / 20–80% RH | -40–80°C / 0–100% RH |
| Cost     | Lower              | Higher               |
| Use      | Basic Projects     | Serious Applications |


---


## 6. Common Errors & Fixes

| Issue                             | Fix                                                             |
| --------------------------------- | --------------------------------------------------------------- |
| `Failed to read from DHT sensor!` | Check connections, add delay(2000), and ensure correct pin/type |
| Upload error                      | Ensure correct board/port selected                              |
| Empty Serial Monitor              | Check baud rate (should be 9600)                                |


---

## 7. FAQs

**Q1. Can I connect multiple DHT11 sensors?**
A: Yes, but each needs a separate data pin and instance of `DHT`.

**Q2. Can I log this to SD card or cloud**
A: Yes. You can integrate SD card modules or use ESP8266/ESP32 for IoT cloud uploads.

**Q3. How to display on LCD or OLED?**
A: Use `LiquidCrystal` or `U8g2` libraries to show values on a display.

---

## 8. Next Steps

✅ Add an LCD to display temperature/humidity.  
✅ Send data to an IoT platform like ThingSpeak or Blynk.  
✅ Add buzzer/relay to trigger alerts at high temp/humidity.  
✅ Use DHT22 for better precision.  
✅ Log data with timestamps using RTC + SD card.  

---

## Summary

| Component      | Purpose                            |
| -------------- | ---------------------------------- |
| DHT11          | Measures temperature and humidity  |
| Arduino        | Processes and displays sensor data |
| Serial Monitor | Displays readings in real-time     |


---
