# 📦 Project Requirements – Day 1: IR Obstacle Sensor with Arduino Nano

This document outlines all the hardware, software, and setup requirements needed to build and test the IR Obstacle Sensor system with an Arduino Nano.

---

## 🧰 1. Hardware Components

| Component              | Quantity | Description                                                                 |
|------------------------|----------|-----------------------------------------------------------------------------|
| Arduino Nano           | 1        | Main microcontroller used to run the program                                |
| IR Obstacle Sensor     | 1        | Detects nearby obstacles using infrared light                               |
| Breadboard (optional)  | 1        | Helps in connecting components easily without soldering                     |
| Jumper Wires (Male–Female or Male–Male) | 3–5 | For connecting components                                                   |
| USB Mini-B Cable       | 1        | Required to upload code from PC to the Arduino Nano                         |
| LED (optional)         | 1        | We'll use the on-board LED on pin 13 of Nano                                |

---

## 🔌 2. Wiring Instructions

| IR Sensor Pin | Connect To Arduino Nano/Uno Pin |
|---------------|-----------------------------|
| VCC           | 5V                          |
| GND           | GND                         |
| OUT           | D2                          |

- Optional: Connect an external LED to pin 13 and GND with a 220Ω resistor (or just use the onboard one).
- Make sure the IR sensor is facing outward and the potentiometers are properly adjusted.

---

## 💻 3. Software Requirements

| Software/Tool      | Purpose                                    | Download Link                                   |
|---------------------|--------------------------------------------|--------------------------------------------------|
| Arduino IDE         | To write, compile, and upload the sketch   | https://www.arduino.cc/en/software               |
| CH340 Driver        | Required for Arduino Nano USB recognition  | https://sparks.gogo.co.nz/ch340.html             |
| Git (optional)      | For uploading and managing GitHub project  | https://git-scm.com/downloads                    |
| Fritzing (optional) | For visual wiring diagrams                 | https://fritzing.org/download                    |

---

## 📁 4. Folder Structure

Aall related files place in a well-organized directory named `Day01_IR_Sensor`:

```bash
Day01_IR_Sensor/
├── ir_sensor.ino            # ✅ Arduino code
├── README.md                # ✅ Project overview & usage guide
├── Code_Explanation.md      # ✅ Full step-by-step code explanation
├── requirements.md          # ✅ Components and setup list
├── Schematic View.pdf       # ✅ Circuit diagram with schematic (can be from Fritzing)
├── wiring_diagram.png       # ✅ Breadboard-style connection visual
├── Screenshot 1.png         # ✅ Image showing setup or serial output
├── Screenshot 2.png         # ✅ Optional extra image (e.g., object detection)
```


---


## ⚠️ 5. Notes & Troubleshooting

- If the sensor doesn't detect an object, adjust the small potentiometers on the IR module to change range/sensitivity.
- Make sure the OUT pin of the IR sensor is connected to a digital pin (D2) on the Nano.
- If your Arduino Nano isn't detected by your PC, ensure you’ve installed the **CH340 driver**.
- The IR sensor typically outputs **LOW (0)** when it detects an object and **HIGH (1)** when it doesn’t.

---

## ✅ 6. Checklist Before You Start

- [x] All components available and working
- [x] Arduino IDE installed
- [x] CH340 driver installed (if using Nano clone)
- [x] IR sensor tested by moving hand in front of it
- [x] LED on Nano turns on/off according to detection
- [x] Code uploaded successfully and running

---

## 📚 7. Learning Outcomes

By completing this project, you’ll:
- Learn how to use `digitalRead` and `pinMode` in Arduino
- Understand how IR sensors detect obstacles
- Improve wiring and circuit assembly skills
- Upload and test sketches on Arduino Nano

---

### 🔁 Next: Move to [README.md](./README.md) to begin the project execution.

**Happy Building! 🚀**



