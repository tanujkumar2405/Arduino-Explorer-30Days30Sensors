# 📦 Requirements – Day 2: LDR – Light Detection & Brightness Control

This file outlines all the hardware, software, and tools you'll need to successfully complete this project.

---

## 🛠️ Hardware Components

| Component              | Quantity | Description                                                                 |
|------------------------|----------|-----------------------------------------------------------------------------|
| Arduino Nano           | 1        | Microcontroller board used to read LDR data and control output             |
| LDR (Light Dependent Resistor) | 1  | Detects light intensity                                                   |
| 10kΩ Resistor          | 1        | Used in voltage divider with the LDR                                       |
| LED                    | 1        | Demonstrates brightness control based on light levels                      |
| 220Ω Resistor          | 1        | Limits current to the LED                                                  |
| Breadboard             | 1        | For connecting the components without soldering                            |
| Jumper Wires           | 6–8      | For making connections on the breadboard                                   |
| USB Cable              | 1        | For uploading code and powering the Arduino Nano                           |

---

## 💻 Software & Tools

| Tool                | Description |
|---------------------|-------------|
| Arduino IDE         | Required to write, upload, and monitor serial data |
| Fritzing (Optional) | Used for creating wiring diagrams and schematics   |
| PDF Viewer          | To view the schematic (PDF)                        |
| Git & GitHub        | To manage version control and upload to your repo  |

---

## ⚙️ Circuit Configuration

- **Voltage Divider**: The LDR and 10kΩ resistor create a voltage divider. The analog signal from the junction is read by Arduino's analog pin `A0`.
- **LED Output**: Connected to digital pin `9` (PWM) for brightness control using `analogWrite()`.

---

## 🔌 Basic Wiring Overview

- **LDR**:
  - One leg to **5V**
  - Other leg to **A0** and **10kΩ Resistor**
- **10kΩ Resistor**:
  - Between LDR and **GND**
- **LED**:
  - Positive leg to **D9** via **220Ω Resistor**
  - Negative leg to **GND**

---

## ✅ Checklist Before Uploading Code

- [ ] All components connected securely
- [ ] Correct COM port selected in Arduino IDE
- [ ] Board selected as "Arduino Nano"
- [ ] Code compiled successfully
- [ ] Serial Monitor Baud rate set to 9600

---

> 💡 Tip: Cover the LDR with your hand or a dark object and watch the LED brightness increase!

---
