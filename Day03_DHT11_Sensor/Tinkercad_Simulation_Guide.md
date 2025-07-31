# Tinkercad Simulation Guide

### Day 3: DHT11 - Temperature & Humidity Sensor
<br>

---


## 🔎 Overview

<br>

This guide will help you simulate the DHT11 Temperature & Humidity sensor project using **Tinkercad Circuits**, an easy and free online simulator for Arduino projects.

You can test and visualize the sensor readings without needing the physical hardware!

---

## 🛠️ Setting Up Your Simulation

<br>

### Step 1: Open Tinkercad Circuits

- Go to https://www.tinkercad.com/circuits

- Sign in or create a free account.



---

### Step 2: Create a New Circuit

- Click “**Create new Circuit**” button.

- Name your project (e.g., "Day3_DHT11_Sensor").

---

### Step 3: Add Components

Search and add the following components from the parts library:

| Component    | Quantity |
| ------------ | -------- |
| Arduino Uno  | 1        |
| DHT11 Sensor | 1        |
| Breadboard   | 1        |
| Jumper Wires | 3        |

> **Note**: Tinkercad may not have a dedicated DHT11 component; use a generic sensor or simulate with a similar device if necessary.

---

### Step 4: Wiring the Circuit

Connect the components as per the wiring diagram:

| DHT11 Pin | Arduino Pin        |
| --------- | ------------------ |
| VCC       | 5V                 |
| DATA      | Digital Pin 2 (D2) |
| GND       | GND                |

Use jumper wires to make these connections on the breadboard and Arduino.

---

### Step 5: Upload the Code

- Click on the **Code** button on the top right.

- Switch to **Text** mode.

- Copy and paste the Arduino code from `DHT11_sensor.ino`.

- Make sure to include the DHT library by selecting "Include Library" → "Manage Libraries" if available.

- If the library is not available in Tinkercad, code simulation might be limited.

---

### Step 6: Run the Simulation

- Click **Start Simulation**.

- Open the **Serial Monitor** from the code window.

- You should see temperature and humidity readings update live, mimicking real sensor data.  
<br>

---

## 💡 Tips for Simulation   


- If Tinkercad doesn’t support DHT11, you can simulate sensor values manually by printing fixed values.

- For a more realistic simulation, use external Arduino simulators like **Proteus** or **Fritzing** if available.

- Remember, the main purpose is to understand code logic and wiring before moving to hardware.

---

## 📚 Additional Resources


- [Tinkercad Circuits Tutorials](https://www.tinkercad.com/learn/circuits)

- [Arduino Official Website](https://www.arduino.cc/)

- [DHT11 Sensor Datasheet](https://cdn-shop.adafruit.com/datasheets/DHT11.pdf)

---

## 🚀 Next Steps

- Try adding an LCD display in simulation to show values.

- Simulate multiple sensors to monitor different environmental parameters.

- Explore real-time cloud data logging with IoT platforms.

---

## 🙌 Happy Simulating!

Feel free to reach out or contribute to the repository for improvements.

---
