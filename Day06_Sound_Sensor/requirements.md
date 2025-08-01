# 📋 Project Requirements – Day 6: Sound Sensor 🔊
<br>  

This document outlines the **hardware**, **software**, and **tools** required to successfully build and simulate the **Sound Detection System** using an Arduino and a Sound Sensor module.

---

## 🛠️ 1. Hardware Components

| Component                | Quantity | Description                                                 |
| ------------------------ | -------- | ----------------------------------------------------------- |
| Arduino Uno/Nano         | 1        | Microcontroller board used to process the sensor data       |
| Sound Sensor Module      | 1        | Detects sound levels and provides a digital HIGH/LOW signal |
| LED (Optional)           | 1        | Indicates when sound is detected                            |
| Resistor (220Ω)          | 1        | Used with LED to prevent current overflow                   |
| Breadboard               | 1        | For assembling components without soldering                 |
| Jumper Wires (Male-Male) | \~6      | For connecting components to the Arduino and breadboard     |
| USB Cable                | 1        | For powering and uploading code to the Arduino              |

---

<br>  

> **NOTE**: Since TinkerCad not builtin `Sound Sensor`, So we used `Potentiometer` as on its place. 

<br> 

---

## 💻 2. Software Requirements

| Software           | Version      | Purpose                                     |
| ------------------ | ------------ | ------------------------------------------- |
| Arduino IDE        | 1.8.x or 2.x | Writing and uploading code to Arduino       |
| Tinkercad Circuits | Web-based    | Simulating the project virtually (optional) |
| Serial Monitor     | Built-in     | Viewing real-time sound detection messages  |

---

## ⚙️ 3. Arduino IDE Configuration

✅ **Board Selection**:

- Select: **Arduino Uno** or **Arduino Nano**  
*(Tools → Board → Arduino Uno/Nano)*

✅ **Port Selection**:

- Choose correct COM port  
*(Tools → Port → COMX)*

---

## 🔌 4. Wiring Configration

| Arduino Pin | Connects To                       |
| ----------- | --------------------------------- |
| D2          | Sound Sensor OUT                  |
| GND         | Sound Sensor GND                  |
| 5V          | Sound Sensor VCC                  |
| D13         | LED Anode (+)                     |
| GND         | LED Cathode (-) via 220Ω resistor |

Refer to `wiring_diagram.png` and `Schematic View.pdf` for visual connections.

---

## 🧪 5. Optional (For Simulation)

✅ **Tinkercad Circuit Components**:

- Arduino Uno

- Sound Sensor (use Generic Digital Sensor)

- LED + Resistor

- Breadboard

- Jumper Wires

---

## ✅ 6. Pre-requisites

- Basic knowledge of Arduino IDE

- Understanding of digital signals (HIGH/LOW)

- Familiarity with sound sensor behavior

- LED polarity understanding (Anode +, Cathode -)

---
