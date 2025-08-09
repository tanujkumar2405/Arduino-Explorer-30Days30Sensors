# 📅 Day 9: Soil Moisture Sensor – Smart Irrigation

<br>  

Welcome to **Day 9** of the **Arduino Explorer: 30 Days, 30 Sensors series**.  
In this project, we’ll use a **Soil Moisture Sensor** to detect soil dryness and control an **LED** and **water pump** for smart irrigation.

---

### 📌 Project Summary

- **Sensor**: Soil Moisture Sensor (Analog type)

- **Objective**: Monitor soil moisture and control pump for irrigation.

- **Level**: Beginner

- **Skills Practiced**: Analog sensor reading, conditional logic, actuator control, serial monitoring.

---

### 🎯 Features

- Reads **soil moisture level** in real time.

- Activates **LED** and **pump** when soil is dry.

- Provides **Serial Monitor feedback** for monitoring.

- Easy to integrate with smart garden systems.

---

### 🖼 Schematic Diagram

📎 See [`Schematic_View.pdf`](./Schematic_View.pdf)  
💡 Designed for clear and easy understanding.

---

### 🔌 Circuit Diagram (Beginner-Friendly)

| **Component**     | **Arduino Pin** | **Notes**                                    |
| ----------------- | --------------- | -------------------------------------------- |
| Soil Sensor VCC   | `5V`            | Powers the sensor                            |
| Soil Sensor GND   | `GND`           | Common ground                                |
| Soil Sensor A0    | `A0`            | Analog moisture reading                      |
| LED Anode (+)     | `D8` (via 220Ω) | LED lights up when soil is dry               |
| LED Cathode (–)   | `GND`           | Common ground                                |
| Pump Relay Signal | `D9`            | Controls pump ON/OFF                         |
| Pump VCC & GND    | External supply | Based on pump power rating, via relay module |


<br>

📎 See: [`wiring_diagram.png`](./wiring_diagram.png)

---

### 🧠 How It Works

The **Soil Moisture Sensor** measures the electrical resistance of soil:  

- **Dry Soil** → High resistance → Higher analog value → Triggers pump & LED.

- **Wet Soil** → Low resistance → Lower analog value → Pump remains OFF.

Arduino continuously checks this value and compares it against a set **threshold**.

---

### 🧾 Requirements

📎 See full list in [`requirements.md`](./requirements.md)

---

### 💻 Arduino Code

📎 Full code: [`soil_moisture_sensor.ino`](./soil_moisture_sensor.ino)

```cpp
const int moistureSensorPin = A0;
const int ledPin = 8;
const int pumpPin = 9;
int moistureValue = 0;
int moistureThreshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pumpPin, OUTPUT);
  Serial.println("Soil Moisture Sensor Monitoring Started...");
}

void loop() {
  moistureValue = analogRead(moistureSensorPin);
  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  if (moistureValue > moistureThreshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(pumpPin, HIGH);
    Serial.println("🌱 Soil is dry! Pump ON.");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(pumpPin, LOW);
    Serial.println("💧 Soil moisture sufficient. Pump OFF.");
  }
  delay(1000);
}
```

<br>  

---

### 🧪 Output Preview

Serial Monitor Example:

```cpp

Soil Moisture Value: 678
🌱 Soil is dry! Pump ON.
Soil Moisture Value: 312
💧 Soil moisture sufficient. Pump OFF.
```

<br>  

---

### 🧠 Learning Outcomes

- Reading **analog sensor data**.

- Using thresholds for condition-based actions.

- Controlling outputs like **relays** and **LEDs**.

- Applying automation for smart irrigation.

---

### 🛠 Real World Applications

- Automated irrigation systems.

- Greenhouse monitoring.

- Plant care automation for indoor plants.

- Smart agriculture solutions.

---

### 🖥 Simulation in Tinkercad

📎 Step-by-step guide: [`Tinkercad_Simulation_Guide.md`](./Tinkercad_Simulation_Guide.md)

---

### 📂 Folder Structure

```cpp
📁 Day09_Soil_Moisture_Sensor
├── soil_moisture_sensor.ino
├── Code_Explanation.md
├── connection_info.md
├── requirements.md
├── LU-5-R SPDT Relay.png
├── Tinkercad_Simulation_Guide.md
├── wiring_diagram.png
├── Schematic View.pdf
├── Screenshot 1.png
├── Screenshot 2.png
└── README.md
```

---

### 📜 License

Licensed under the [MIT License](../license).  
Feel free to use and modify with attribution.  

---

<br>  

**“Smart irrigation starts with knowing when your plants are thirsty.” — *Tanuj Kumar***

<br>  

---

