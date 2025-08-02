# 🚨 MQ2 Gas Sensor Project – Gas and Smoke Leakage Detection

**Day 7 – Arduino Explorer: 30 Days, 30 Sensors**

---

## 📌 Project Overview

This project demonstrates how to build a simple **Gas and Smoke Leakage Detection System** using the **MQ2 Gas Sensor**, **Arduino Uno**, **LED**, and **Buzzer**. The system detects the presence of gases like **LPG**, **Butane**, **Methane**, **Alcohol**, **Propane**, **Hydrogen**, and **Smoke**, and provides an **audible** (**buzzer**) and **visual** (**LED**) alert when the concentration exceeds a defined threshold.

This is a beginner-friendly safety-focused project that introduces **sensor interfacing**, **analog value reading**, and **condition-based alerting** using an Arduino.

---

## 🎯 Objective

- Detect the presence of flammable gas or smoke using the MQ2 sensor.

- Alert the user through a **buzzer sound** and a **glowing LED** when dangerous levels are detected.

- Display real-time gas level readings via the Serial Monitor.

- Simulate the working model on **Tinkercad Circuits** for easy learning.

---

## 🧰 Components Required

| Component         | Quantity | Description                       |
| ----------------- | -------- | --------------------------------- |
| Arduino Uno       | 1        | Microcontroller board             |
| MQ2 Gas Sensor    | 1        | Detects flammable gases and smoke |
| Red LED           | 1        | Visual alert                      |
| 220Ω Resistor     | 1        | Current limiting for LED          |
| Buzzer            | 1        | Audible alert                     |
| Breadboard (half) | 1        | For easy prototyping              |
| Jumper Wires      | \~8      | For connections                   |

<br>  

---

## 🔌 Circuit Connections

<br>  

| MQ2 Gas Sensor Pin | Connects To   |
| ------------------ | ------------- |
| VCC                | 5V (Arduino)  |
| GND                | GND (Arduino) |
| AOUT               | A0 (Arduino)  |

<br>  
<br>  

| LED Pin     | Connects To            |
| ----------- | ---------------------- |
| Anode (+)   | D8 (via 220Ω resistor) |
| Cathode (–) | GND (Arduino)          |

<br>  
<br>  

| Buzzer Pin   | Connects To |
| ------------ | ----------- |
| Positive (+) | D9          |
| Negative (–) | GND         |

> 📷 Refer to `wiring_diagram.png` and `Schematic View.pdf` for visual reference.

---

## 💻 Arduino Code

See [`gas_sensor_mq2.ino`](./gas_sensor_mq2.ino) for complete source code.

### 🧠 Key Logic

- Read analog value from MQ2 sensor on pin `A0`.

- If the value exceeds a defined threshold (e.g., `400`), turn ON LED and buzzer.

- Otherwise, keep alerts OFF.

- Print real-time gas level on Serial Monitor.

---

## 📈 Working Principle

- The **MQ2 sensor** outputs an analog signal proportional to the gas concentration.

- Arduino reads this signal via its analog input (`A0`) and checks if it exceeds the **gas_threshold**.

- If dangerous gas is detected:

    - 🔔 Buzzer beeps to warn.

    - 🔴 LED glows to provide a visual alert.

- Helps simulate real-world gas leak detection system logic.

---

## 🧪 Simulation on Tinkercad

You can easily simulate this project using **Tinkercad Circuits**.

See [`Tinkercad_Simulation_Guide.md`](./Tinkercad_Simulation_Guide.md) for complete simulation steps.

### Key Steps:

- Add MQ2 sensor, Arduino, LED, and buzzer.

- Connect as per the wiring diagram.

- Upload code and simulate.

- Use the gas concentration slider to test gas leak detection behavior.

---

## 📷 Screenshots

- [`Screenshot 1.png`](./Screenshot%201.png) → Normal air (no gas leak)

- [`Screenshot 2.png`](./Screenshot%202.png) → Gas leakage detected (LED ON, Buzzer ON)

---

## 🧾 Requirements File

See [`requirements.md`](./requirements.md) for software, hardware, and library requirements.

---

## 📄 Files Included

```bash
Day07_Gas_Sensor_MQ2/  
│
├── gas_sensor_mq2.ino              # Arduino Source Code  
├── Code_Explanation.md             # Line-by-line Code Explanation  
├── connection_info.md              # Detailed Circuit Connection Table  
├── requirements.md                 # List of requirements  
├── Tinkercad_Simulation_Guide.md  # Simulation steps for Tinkercad  
├── wiring_diagram.png              # PNG wiring diagram  
├── Schematic View.pdf              # Formal schematic  
├── Screenshot 1.png                # Normal state  
├── Screenshot 2.png                # Alert state  
└── README.md                       # This file  
```

---

## 📚 Learning Outcomes

- Understanding analog sensors with Arduino.

- Interfacing MQ2 gas sensor.

- Creating alert systems using buzzer and LED.

- Reading sensor data in real-time via Serial Monitor.

- Simulating sensor-based systems with Tinkercad.

---

## 🛡️ Safety Application Use Cases

- Home gas leak detection

- Kitchen safety systems

- Industrial smoke/gas monitoring

- IoT-based fire detection systems

---

## 🧠 Tips

- The **threshold value** can be fine-tuned based on the environment and sensitivity needed.

- For real applications, consider adding a relay to activate exhaust fans or send alerts.

---

## 📬 Feedback & Contributions

This project is part of my "[Arduino Explorer: 30 Days, 30 Sensors](https://github.com/tanujkumar2405/Arduino-Explorer-30Days30Sensors)" series.  
Feel free to fork, improve, or share feedback!  

📧 Email: tanujkumar2405@gmail.com  
🔗 LinkedIn: [Tanuj Kumar – Cybersecurity](https://www.linkedin.com/in/tanuj-kumar-cybersecurity/)  
💻 GitHub: [tanujkumar2405](https://github.com/tanujkumar2405)  

---

## Additionally

**If you are using tinkercad then connection to be remenber**:

This device has six wire leads. Power the heater by connecting +5V to either H1 or H2, and ground to the other. The resistance between A and B changes with the amount of gas detected. Connect one side of your detection circuit to A1 or A2, and the other to B1 or B2.
<br> 

> **Note**: Refer [`Tinkercad_Simulation_Guide.md`](./Tinkercad_Simulation_Guide.md) for more detailed connection with this sensor (which has 6 Pins).

--- 
