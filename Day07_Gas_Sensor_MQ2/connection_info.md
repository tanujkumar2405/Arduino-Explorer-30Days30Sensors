# 🔌 connection_info.md
<br>  

**Project Title**: Smoke and Gas Leakage Detection using MQ2 Gas Sensor
**Day**: 7
**Sensor Used**: MQ2 Gas Sensor

---

## 📊 MQ2 Gas Sensor Pinout:

| Pin on MQ2 Module | Description                | Connects To (Arduino)      |
| ----------------- | -------------------------- | -------------------------- |
| VCC               | Power Supply (+5V)         | 5V                         |
| GND               | Ground                     | GND                        |
| AOUT              | Analog Output (Gas Levels) | A0                         |
| DOUT *(optional)* | Digital Output (threshold) | *Not used in this project* |
<br>

> 💡 **Note**: We are using the **Analog Output (AOUT)** to get precise gas readings.

---

## 🔔 Buzzer Connection:

| Buzzer Pin | Description | Connects To (Arduino) |
| ---------- | ----------- | --------------------- |
| + (VCC)    | Positive    | D9                    |
| - (GND)    | Ground      | GND                   |

> ✅ The buzzer gives an audible alert when gas is detected beyond the threshold.

---

## 💡 LED Connection:

| Component   | Description           | Connects To (Arduino) |
| ----------- | --------------------- | --------------------- |
| Anode (+)   | Through 220Ω Resistor | D8                    |
| Cathode (-) | GND                   | GND                   |

> 🔴 The LED turns ON along with the buzzer to give a visual indication of gas leakage.

---

## 🖥 Arduino Board:

| Board              | Port | Purpose                           |
| ------------------ | ---- | --------------------------------- |
| Arduino Uno / Nano | USB  | Upload code and power the circuit |

<br>  

---

## ⚙️ Complete Circuit Summary:

| Component   | Connected To Arduino Pin |
| ----------- | ------------------------ |
| MQ2 AOUT    | A0                       |
| MQ2 VCC     | 5V                       |
| MQ2 GND     | GND                      |
| LED Anode   | D8 (via 220Ω resistor)   |
| LED Cathode | GND                      |
| Buzzer +    | D9                       |
| Buzzer -    | GND                      |

<br>

---

## 🔌 Wiring Tips:

- Use **breadboard** and **jumper wires** to easily connect components.

- **Double-check** VCC and GND pins for each component to prevent reverse polarity damage.

- Keep the **sensor elevated** on the breadboard for better airflow and accurate detection.

---

## Additionally

**If you are using tinkercad then connection to be remenber**:

This device has six wire leads. Power the heater by connecting +5V to either H1 or H2, and ground to the other. The resistance between A and B changes with the amount of gas detected. Connect one side of your detection circuit to A1 or A2, and the other to B1 or B2.
<br> 

> **Note**: Refer [`Tinkercad_Simulation_Guide.md`](./Tinkercad_Simulation_Guide.md) for more detailed connection with this sensor (which has 6 Pins).

--- 
