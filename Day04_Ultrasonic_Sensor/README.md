# 📘 Day 04: Ultrasonic Sensor (HC-SR04) - Distance Measuring

Welcome to **Day 04** of the **Arduino Explorer: 30 Days, 30 Sensors** journey! Today, we will be exploring the **Ultrasonic Sensor (HC-SR04)**. This sensor is widely used in robotics, obstacle detection, and range finding. It allows us to measure the distance to an object using ultrasonic sound waves.

---

## 📌 Project Overview

* **Sensor**: Ultrasonic HC-SR04
* **Purpose**: To measure the distance to objects
* **Difficulty**: Beginner Friendly
* **Topics Covered**:

  * Working principle of ultrasonic sensors
  * Accurate distance measurement in centimeters
  * Displaying sensor output via Serial Monitor

---

## 📂 Project Structure

```
Day04_Ultrasonic_Sensor/
├── ultrasonic_sensor.ino
├── Code_Explanation.md
├── requirements.md
├── README.md
├── Schematic View.pdf
├── wiring_diagram.png
├── Screeshot 1.png
└── Tinkercad_Simulation_Guide.md
```

---

## 🔧 Components Required

| Component                 | Quantity |
| ------------------------- | -------- |
| Arduino Uno/Nano          | 1        |
| Ultrasonic Sensor HC-SR04 | 1        |
| Jumper Wires              | 4        |
| Breadboard                | 1        |
| USB Cable                 | 1        |

---

## 🔌 Connections

| HC-SR04 Pin | Arduino Pin |
| ----------- | ----------- |
| VCC         | 5V          |
| GND         | GND         |
| TRIG        | Digital 9   |
| ECHO        | Digital 10  |

> ⚠️ Make sure to connect the Echo pin to a digital pin that supports `pulseIn()`.

---

## 🔁 Working Principle

The sensor sends out an ultrasonic pulse and waits for it to bounce back from an object. The time taken for the echo to return is used to calculate the distance.

**Formula**:

```
Distance (cm) = Duration × 0.0343 / 2
```

---

## 🧠 What You’ll Learn

* Fundamentals of ultrasonic wave-based distance measurement
* Interfacing HC-SR04 with Arduino
* Using `digitalWrite()`, `pulseIn()`, and Serial Monitor
* How to avoid common pitfalls like noise and misreads

---

## 🚀 Getting Started

### 1. Upload the Code

* Open the `ultrasonic_sensor.ino` file in the Arduino IDE.
* Connect your Arduino board.
* Upload the sketch.

### 2. Open Serial Monitor

* Set baud rate to `9600`
* Observe real-time distance measurements in cm

---

## 🛠️ Troubleshooting

* **No Output**: Check VCC and GND wiring
* **Always 0 cm**: Reverse ECHO/TRIG pins
* **Fluctuating Readings**: Add a delay and avoid noisy environments

---

## 🧪 Simulate Online (Tinkercad)

Use this project even if you don't have physical components!

1. Visit [Tinkercad Circuits](https://www.tinkercad.com/circuits)
2. Create new circuit
3. Add:

   * Arduino Uno
   * HC-SR04 sensor
   * Connect as per the above table
4. Copy-paste the `ultrasonic_sensor.ino` code
5. Start Simulation & open Serial Monitor

More help: See `Tinkercad_Simulation_Guide.md`

---

## 📥 Requirements

* Arduino IDE
* Libraries: None (built-in functions only)

Check `requirements.md` for details.

---

## ✅ Output

* Real-time distance readings on Serial Monitor (in cm)
* Accuracy: ±3 mm typically

---

## 💬 Feedback & Contribution

We welcome suggestions and improvements! If you find a bug or have a feature request, feel free to open an issue or PR.

Happy Building! 🚀

— *Arduino Explorer Team*
