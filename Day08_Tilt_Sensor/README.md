# 📅 Day 8: Tilt Sensor – Orientation Change

<br>  

Welcome to **Day 8** of the **Arduino Explorer: 30 Days, 30 Sensors** series.  
In this project, we’ll use a **Tilt Sensor** to detect orientation changes and trigger alerts using an **LED** and **Buzzer**.

---

## 📌 Project Summary

- **Sensor**: Tilt Sensor (Ball Type)

- **Objective**: Detect changes in orientation (tilt) and trigger alerts.

- **Level**: Beginner

- **Skills Practiced**: Digital input reading, conditional logic, hardware alerts, serial communication.

---

## 🎯 Features

- Detects **tilt** or **orientation change**.

- Triggers **LED** and **Buzzer** alerts when tilted.

- Provides **Serial Monitor feedback**.

- Simple, low-cost, and easy to build.

---

## 🖼 Schematic Diagram

📎 See [`Schematic View.pdf`]()  
💡 Built using Fritzing for clarity and understanding.  

---

## 🔌 Circuit Diagram (Beginner-Friendly)

| **Component**     | **Arduino Pin** | **Notes**                             |
| ----------------- | --------------- | ------------------------------------- |
| Tilt Sensor Pin 1 | `D2`            | Digital input pin for tilt detection. |
| Tilt Sensor Pin 2 | `GND`           | Connect directly to Arduino ground.   |
| LED Anode (+)     | `D8` (via 220Ω) | LED turns ON when tilt is detected.   |
| LED Cathode (–)   | `GND`           | Common ground connection.             |
| Buzzer (+)        | `D9`            | Buzzer activates on tilt detection.   |
| Buzzer (–)        | `GND`           | Common ground connection.             |

<br>  

📎 See: [`wiring_diagram.png`]()  

---

## 🧠 How It Works

A **Tilt Sensor** contains a small metal ball inside.

- **Normal Position** → Ball rests away from contacts → Circuit is **open** → No signal detected.

- **Tilted Position** → Ball rolls to contacts → Circuit is **closed** → Arduino detects HIGH signal.

The Arduino listens for this change and **activates LED** and **buzzer** when tilt is detected.

---

## 🧾 Requirements

📎 All hardware, software, and tools are listed in [`requirements.md`](./requirements.md)  

---

## 💻 Arduino Code

📎 Full code: [`tilt_sensor.ino`](./tilt_sensor.ino)  

```cpp
const int tiltPin = 2;
const int ledPin = 8;
const int buzzerPin = 9;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Tilt Sensor Monitoring Started...");
}

void loop() {
  int tiltState = digitalRead(tiltPin);
  
  if (tiltState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Tilt Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("Normal Position");
  }

  delay(200);
}
```

<bn>  

---

## 🧪 Output Preview

**Serial Monitor Example**:

```css
Normal Position
Normal Position
Tilt Detected!
Tilt Detected!
Normal Position
```

---

## 🧠 Learning Outcomes

- Understanding of **digital sensors**.

- How tilt sensors work internally.

- Using **digitalRead()** to monitor sensor state.

- Triggering outputs (LED & buzzer) based on sensor input.

---

## 🛠 Real World Applications

- **Anti-theft alarms** (movement detection).

- **Orientation-based devices** (auto screen rotation).

- **Robotics** (detect if robot is tipped over).

- **Industrial machinery** safety shut-off.

---

## 🖥 Simulation in Tinkercad

📎 Detailed steps in [`Tinkercad_Simulation_Guide.md`](./Tinkercad_Simulation_Guide.md)  

---

## 📂 Folder Structure

```pgsql
📁 Day08_Tilt_Sensor
├── tilt_sensor.ino
├── Code_Explanation.md
├── connection_info.md
├── requirements.md
├── Tinkercad_Simulation_Guide.md
├── wiring_diagram.png
├── Schematic View.pdf
├── Screenshot 1.png
├── Screenshot 2.png
└── README.md
```

<br>  

---

## 📜 License

This project is licensed under the [MIT License](../LICENSE).  
You are free to use, modify, and distribute with attribution.  

---

<br>  

**“Learning electronics one sensor at a time.” —** ***Tanuj Kumar***

<br>  

---
