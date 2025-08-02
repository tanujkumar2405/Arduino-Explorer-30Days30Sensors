# ✅ requirements.md

**Day 7 – MQ2 Gas Sensor: Smoke and Gas Leakage Detection**  
**Project Type**: Arduino-based Gas/Smoke Detection System  

---

## 🧰 Hardware Requirements:

| Component                | Quantity | Description                                          |
| ------------------------ | -------- | ---------------------------------------------------- |
| Arduino Uno / Nano       | 1        | Main microcontroller board                           |
| MQ2 Gas Sensor           | 1        | Detects gases like LPG, smoke, methane, propane      |
| Buzzer                   | 1        | Audio alert on gas detection                         |
| LED (Any color)          | 1        | Visual alert                                         |
| 220Ω Resistor            | 1        | For LED current limiting                             |
| Breadboard               | 1        | For easy prototyping                                 |
| Jumper Wires (Male–Male) | 8–10     | For connections                                      |
| USB Cable                | 1        | For uploading code and powering Arduino              |
| Power Supply (Optional)  | 1        | 9V battery or external power source for portable use |

---

## 💾 Software Requirements:

| Software                     | Purpose                                           |
| ---------------------------- | ------------------------------------------------- |
| Arduino IDE                  | Writing, compiling, and uploading code            |
| CH340 Driver (if using Nano) | USB to Serial driver for proper communication     |
| Serial Monitor (in IDE)      | To observe real-time gas sensor values and alerts |

---

## ⚙️ Arduino Pin Configuration:

| Component  | Arduino Pin       |
| ---------- | ----------------- |
| MQ2 Sensor | A0 (Analog input) |
| LED        | D8                |
| Buzzer     | D9                |
| VCC (MQ2)  | 5V                |
| GND        | GND               |

---

## ⚠️ Safety Tips:

- Run the system in a **well-ventilated area** during testing.

The MQ2 sensor needs **1–2 minutes of preheating** after powering up to give accurate results.

Ensure **secure** and **solid connections** to avoid false alarms.

Do not expose to open **flames** while testing.

---
