#  Tinkercad Simulation Guide – PIR Motion Sensor (Day 05)

This guide explains how to simulate the **PIR Motion Sensor** with an **Arduino** using **Tinkercad Circuits**.

---

## 🛠 What You’ll Simulate

A simple system that:

- Detects motion using the **PIR sensor**

_ Turns **ON** an **LED** when motion is detected

- Sends messages to the **Serial Monitor**

---

## 🧱 Components Needed in Tinkercad

| Component       | Quantity |
| --------------- | -------- |
| Arduino Uno     | 1        |
| PIR Sensor      | 1        |
| LED             | 1        |
| Resistor (220Ω) | 1        |
| Breadboard      | 1        |
| Jumper Wires    | 6–8      |

---

## 🔌 Circuit Connections

| PIR Sensor Pin | Connect To         |
| -------------- | ------------------ |
| VCC            | 5V on Arduino      |
| GND            | GND on Arduino     |
| OUT            | Digital Pin 2 (D2) |

| LED Side    | Connect To                         |
| ----------- | ---------------------------------- |
| Anode (+)   | Digital Pin 13 (via 220Ω resistor) |
| Cathode (–) | GND on Arduino                     |


---

## 🧾 Steps to Simulate in Tinkercad

1. **Go to** https://www.tinkercad.com and log in.

2. Click on “**Circuits**” → “**Create New Circuit**”.

3. **Drag** and **place** components onto the workspace:

    - Arduino Uno

    - PIR Motion Sensor

    - LED + Resistor

    - Breadboard (optional but recommended)

4. **Make all connections** as described above.

5. Click on the **Code** section:

    - Set to “**Text**” **mode** (C++) if it’s in blocks.

    - Paste the content from `pir_motion_sensor.ino`

6. Click “**Start Simulation**”.

7. Open **Serial Monitor** to see motion detection logs.

8. Move the simulated PIR sensor (or adjust "motion" toggle if available) to trigger detection.

---

## ✅ Tips

- You can **simulate motion** by toggling the motion input on the PIR sensor in Tinkercad.

- Adjust **delay** in the code for different reaction times.

- If LED doesn’t glow, check PIR warm-up time or wiring.

---

