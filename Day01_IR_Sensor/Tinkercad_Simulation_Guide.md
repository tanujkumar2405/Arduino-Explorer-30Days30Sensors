# 🧪 Tinkercad Simulation Guide – IR Obstacle Sensor (Day 1)

This guide walks you through how to **simulate the IR Obstacle Sensor with Arduino Nano** using [Tinkercad Circuits](https://www.tinkercad.com/).  
Perfect if you **don’t have physical hardware** or want to test before wiring in real life!
  
---

## 🧰 What You’ll Need on Tinkercad

To replicate this project in simulation:

| Component           | Quantity |
|---------------------|----------|
| Arduino Nano        | 1        |
| IR Obstacle Sensor  | 1        |
| Breadboard          | 1        |
| Jumper Wires (M-F)  | 3        |
| LED (optional)      | 1        |
| Resistor (220Ω)     | 1 (if using external LED) |

> Note: If IR Sensor is not available in Tinkercad, use a **pushbutton** or **photoresistor (LDR)** as a stand-in logic input to test LED output or simulate digital pin behavior.

---

## 🖼 Circuit Wiring (Simulated)

Since IR Obstacle Sensor might not exist in Tinkercad:

🅰️ **Substitute Wiring with Pushbutton for Demo:**

| IR Sensor Pin | Substitute      | Arduino Nano Pin |
|---------------|------------------|------------------|
| VCC           | Connect to 5V    | —                |
| GND           | Connect to GND   | —                |
| OUT           | Pushbutton Output| D2               |

- Place a pushbutton in place of sensor
- Connect one side of button to **5V**
- Other side to **D2**, also connect a 10k pull-down resistor to **GND**

💡 Pressing the button simulates object detection (LOW signal on D2)

---

## 📥 Upload the Code

1. Open [Tinkercad Circuits](https://www.tinkercad.com/dashboard)
2. Click **Create New Circuit**
3. Add components as described above
4. Click **Code > Text Editor (Change from Blocks to Text)**
5. Paste the `ir_sensor.ino` code:

```cpp
   int sensorPin = 2;     
   int ledPin = 13;       

   void setup() {
     pinMode(sensorPin, INPUT);    
     pinMode(ledPin, OUTPUT);      
     Serial.begin(9600);           
   }

   void loop() {
     int sensorValue = digitalRead(sensorPin);  

     if (sensorValue == LOW) {
       digitalWrite(ledPin, HIGH);       
       Serial.println("🔴 Obstacle Detected!");
     } else {
       digitalWrite(ledPin, LOW);        
       Serial.println("🟢 Clear Path");
     }

     delay(300);  
   }
```
6. Click **Start Simulation**

7. Click the button → Observe **Serial Monitor output** and **LED behavior**

---

## 🧠 Tips for Beginners

- **Serial Monitor** will only show output if you open it manually inside simulation window.

- You can connect an **external LED** to a different pin (e.g. D7) to simulate hardware feedback.

- Tinkercad doesn’t support all third-party sensors, so using substitutes (button/LDR) is a great workaround.

---

## 🧭 Next Step

Try building it with a **real IR sensor** if you have one — or continue to Day 2: LDR Sensor simulation.

---
