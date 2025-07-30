# 📅 Day 2: LDR – Light Detection & Brightness Control

Welcome to Day 2 of the **Arduino Explorer: 30 Days, 30 Sensors** series. Today, we explore the **LDR (Light Dependent Resistor)** — a simple yet powerful sensor that changes its resistance based on ambient light. In this project, we’ll read light intensity and dynamically control an LED’s brightness based on it.

---

## 📌 Project Summary

- **Sensor**: LDR (Light Dependent Resistor)
- **Objective**: Detect light levels and adjust LED brightness accordingly.
- **Level**: Beginner
- **Skills Practiced**: Analog input reading, PWM output, voltage divider, brightness control.

---

## 🎯 Features

- Real-time light intensity detection
- Automatic LED brightness adjustment
- Serial Monitor feedback with light values
- Hands-on understanding of voltage dividers

---

## 🖼️ Schematic Diagram

📎 See [`Schematic View`](./Schematic View.pdf)  
💡 Built using Fritzing for clarity and beginner understanding

---

## ⚙️ ✅ Optimized Circuit Diagram (LDR + LED Brightness Control)

### 🔌 Connections Table

| Component           | Arduino Pin            | Notes                            |
| ------------------- | ---------------------- | -------------------------------- |
| **LDR** one leg     | `5V`                   | Connected to VCC                 |
| **LDR** other leg   | `A0`                   | Connect this to analog input pin |
| **10kΩ Resistor**   | Between `A0` and `GND` | Forms voltage divider with LDR   |
| **LED (Anode/+)**   | `D9` via 220Ω resistor | PWM pin for brightness control   |
| **LED (Cathode/–)** | `GND`                  | Connect directly to GND          |


📎 See: [`wiring_diagram`](./wiring_diagram.png)


---

## 🧠 Simple Explanation
The LDR + 10kΩ form a voltage divider.

More light → LDR resistance drops → A0 reads higher value.

Less light → LDR resistance increases → A0 reads lower value.

The LED is controlled via PWM on pin D9 using `analogWrite()`.

---

## 🔄 Wiring Flow:

```pgsql
                +--------------------+
                |                    |
               [ LDR ]               |
                |        A0 <--------+
               [10kΩ]                |
                |                    |
               GND                  5V

        (Voltage divider feeding A0)

                +--------------------------+
                |                          |
               D9 ----[220Ω]----->| (LED)  |
                                  |        |
                                 GND     Brightness changes based on LDR
```

---


## 🟢 Why This Is Optimized:

- Follows standard voltage divider rule.

- Keeps analog read circuit separate from LED control.

- LED brightness changes smoothly via PWM (on D9).

- Works reliably with minimal parts.

---

## 🧾 Requirements

All hardware, software, and tools are listed in [`requirements.md`](./requirements.md)

---

## 🧠 How It Works

The LDR forms a voltage divider with a 10kΩ resistor. As light hits the LDR, its resistance decreases, raising the voltage at the junction read by Arduino’s analog pin `A0`.

We then use `analogWrite()` on pin `D9` (PWM) to control the LED's brightness — brighter in the dark, dimmer in light. This simulates automatic light control systems used in smart homes and streetlights.

---

## 🧪 Output Preview

[Serial Monitor]  
Ambient Light Level: 248  
LED Brightness: 98  

```Outout
R Value: 957 => LED Brightness: 17
LDR Value: 957 => LED Brightness: 17
LDR Value: 957 => LED Brightness: 17
LDR Value: 942 => LED Brightness: 21
LDR Value: 54 => LED Brightness: 242
LDR Value: 967 => LED Brightness: 14
LDR Value: 662 => LED Brightness: 90
LDR Value: 435 => LED Brightness: 147
LDR Value: 435 => LED Brightness: 147
```

Darken the sensor ➝ LED gets brighter.  
Shine a flashlight ➝ LED dims.

---

## 💻 Arduino Code

📎 View complete code: [`Day02_LDR.ino`](./Day02_LDR.ino)

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

---

## 📘 Learning Outcomes

- Understand how LDRs function in different lighting conditions

- Learn about voltage dividers and analog input reading

- Master PWM control using analogWrite()

- Improve skills in building responsive systems using sensors


---


## 🧠 Real World Applications

- Automatic street lighting

- Solar garden lamps

- Brightness-adjustable smart lights

- Light-based burglar alarms


---


## 📂 Folder Structure
```
📁 Day02_LDR
├── Day02_LDR.ino
├── README.md
├── requirements.md
├── Code_Explanation.md
├── Schematic View.pdf
├── wiring_diagram.png
├── Tinkercad_Simulation_Guide.md
└── Screenshot 1.png
```

---


## 💬 Feedback & Questions

If you have any questions, suggestions, or find a bug, feel free to [open an issue](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/issues) or start a [discussion](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/discussions)!


---


## 📜 License
This project is licensed under the [MIT License](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors/blob/main/LICENSE). Feel free to use, modify, and share with attribution.


---


**“Learning electronics one sensor at a time.” — Tanuj Kumar**
