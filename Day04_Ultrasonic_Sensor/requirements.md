# 📋 Project Requirements: Ultrasonic Sensor (HC-SR04)

This project demonstrates how to use the **HC-SR04 Ultrasonic Distance Sensor** with an Arduino board to measure the distance to an object using sound waves.

---

## 1. 🧰 Hardware Requirements

| Component                 | Quantity | Description                                    |
| ------------------------- | -------- | ---------------------------------------------- |
| Arduino UNO / Nano        | 1        | Main microcontroller board                     |
| HC-SR04 Ultrasonic Sensor | 1        | Measures distance using ultrasonic sound waves |
| Breadboard                | 1        | For non-permanent prototyping                  |
| Jumper Wires (Male-Male)  | 4-6      | To connect components to the Arduino           |
| USB Cable                 | 1        | To upload code and power Arduino               |
| Power Source              | 1        | PC via USB or external power                   |
| (Optional) Buzzer/LED     | 1        | For feedback based on distance threshold       |

---

## 2. 🔌 Wiring Connections

| HC-SR04 Pin | Connect To           |
| ----------- | -------------------- |
| VCC         | 5V on Arduino        |
| GND         | GND on Arduino       |
| TRIG        | Digital Pin 9 (D9)   |
| ECHO        | Digital Pin 10 (D10) |

**Note**: Use jumper wires to make clean connections through a breadboard.

---

## 3. 💾 Software Requirements

- Arduino IDE

    - Version: 1.8.x or 2.x+

    - [Download Here](https://www.arduino.cc/en/software)

- **Libraries Used**: None external. Everything used is built into the Arduino IDE.


---

## 4. 🧪 Online Simulation (Optional but Recommended)

If you don’t have the physical hardware, simulate it online:

- **Platform**: [Tinkercad Circuits](https://www.tinkercad.com/)

- **Steps**:

    1. Sign in to Tinkercad

    2. Go to “Circuits” → “Create New Circuit”

    3. Add:

        - Arduino UNO

        - HC-SR04 Sensor

        - Breadboard

        - Connect as per schematic

    4. Use the built-in code editor and paste the code

    5. Simulate and observe distance output in Serial Monitor

---

## 5. 🧠 Concepts Covered

| Level        | Concept                                                |
| ------------ | ------------------------------------------------------ |
| Beginner     | Digital Pins, Serial Monitor, Ultrasonic Principles    |
| Intermediate | Time-to-Distance Conversion, Precision Timing          |
| Advanced     | Obstacle Avoidance, Real-time Feedback with Buzzer/LED |

---

## 6. ⚙️ How It Works (Quick Summary)

1. The **TRIG** pin is set HIGH briefly to emit an ultrasonic pulse.

2. The **ECHO** pin listens for the reflected sound.

3. The Arduino calculates the time taken for the echo and converts it into distance using:

```nginx
distance (cm) = (duration in microseconds) / 58.2
```

---

## 7. 📌 Troubleshooting Tips

| Issue                        | Solution                                                          |
| ---------------------------- | ----------------------------------------------------------------- |
| No reading on Serial Monitor | Check COM port and baud rate, ensure sensor is connected properly |
| Always reads 0 cm            | Object may be too far or sensor is not facing it                  |
| Fluctuating values           | Add delay(100) or use average of multiple readings                |


---

## ✅ Output Example

```makefile
Distance: 14.32 cm
Distance: 15.10 cm
```

---

