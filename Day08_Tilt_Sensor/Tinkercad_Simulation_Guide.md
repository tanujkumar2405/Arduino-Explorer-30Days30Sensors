# Tinkercad Simulation Guide – Day 8: Tilt Sensor – Orientation Change

<br>  

**Author**: Tanuj Kumar  
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

## 🎯 Purpose of This Guide

This guide helps you simulate the Tilt Sensor project **online in Tinkercad** before building it physically.  
You’ll be able to see how the **LED** and **Buzzer** respond when the sensor detects a tilt.

---

## 🖥 Step 1 – Open Tinkercad

1. Go to [Tinkercad Circuits](https://www.tinkercad.com/circuits).

2. **Sign in** or create a free account.

3. Click **Create New Circuit**.

---

## 📦 Step 2 – Add Components

Drag and drop the following parts from the **Components** panel:  

- **Arduino Uno R3**

- **Tilt Sensor** (Ball type switch)

- **LED** (Any color)

- **220Ω Resistor**

- **Piezo Buzzer**

- **Breadboard Small**

- **Jumper Wires**

---

##  Step 3 – Wiring the Circuit

Follow this wiring carefully:  

| **Component Pin** | **Connects To**                    |
| ----------------- | ---------------------------------- |
| Tilt Sensor Pin 1 | Arduino **D2**                     |
| Tilt Sensor Pin 2 | Arduino **GND**                    |
| LED Anode (+)     | Arduino **D8** (via 220Ω resistor) |
| LED Cathode (–)   | Arduino **GND**                    |
| Buzzer (+)        | Arduino **D9**                     |
| Buzzer (–)        | Arduino **GND**                    |

<br>  

> 📌 **Tip**: Place the Tilt Sensor across the breadboard gap for easy wiring.

---

## 💻 Step 4 – Add the Code

1. Click **Code** (top right) → **Text mode**.

2. Paste your ``tilt_sensor.ino`` code.

3. Click **Done**.

---

## ▶️ Step 5 – Start the Simulation

1. Click the **Start Simulation** button.

2. In **normal state** (sensor upright), LED and buzzer remain **OFF**.

3. Tilt the sensor in simulation:

    - The LED should **turn ON**.

    - The buzzer should **beep**.

    - Serial Monitor shows “`Tilt Detected!`” message.

---

## 🧪 Step 6 – Test Scenarios

| **Action**            | **Expected Output**  |
| --------------------- | -------------------- |
| Sensor upright        | LED OFF, Buzzer OFF  |
| Sensor tilted         | LED ON, Buzzer ON    |
| Sensor tilted rapidly | Quick ON/OFF changes |

<br>  

---

## 📌 Troubleshooting

- **LED always ON**: Reverse tilt sensor pins or check code logic.

- **No buzzer sound**: Verify buzzer type (active/passive) and wiring.

- **Serial Monitor empty**: Ensure **baud rate** in Serial Monitor matches the code (e.g., `9600`).

---

## 📷 Suggested Screenshots

- [**Screenshot 1**](./Screenshot%201.png) – Normal state (sensor upright, LED OFF).

- [**Screenshot 2**](./Screenshot%202.png) – Tilt detected (sensor tilted, LED ON, buzzer ON).

---

## ✅ Next Step

- Once simulation works:

- Build the circuit physically on breadboard.

- Test with different tilt angles.

- Optionally add delay or debounce logic for stability.

---
