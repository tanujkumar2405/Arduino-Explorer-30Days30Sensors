# 🧪 Tinkercad Simulation Guide: Ultrasonic Sensor with Arduino

Simulate the **HC-SR04 Distance Measuring Sensor** with an **Arduino UNO** using **Tinkercad Circuits** — no hardware needed.

---

## 🌐 Step-by-Step Simulation in Tinkercad

### ✅ 1. Create a Free Account

- Go to: https://www.tinkercad.com/

- Click **Join Now** or **Sign In**

- Use a Google account or email

---

### 🔧 2. Start a New Circuit Project

- Click **Circuits** from the left sidebar

- Click **Create New** Circuit

---

### ⚙️ 3. Add Components

From the **Components Panel**, drag and drop:

| Component                 | Quantity |
| ------------------------- | -------- |
| Arduino UNO R3            | 1        |
| HC-SR04 Ultrasonic Sensor | 1        |
| Breadboard (Half-size)    | 1        |
| Jumper Wires              | 6–8      |


---

### 🔌 4. Wiring Diagram

| HC-SR04 Pin | Connects To |
| ----------- | ----------- |
| VCC         | Arduino 5V  |
| GND         | Arduino GND |
| TRIG        | Arduino D9  |
| ECHO        | Arduino D10 |

**📍Note**: Use breadboard for cleaner setup, or direct connections.

---

### 🖥 5. Add Code to Arduino
Click the **Code** button (top-right) → Switch to **Text mode** (instead of blocks)
Then, **copy & paste** the following:

```cpp
const int trigPin = 9;
const int echoPin = 10;
long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
```

---


### ▶️ 6. Simulate the Circuit

- Click **Start Simulation**

- Click **Serial Monitor** icon (bottom of code window)

- Move the virtual object in front of the sensor to see the distance change live!

---

## 💡 Tips for Accurate Simulation

| Tip                             | Why?                                |
| ------------------------------- | ----------------------------------- |
| Use "Object" in front of sensor | To reflect ultrasonic waves         |
| Add delay between readings      | Avoid noise or unstable results     |
| Use real-world layout style     | Better transition to physical setup |


---


## 📷 Optional Screenshot Idea for README

Take a screenshot of:

- Circuit layout on Tinkercad

- Serial Monitor with live distance output
Use this in your `README.md` under a *“Preview"* section.

---

## 🧠 What You Learn with This Simulation

- Real-time sensor interfacing

- Serial communication

- Practical use of delays and pulses

- Debugging in a virtual sandbox

---

**✅ Tinkercad = Zero hardware, 100% learning!**