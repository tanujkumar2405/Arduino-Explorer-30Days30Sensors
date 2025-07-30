# 🧪 Tinkercad Simulation Guide – Day 2: LDR Sensor + LED Brightness Control

Welcome to the Tinkercad Simulation walkthrough for **Day 2** of the **Arduino Explorer: 30 Days, 30 Sensors** project. This guide will help you simulate the LDR light detection and LED brightness control circuit without using physical hardware.

---

## 💡 Why Use Tinkercad?

- No physical components needed
- Easy drag-and-drop interface
- Real-time simulation of sensors, LEDs, and Arduino code
- Great for testing and learning safely

---

## 🔗 Open the Tinkercad Simulator

👉 [Click Here to Open Tinkercad Circuits](https://www.tinkercad.com/dashboard?type=circuits)  
Make sure you're signed into your Tinkercad account.

---

## 🛠 Components You’ll Need (in Tinkercad)

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno/Nano       | 1        |
| LDR (Photoresistor)    | 1        |
| 10kΩ Resistor          | 1        |
| LED                    | 1        |
| 220Ω Resistor (for LED)| 1        |
| Breadboard (optional)  | 1        |
| Wires                  | As needed |

---

## 🔌 Circuit Setup (Same as Real Hardware)

### 📋 Wiring Instructions:

| Part                | Connect To               |
|---------------------|--------------------------|
| LDR Leg 1           | `5V` on Arduino          |
| LDR Leg 2           | `A0` on Arduino          |
| 10kΩ Resistor       | Between `A0` and `GND`   |
| LED Anode (+)       | `D9` via 220Ω resistor   |
| LED Cathode (–)     | `GND` on Arduino         |

📝 Use a **voltage divider** circuit with LDR + 10kΩ resistor → Analog input to A0  
📎 [See wiring_diagram.png](./wiring_diagram.png)

---

## 💻 Upload the Code

1. Click the **Code** button in Tinkercad.
2. Choose **"Text" view** to use Arduino code.
3. Paste the following code:

```cpp
const int ldrPin = A0;
const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  int ledBrightness = map(lightValue, 0, 1023, 255, 0); // Reverse mapping
  analogWrite(ledPin, ledBrightness);

  Serial.print("Ambient Light Level: ");
  Serial.print(lightValue);
  Serial.print(" | LED Brightness: ");
  Serial.println(ledBrightness);

  delay(200);
}
```
✅ This is the same code as in `[ldr_sensor.ino](./ldr_sensor.ino)`

---

## ▶️ Start the Simulation

1. Click the **Start Simulation** button (top left).

2. Open the **Serial Monitor** (click the small monitor icon or expand "Code" window).

3. Adjust the **light level slider** on the LDR (you’ll see a small slider or sun icon appear).

4. Observe:

    - The LED dims in bright light.

    - The LED brightens in the dark.

    - The Serial Monitor updates the light values and brightness in real-time.

---

## 🧪 Sample Output

```yaml
Ambient Light Level: 947 | LED Brightness: 18
Ambient Light Level: 432 | LED Brightness: 150
Ambient Light Level: 127 | LED Brightness: 223
```
Try simulating both bright and dark environments by dragging the slider or icon over the LDR.

---

## 📸 Tips for Tinkercad Projects
Label wires and components for clarity

Use comments in code to explain each step

Take a screenshot (`Screenshot 1.png`) of your simulation setup for documentation

Save a copy of your Tinkercad design and share the public link in your project folder or README

---

## 🤝 Questions or Need Help?

Reach out via:

- GitHub Discussions: [Open here](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/discussions)

- LinkedIn: [Tanuj Kumar](https://www.linkedin.com/in/tanuj-kumar-cybersecurity)

- GitHub Issues: [Report a bug or ask a question](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/issues)

---
