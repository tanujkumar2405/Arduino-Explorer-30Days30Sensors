# 📄 requirements.md

**Project**: Day 3 – DHT11 Temperature & Humidity Sensor
**Series**: Arduino Explorer – 30 Days, 30 Sensors

---

## 🧰 1. What You Will Learn

- Understand what the DHT11 sensor is.

- How to read temperature and humidity.

- Set up the sensor with Arduino.

- Use a library to simplify sensor reading.

- Display readings in Serial Monitor.

- Best practices for sensor reliability.

- Advanced: Add data logging, OLED display, or IoT features.

## 🧠 2. Prerequisites

| Skill             | Description                                                       |
| ----------------- | ----------------------------------------------------------------- |
| Basic Arduino     | You should know how to upload code using Arduino IDE.             |
| Breadboard Basics | Know how to connect components using jumper wires.                |
| Serial Monitor    | You should be familiar with viewing output in the Serial Monitor. |


---

## 🔩 3. Hardware Requirements

| Component        | Quantity | Description                          |
| ---------------- | -------- | ------------------------------------ |
| Arduino Uno/Nano | 1        | Any Arduino board will work          |
| DHT11 Sensor     | 1        | Temperature & Humidity sensor        |
| Breadboard       | 1        | For non-soldered circuit connections |
| Jumper Wires     | 3+       | Male-to-Male jumper wires            |
| USB Cable        | 1        | To connect Arduino to your computer  |


---


## ⚡ 4. Circuit Connections

| DHT11 Pin | Connect to Arduino |
| --------- | ------------------ |
| VCC       | 5V                 |
| DATA      | Digital Pin 2 (D2) |
| GND       | GND                |

🔧 Tip: Place a 10KΩ pull-up resistor between VCC and DATA pin for better signal quality (optional for DHT11, recommended for DHT22).

---

## 💻 5. Software Requirements

### 📦 Arduino IDE
**Download**: https://www.arduino.cc/en/software

### 📚 Libraries Required

| Library                 | Author   | How to Install                                                                            |
| ----------------------- | -------- | ----------------------------------------------------------------------------------------- |
| DHT sensor library      | Adafruit | Arduino IDE → Library Manager → Search “DHT” and install “DHT sensor library by Adafruit” |
| Adafruit Unified Sensor | Adafruit | Required dependency. Install via Library Manager too.                                     |

---

## ✅ 6. Installation Commands (Optional via CLI)

If you're using **Arduino CLI**, you can run:

```bash
arduino-cli lib install "DHT sensor library"
arduino-cli lib install "Adafruit Unified Sensor"
```

---

## 🔍 7. How to Verify Installation

1. Open Arduino IDE.

2. Go to Sketch → Include Library → Manage Libraries…

3. Search for `DHT` and `Adafruit Unified Sensor`.

4. Ensure both are Installed.

5. Restart the IDE if needed.

---

## 📈 8. Optional Advanced Tools

| Tool                   | Purpose                      |
| ---------------------- | ---------------------------- |
| OLED Display (SSD1306) | Display live temp/humidity   |
| MicroSD Card Module    | Log readings to a CSV file   |
| Blynk/ThingSpeak       | Send data to cloud dashboard |
| RTC Module (DS3231)    | Add timestamps to data       |


---

## 🧠 9. Common Errors & Fixes

| Error             | Cause                  | Fix                                         |
| ----------------- | ---------------------- | ------------------------------------------- |
| `DHT not found`   | Wrong pin or wiring    | Check your DATA wire to Digital Pin 2       |
| `nan` readings    | Sensor not initialized | Check delay and sensor type                 |
| Compilation error | Missing library        | Ensure all required libraries are installed |


---

## 🔗 10. Further Reading

- [DHT11 Datasheet](https://components101.com/sensors/dht11-temperature-sensor)

- [Adafruit DHT GitHub](https://github.com/adafruit/DHT-sensor-library)

- [Arduino Sensor Guide](https://www.arduino.cc/en/Guide)

---

## 🛠️ 11. Troubleshooting Tips

- Always upload example code first to test if the sensor is functional.

- If you’re getting inconsistent readings, add a capacitor (100nF–1μF) between VCC and GND.

- Use Serial Monitor at **9600 baud** (or match your sketch).

---

## 🌟 12. What’s Next?

- Integrate with a web dashboard.

- Add multiple sensors with timestamps.

- Push alerts when temperature crosses threshold.

- Create your own mini weather station!

---

**Happy Building!**
This file is part of the Arduino Explorer: 30 Days, 30 Sensors project.

— *Maintained by **Tanuj Kumar*** 👨‍💻🔧

---

