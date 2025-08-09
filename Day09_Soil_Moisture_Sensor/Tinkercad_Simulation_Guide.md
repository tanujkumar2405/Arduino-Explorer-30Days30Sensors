# Tinkercad Simulation Guide – Day 9: Soil Moisture Sensor – Smart Irrigation

<br>  

**Author**: Tanuj Kumar
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

### 🎯 Purpose of This Guide

This guide helps you simulate the Soil Moisture Sensor project **online in Tinkercad** before building it physically.  
You’ll be able to see how the **LED** and **Relay-controlled Pump** respond when the soil gets too dry.

---

### 🖥 Step 1 – Open Tinkercad

1. Go to [Tinkercad Circuits](https://www.tinkercad.com/circuits).

2. **Sign in** or **create a free account**.

3. Click **Create New Circuit**.

---

### 📦 Step 2 – Add Components

Drag and drop the following parts from the **Components** panel:

- **Arduino Uno R3**

- **Soil Moisture Sensor** (with separate probe and module)

- **LED** (Any color)

- **220Ω Resistor**

- **Relay Module** (**Single Channel**)

- **Small DC Motor** (to simulate water pump)

- **Breadboard Small**

- **Jumper Wires**

---

### Step 3 – Wiring the Circuit 

Follow this wiring carefully:  

| **Component Pin** | **Connects To**                    |
| ----------------- | ---------------------------------- |
| Soil Sensor VCC   | Arduino **5V**                     |
| Soil Sensor GND   | Arduino **GND**                    |
| Soil Sensor AO    | Arduino **A0**                     |
| LED Anode (+)     | Arduino **D8** (via 220Ω resistor) |
| LED Cathode (–)   | Arduino **GND**                    |
| Relay IN          | Arduino **D9**                     |
| Relay VCC         | Arduino **5V**                     |
| Relay GND         | Arduino **GND**                    |
| Motor + (Pump +)  | Relay **NO** (Normally Open)       |
| Motor – (Pump –)  | Power Supply – (e.g., 5V or 9V)    |
| Relay COM         | Power Supply + (same as pump)      |

<br>  

> 📌 **Tip**: In Tinkercad, replace the water pump with a small DC motor for visual simulation.

---

### 💻 Step 4 – Add the Code

1. Click **Code** (top right) → **Text mode**.

2. Paste your `soil_moisture_sensor.ino` code.

3. Click **Done**.

---

### ▶️ Step 5 – Start the Simulation

1. Click the **Start Simulation** button.

2. Adjust the **soil moisture value** in the sensor’s settings:  

    - **High moisture** → LED and pump remain **OFF**.

    - **Low moisture** → LED turns **ON**, pump (motor) activates.

3. Monitor the **Serial Monitor** for messages like `"Soil is Dry"` or `"Soil Moist"`.

---

### 🧪 Step 6 – Test Scenarios

| **Action**                      | **Expected Output**                          |
| ------------------------------- | -------------------------------------------- |
| High moisture value (e.g., 800) | LED OFF, Pump OFF, Serial shows “Soil Moist” |
| Low moisture value (e.g., 300)  | LED ON, Pump ON, Serial shows “Soil is Dry”  |
| Rapid change in values          | Quick ON/OFF switching of LED & pump         |

<br>  

---

### 📌 Troubleshooting

- **Pump never turns ON**: Check relay wiring and ensure sensor threshold in code is correct.

- **LED always ON**: Sensor value might always be below threshold — adjust in code.

- **Serial Monitor empty**: Ensure baud rate in Serial Monitor matches code (e.g., `9600`).

---

### 📷 Suggested Screenshots

- [Screenshot 1](./Screenshot%201.png) – Soil moist (LED OFF, Pump OFF).

- [Screenshot 2](./Screenshot%202.png) – Soil dry (LED ON, Pump ON).

---

### ✅ Next Step

- Once simulation works:

    - Build the circuit physically on breadboard.

    - Test in real soil for accurate calibration.

    - Optionally add **OLED display** or **IoT features** for smart monitoring.

---
