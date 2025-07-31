# 🚀 Day 1: IR Obstacle Detection with Arduino Nano | Arduino Explorer - 30 Days, 30 Sensors

Welcome to **Day 1** of the "Arduino Explorer: 30 Days, 30 Sensors" challenge!  
In this project, you'll learn how to use an **IR Obstacle Sensor** with the **Arduino Nano** to detect nearby objects.

---  

## 📌 What You’ll Learn

- Basics of IR obstacle detection
- Wiring IR sensor with Arduino Nano
- Reading sensor data in code
- Controlling the onboard LED
- Writing clean and beginner-friendly Arduino code
- Documenting & sharing on GitHub

---

## 🛠 Requirements

| Component              | Quantity | Purpose                                   |
|------------------------|----------|-------------------------------------------|
| Arduino Nano           | 1        | Microcontroller board                      |
| IR Obstacle Sensor     | 1        | Detects nearby objects using IR light      |
| Jumper Wires (M-F)     | 3–5      | To connect sensor pins to Arduino          |
| Breadboard (optional)  | 1        | For neat wiring                            |
| USB Cable (Mini-B)     | 1        | Upload code from PC to Arduino             |
| Arduino IDE            | 1        | Software to write and upload code          |

---

## 📐 Circuit Diagram / Wiring

### IR Sensor Pins:
- **VCC** → Connect to **5V** on Arduino Nano  
- **GND** → Connect to **GND** on Arduino Nano  
- **OUT** → Connect to **Digital Pin D2** on Arduino Nano  

### Optional:
- LED on **pin 13** is built-in on Arduino Nano and used for indication

> 💡 When an object is detected in front of the sensor, the output goes **LOW (0)** and the LED turns **ON**.

---

## 💻 Arduino Code: `ir_sensor.ino`

```cpp
int sensorPin = 2;     // Connect IR Sensor OUT to D2
int ledPin = 13;       // Onboard LED

void setup() {
  pinMode(sensorPin, INPUT);    // IR sensor as input
  pinMode(ledPin, OUTPUT);      // LED as output
  Serial.begin(9600);           // Initialize Serial Monitor
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read IR sensor value

  if (sensorValue == LOW) {
    // Object detected
    digitalWrite(ledPin, HIGH);       // Turn ON LED
    Serial.println("🔴 Obstacle Detected!");
  } else {
    // No object
    digitalWrite(ledPin, LOW);        // Turn OFF LED
    Serial.println("🟢 Clear Path");
  }

  delay(300);  // Short delay for readability
}
```


---


## 🔍 Code Explanation (Line-by-Line)

| Line                             | Description                                            |
| -------------------------------- | ------------------------------------------------------ |
| `int sensorPin = 2;`             | Assigns digital pin 2 for the IR sensor output.        |
| `int ledPin = 13;`               | Uses onboard LED pin 13 for visual alert.              |
| `pinMode()`                      | Defines pin roles: sensor as input, LED as output.     |
| `Serial.begin(9600);`            | Initializes Serial Monitor at 9600 baud rate.          |
| `digitalRead(sensorPin)`         | Reads if sensor detects an object (LOW) or not (HIGH). |
| `digitalWrite(ledPin, HIGH/LOW)` | Controls LED ON/OFF based on sensor reading.           |
| `Serial.println()`               | Prints obstacle status on Serial Monitor.              |
| `delay(300);`                    | Adds a small pause between readings.                   |


---


## 📁 Project Structure

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
├── Tinkercad_Simulation_Guide.md    # ✅ Virtual Simulation, Project without Hardware

```


---


## ✅ What is Write in Each File

| File                                    | Description                                                                                                                                                 |
| --------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `README.md`                             | This is the main documentation users will see. It should explain the project objective, components, wiring, usage instructions, and how to upload/run code. |
| `ir_sensor.ino`                         | This is the Arduino sketch file with code to run the IR sensor detection and response logic.                                                                |
| `Code_Explanation.md`                   | This gives a **line-by-line explanation** of `ir_sensor.ino`, explaining syntax, logic, and flow — great for learners.                                      |
| `requirements.md`                       | This should list everything needed to build and run the project: hardware, software, libraries, etc.                                                        |
| `Schematic View.pdf`                    | Use Fritzing or similar to generate a **schematic circuit diagram**. Export it as a PDF.                                                                    |
| `wiring_diagram.png`                    | A **breadboard-style** image showing real component layout and wire connections.                                                                            |
| `Screenshot 1.png` & `Screenshot 2.png` | Real setup images, serial monitor output, IR triggering — these make your repo visual and engaging.                                                         |
| `Tinkercad_Simulation_Guide.md`         | Guide to simulate the Ultrasonic Sensor circuit on Tinkercad with wiring and code upload steps.                                                             |


---


## 🧠 How It Works

- IR sensor emits invisible light.

- When an object comes close, light reflects back and is detected.

- Sensor output goes LOW → Arduino turns ON LED + shows message.


---


## 🧪 How to Use

1. Connect Components (as per wiring section)

2. Open Arduino IDE

3. Paste the Code into new sketch

4. Select Board → "Arduino Nano"

5. Choose COM Port → "Tools > Port"

6. Upload the Code to Nano

7. Open Serial Monitor to view object detection in real-time!


---


## ✨ Project Extensions (Upcomming)

- Buzzer alert when obstacle is detected

- Control a relay to stop a motor

- Add distance measurement (use ultrasonic sensor later)

- Use LED bar to visualize proximity (in future projects)


---


## 📷 Sample Output (Serial Monitor)

```mathematica
🟢 Clear Path
🟢 Clear Path
🔴 Obstacle Detected!
🔴 Obstacle Detected!
🟢 Clear Path
```


---


## 🙌 Support & Connect

If you enjoyed this, give it a ⭐ on GitHub and connect with me!

  > GitHub: @[tanujkumar2405](https://github.com/tanujkumar2405)

  > LinkedIn: @[tanuj-kumar-cybersecurity](https://www.linkedin.com/in/tanuj-kumar-cybersecurity)

📬 Want the full 30 Days Guide? Ask in [Discussions](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/discussions) or DM me!


---

## 📜 License
This project is licensed under the [MIT License](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/blob/main/LICENSE). Feel free to use, modify, and share with attribution.


---


## OPTIONAL:

if you didn't have proper hardware tools and setup you can also use [Tinkercad](https://tinkercad.com) 


---

## 💬 Author

**Tanuj Kumar**  
A passionate CSE (Cybersecurity) student & Arduino enthusiast  
📅 Part of the [30 Days, 30 Sensors](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors) GitHub series

---


## 🧭 Next Up: Day 2 — LDR Sensor (Light Sensor)

**Stay tuned and keep building!**


---


## 📬 Contact Me

If you have any questions, suggestions, or improvements, feel free to connect with me:

- 📧 Email: tanujkuamr2405@gmail.com
- 💬 LinkedIn: https://www.linkedin.com/in/tanuj-kumar-cybersecurity
- 📁 GitHub Issues: [Open an issue](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/issues)

I'm happy to help and open to collaboration!
Feel free to open a new issue in the repo if you have questions or want to contribute!
