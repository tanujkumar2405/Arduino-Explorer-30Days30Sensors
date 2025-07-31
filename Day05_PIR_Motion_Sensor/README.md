# 📅 Day 05 – PIR Motion Sensor

Welcome to Day 5 of **Arduino Explorer: 30 Days, 30 Sensors**!  
Today, we are working with the **PIR Motion Sensor**, which detects human movement using infrared radiation.

---

## 📌 Project Title
**Human Motion Detection Using PIR Sensor**

---

## 🧠 Sensor Overview

The **PIR (Passive Infrared) Motion Sensor** detects motion by sensing changes in infrared radiation in its environment. It is commonly used in security systems, automatic lights, and motion-triggered devices.

---

## ⚙️ What This Project Does

- Detects **human motion** using a PIR sensor.
- Turns **ON an LED** when motion is detected.
- Sends status messages to the **Serial Monitor**.

---

## 🗂 Folder Structure

```bash
Day05_PIR_Motion_Sensor/
├── pir_motion_sensor.ino # Arduino sketch
├── Code_Explanation.md # Code breakdown and logic
├── requirements.md # Required components and modules
├── README.md # This file
├── Schematic_View.pdf # Circuit diagram (PDF format)
├── wiring_diagram.png # ✅ Breadboard-style connection visual
├── Screenshot 1.png # ✅ Image showing setup or serial output
├── Screenshot 2.png # ✅ Image showing setup or serial output
└── Tinkercad_Simulation_Guide.md # Guide to simulate in Tinkercad
```

---

## 🔧 Hardware Requirements

- Arduino Uno (or compatible)
- PIR Motion Sensor
- LED
- Resistor (220Ω)
- Breadboard and jumper wires

_Details are listed in `requirements.md`._

---

## 🔌 Circuit Diagram

This project connects a **PIR Motion Sensor** and an **LED** to an Arduino Uno. When motion is detected, the LED will turn ON, and a message will appear in the Serial Monitor.

| Component         | Arduino Pin        | Description                          |
| ----------------- | ------------------ | ------------------------------------ |
| PIR Sensor – VCC  | 5V                 | Powers the sensor                    |
| PIR Sensor – GND  | GND                | Ground connection                    |
| PIR Sensor – OUT  | Pin 2              | Sends HIGH when motion is detected   |
| LED – Anode (+)   | Pin 13 (digital)   | Turns ON when motion is detected     |
| LED – Cathode (–) | GND (via resistor) | Connect through 220Ω resistor to GND |

---

### 🧠 Step-by-Step Wiring:

1. **Connect PIR Sensor**:

    - Connect **VCC** of PIR to **5V** on Arduino.

    - Connect **GND** of PIR to **GND** on Arduino.

    - Connect **OUT** of PIR to **Digital Pin 2** on Arduino.

2. **Connect the LED**:

    - Connect the **long leg** (Anode) of the LED to **Digital Pin 13**.

    - Connect the **short leg** (Cathode) of the LED to one end of a **220Ω resistor**.

    - Connect the other end of the resistor to **GND** on the Arduino.

---

### 🔄 How It Works:

- When no motion is detected, the PIR sensor’s **OUT** pin stays LOW.

- When motion is detected, the **OUT** pin goes HIGH:

    - The LED connected to pin 13 turns ON.

    - A message is printed to the Serial Monitor.

---

### 🖼 Visual Guide:

You can view the complete circuit diagram in the file:
📄 `Schematic_View.pdf`

Or, if you're using an online simulator, refer to:
📄 `Tinkercad_Simulation_Guide.md`



---

## 🧪 Simulation

If you don't have the hardware, you can simulate this project online using Tinkercad.  
Check out `Tinkercad_Simulation_Guide.md` for a complete step-by-step guide.

---

## 💡 Learning Outcome

- Learn how PIR sensors detect motion
- Understand basic digital input handling in Arduino
- Practice serial communication and hardware interfacing

---

## ▶️ How to Run

1. Connect the components as per the schematic.
2. Upload `pir_motion_sensor.ino` to your Arduino.
3. Open the Serial Monitor.
4. Move your hand near the sensor to see the LED turn ON and messages appear in Serial Monitor.

---

## 🧠 Bonus Tip

PIR sensors need 5–10 seconds to **stabilize** after powering up. Avoid sudden motion during this warm-up time.

---

🔁 **Next Up: Day 06 – Flame Sensor**

