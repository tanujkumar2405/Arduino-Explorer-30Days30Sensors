# Requirements – Day 8: Tilt Sensor – Orientation Change

<br>  

**Author**: Tanuj Kumar  
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

## 📌 Project Overview

This project uses a **Tilt Sensor** to detect changes in orientation and trigger visual (LED) and audible (Buzzer) alerts when movement is detected.  
It’s useful in **anti-theft alarms**, **safety devices**, and **orientation-based controls**.

---

## 🛠 Hardware Requirements

| **Component**                | **Quantity** | **Notes**                                   |
| ---------------------------- | ------------ | ------------------------------------------- |
| **Arduino Uno**              | 1            | Main microcontroller board                  |
| **Tilt Sensor (Ball Type)**  | 1            | Detects orientation change (digital output) |
| **LED (Any color)**          | 1            | Indicator for tilt detection                |
| **220Ω Resistor**            | 1            | Limits current for LED                      |
| **Buzzer**                   | 1            | Audible alert                               |
| **Jumper Wires (Male–Male)** | \~10         | For connecting components                   |
| **Breadboard**               | 1            | For easy prototyping                        |
| **USB Cable**                | 1            | To connect Arduino to PC for programming    |

<br>  

---

## 💻 Software Requirements

| **Software**           | **Version**          | **Purpose**                                    |
| ---------------------- | -------------------- | ---------------------------------------------- |
| **Arduino IDE**        | 1.8.x / 2.x          | Writing, compiling, and uploading code         |
| **Tinkercad Circuits** | Online               | For virtual simulation before physical testing |
| **Serial Monitor**     | Built-in Arduino IDE | For debugging and monitoring sensor readings   |

<br>  

---

## ⚙️ Pin Configuration

| **Component** | **Pin** | **Arduino Pin** | **Mode** |
| ------------- | ------- | --------------- | -------- |
| Tilt Sensor   | Signal  | D2              | INPUT    |
| Tilt Sensor   | GND     | GND             | —        |
| LED (Anode)   | —       | D8 (via 220Ω)   | OUTPUT   |
| LED (Cathode) | —       | GND             | —        |
| Buzzer (+)    | —       | D9              | OUTPUT   |
| Buzzer (–)    | —       | GND             | —        |

<br>  

---

## 🧠 Pre-Requisites

- Basic knowledge of **digital inputs** and **output control** in Arduino.

- Understanding of how a tilt sensor works (mechanical ball makes contact inside the sensor to change output state).

- Familiarity with **Serial Monitor** for debugging.

---

## ⚠️ Safety & Handling

- Keep the tilt sensor **upright during** initial testing to understand its default state.

- Avoid dropping or shaking too violently — it can cause false readings.

- If using an **active buzzer**, sound will be continuous when HIGH; if using a **passive buzzer**, you may modify the code for beeps.

---

## 📦 Optional Add-Ons4

- **Vibration motor** instead of buzzer for silent alert.

- **Relay module** to control high-power alarms.

- **Battery power** for portable use.

---
