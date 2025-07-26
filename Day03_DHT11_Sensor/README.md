# 🌡️ Day 3: DHT11 - Temperature & Humidity Sensor

Welcome to Day 3 of **"Arduino Explorer: 30 Days, 30 Sensors"**!  
Today, we’ll be working with the **DHT11 Sensor**, a widely used sensor that measures **temperature and humidity**.  
This project is ideal for beginners looking to understand environmental monitoring using Arduino.

---

## 📦 Project Overview

- **Sensor**: DHT11 (Temperature & Humidity Sensor)
- **Board**: Arduino Uno / Nano / Mega
- **Project Goal**: Read real-time temperature and humidity values and display them in the Serial Monitor.

---

## 📁 Folder Structure

Day_3_DHT11/
│
├── DHT11_sensor.ino
├── Code_Explanation.md
├── Wiring_Diagram.png
├── requirements.md
├── Docs
├── 
└── README.md ← (You are here)


---

## 🧠 Learning Outcomes

By the end of this project, you will understand:

- What is a DHT11 Sensor and how it works
- How to wire a DHT11 to Arduino
- How to read temperature and humidity data
- Displaying sensor data in the Serial Monitor
- Using external libraries (`DHT.h`)

---

## 🔌 Hardware Requirements

| Component           | Quantity |
|--------------------|----------|
| Arduino Uno/Nano   | 1        |
| DHT11 Sensor       | 1        |
| Breadboard         | 1        |
| Jumper Wires       | 3        |
| USB Cable          | 1        |

> ✅ **Optional**: 10K Ohm resistor (for better signal stability in long wires)

---

## 🔗 Hardware Connections

| DHT11 Pin | Connect To         |
|-----------|--------------------|
| VCC       | 5V on Arduino      |
| DATA      | Digital Pin D2     |
| GND       | GND on Arduino     |

📌 *Make sure the flat side of the DHT11 faces you when wiring.*

📷 *Refer to the `Fritzing_Diagram.png` and `Wiring_Diagram.png` for visual connection.*

---

## 🧾 Software Requirements

- **Arduino IDE** (v1.8+ or 2.0+)
- **DHT Sensor Library** by Adafruit
- **Adafruit Unified Sensor** Library

### 📦 Install Libraries:

1. Open Arduino IDE.
2. Go to **Sketch → Include Library → Manage Libraries**.
3. Search and install:
   - `DHT sensor library` by Adafruit
   - `Adafruit Unified Sensor`

Or use the Library Manager command:

Sketch → Include Library → Manage Libraries → Search "DHT"

---

## 💻 Arduino Code

The full code is available in the `Code/DHT11_TempHumidity.ino` file.

Basic logic:
- Initialize sensor
- Read temperature and humidity
- Print to Serial Monitor

---

## 📜 Code Walkthrough

Refer to the `Docs/Code_Explanation.md` for a step-by-step walkthrough of the Arduino code, from setting up libraries to reading and displaying data.

Topics covered:
- Including libraries
- Defining sensor pin and type
- Initializing in `setup()`
- Looping read and print logic in `loop()`
- Error handling

---

## 🧪 How to Run the Project

1. Connect your DHT11 sensor as per the wiring diagram.
2. Upload the code to your Arduino board.
3. Open the **Serial Monitor** (Ctrl + Shift + M) at **9600 baud rate**.
4. Observe live temperature and humidity readings.

---

## 🛠️ Troubleshooting

| Issue | Solution |
|-------|----------|
| Serial Monitor shows `nan` or `0.00` | Check sensor pin and wiring |
| `DHT.h` not found | Install DHT sensor library |
| Inconsistent readings | Add a 10K resistor between VCC and DATA (pull-up) |

---

## 🧑‍🎓 Next Steps

- Try displaying values on an LCD (16x2) or OLED display
- Add a buzzer to alert on high humidity
- Log data to an SD card or cloud via ESP32

---

## 💬 Author

**Tanuj Kumar**  
A passionate CSE (Cybersecurity) student & Arduino enthusiast  
📅 Part of the [30 Days, 30 Sensors](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors) GitHub series

---

## 📄 License

This project is open-sourced under the [MIT License](LICENSE).

---

## 🙌 Contributions

Pull Requests, suggestions, or improvements are welcome!  
Just fork the repo and make your move!

---

## 🔍 Tags

`#Arduino` `#DHT11` `#TemperatureHumidity` `#IoT` `#SensorSeries` `#BeginnerProject` `#30Days30Sensors`

---

## 🔚 Final Words

Thanks for checking out Day 3!  
Stay tuned for Day 4 – we’re diving into something cool tomorrow 🚀

**Happy Making! 👨‍🔧👩‍💻**

