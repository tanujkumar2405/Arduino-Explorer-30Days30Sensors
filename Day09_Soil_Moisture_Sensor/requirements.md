# Requirements – Day 9: Soil Moisture Sensor – Smart Irrigation

<br>  

**Author**: Tanuj Kumar
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

### 📌 Project Overview

This project uses a **Soil Moisture Sensor** to measure the water content in soil and automatically control a water pump when the soil gets too dry.  
It’s useful in **smart irrigation systems**, **garden automation**, and **agriculture monitoring**.

---

### 🛠 Hardware Requirements

| **Component**                | **Quantity** | **Notes**                                      |
| ---------------------------- | ------------ | ---------------------------------------------- |
| **Arduino Uno**              | 1            | Main microcontroller board                     |
| **Soil Moisture Sensor**     | 1            | Detects water content in soil (analog output)  |
| **LED (Any color)**          | 1            | Indicates dry soil                             |
| **220Ω Resistor**            | 1            | Limits current for LED                         |
| **Relay Module**             | 1            | Controls the pump safely                       |
| **Mini Water Pump**          | 1            | For irrigation purposes                        |
| **Jumper Wires (Male–Male)** | \~12         | For connecting components                      |
| **Breadboard**               | 1            | For easy prototyping                           |
| **USB Cable**                | 1            | To connect Arduino to PC for programming       |
| **External Power Supply**    | 1            | For pump operation (depending on pump voltage) |

<br>  

---

### 💻 Software Requirements

| **Software**           | **Version**          | **Purpose**                                    |
| ---------------------- | -------------------- | ---------------------------------------------- |
| **Arduino IDE**        | 1.8.x / 2.x          | Writing, compiling, and uploading code         |
| **Tinkercad Circuits** | Online               | For virtual simulation before physical testing |
| **Serial Monitor**     | Built-in Arduino IDE | For debugging and monitoring sensor readings   |

<br>  

---

### ⚙️ Pin Configuration

| **Component**        | **Pin** | **Arduino Pin** | **Mode** |
| -------------------- | ------- | --------------- | -------- |
| Soil Moisture Sensor | Signal  | A0              | INPUT    |
| Soil Moisture Sensor | VCC     | 5V              | —        |
| Soil Moisture Sensor | GND     | GND             | —        |
| LED (Anode)          | —       | D8 (via 220Ω)   | OUTPUT   |
| LED (Cathode)        | —       | GND             | —        |
| Relay IN (control)   | —       | D9              | OUTPUT   |
| Relay VCC            | —       | 5V              | —        |
| Relay GND            | —       | GND             | —        |
| Pump (+)             | —       | Relay NO        | —        |
| Pump (–)             | —       | Power Supply –  | —        |

<br>  

---

### 🧠 Pre-Requisites

- Basic knowledge of **analog sensors** and **output control** in Arduino.

- Understanding of how a soil moisture sensor works (resistance changes based on water content).

- Familiarity with **relay modules** for controlling high-power devices.

---

### ⚠️ Safety & Handling

- Do not power the pump directly from Arduino — always use a relay or MOSFET driver.

- Avoid leaving the soil moisture sensor submerged in water for long periods to prevent corrosion.

- Double-check wiring polarity before connecting the pump to avoid damage.

---

### 📦 Optional Add-Ons

- **OLED display** to show live moisture percentage.

- **Wi-Fi module (ESP8266/ESP32)** for IoT integration.

- **RTC module** to run pump at scheduled times.

---

