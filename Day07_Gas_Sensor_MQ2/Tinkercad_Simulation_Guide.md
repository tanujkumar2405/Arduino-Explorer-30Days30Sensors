# 🧪 Tinkercad_Simulation_Guide.md

**Project Name**: Gas and Smoke Leakage Detection using MQ2
**Day**: 7
***Platform**: [Tinkercad Circuits](https://www.tinkercad.com/)

---

## 🎯 Objective:

Simulate a gas/smoke leakage detection system using the **MQ2 sensor**, **LED**, and **buzzer** on **Tinkercad** to visualize how the system behaves in case of gas presence.

---

## 🧰 Components to Add in Tinkercad:

| Component           | Quantity  |
| ------------------- | --------- |
| Arduino Uno         | 1         |
| MQ2 Gas Sensor      | 1         |
| LED (Red preferred) | 1         |
| 220Ω Resistor       | 1         |
| Buzzer              | 1         |
| Breadboard (half)   | 1         |
| Jumper Wires        | As needed |

> 🔍 **Note**: MQ2 sensor is available in Tinkercad under "Gas Sensor MQ2".

---

## 🔌 Step-by-Step Connection Guide:

1. ### MQ2 Gas Sensor
    - VCC → 5V (Arduino)

    - GND → GND (Arduino)

    - AOUT → A0 (Arduino)

2. ### LED Connection
    - Anode (+) → D8 (via 220Ω resistor)

    - Cathode (–) → GND

3. ### Buzzer Connection
    - Positive (+) → D9

    - Negative (–) → GND

---

## 📥 Uploading the Code:

1. Click on the **Code** editor.

2. Select "**Text**" **mode** instead of blocks.

3. Paste the `gas_sensor_mq2.ino` Arduino code.

Click “**Start Simulation**”.

---

##  How to Simulate Gas Detection:

### Using Tinkercad Gas Slider:

1. Click on the **MQ2 sensor** in the simulation.

2. You will see a “**Gas Level**” **slider** on the right.

3. Increase the gas value to simulate a leak (e.g., set to 800+).

4. You will observe:

    - 🔴 **LED turns ON**

    - 🔔 **Buzzer beeps**

5. Lower the value below threshold (e.g., <400) to simulate normal air — the alert turns OFF.

---

## 🧪 Expected Output:

| Gas Level | LED | Buzzer    |
| --------- | --- | --------- |
| Low       | OFF | OFF       |
| High      | ON  | ON (Beep) |

<br>  

---

## 📸 Tip:

Take screenshots of:

- Initial clean air state.

- Simulated gas leak state (LED ON, Buzzer active).

These can be saved as:

- `Screenshot 1.png` (Normal state)

- `Screenshot 2.png` (Leakage detected)

<br>  

---
---

## Additionally

**If you are using tinkercad then connection to be remenber**:

This device has six wire leads. Power the heater by connecting +5V to either H1 or H2, and ground to the other. The resistance between A and B changes with the amount of gas detected. Connect one side of your detection circuit to A1 or A2, and the other to B1 or B2.

---

## 🔌 Detailed Wiring & Circuit Guide for MQ2 6-Pin Sensor (Tinkercad)

The MQ2 sensor you're using has **two heating pins (H1 & H2)** and **four signal/resistance pins (A1, A2, B1, B2)**. This version **does not come pre-attached with an analog output pin**, so we must build the sensing circuit ourselves.

---

## 🧠 Understanding the Pins

| Pin    | Description                                                               |
| ------ | ------------------------------------------------------------------------- |
| H1, H2 | Heater terminals. One connects to +5V, the other to GND.                  |
| A1, A2 | One side of the sensor element (resistive material). Use either A1 or A2. |
| B1, B2 | Other side of the sensor element. Use either B1 or B2.                    |

<br>

---

## ✅ Recommended Wiring (Basic Setup with Arduino UNO)

| MQ2 Pin | Connects To           | Purpose                            |
| ------- | --------------------- | ---------------------------------- |
| H1      | 5V on Arduino         | Power to internal heater           |
| H2      | GND on Arduino        | Complete heater circuit            |
| A1      | Analog pin A0 on UNO  | Signal input from sensor           |
| B1      | GND via 10kΩ resistor | Voltage divider with load resistor |

<br>

> **Note**: We are building a **voltage divider**. The analog signal on A0 depends on the gas concentration.

---

## 🔧 Circuit Explanation

The MQ2’s sensing component changes resistance depending on the presence of smoke/gas. We use a **load resistor** (e.g., 10kΩ) to convert this resistance change into a voltage change, which we then read using Arduino’s `analogRead()`.

```text
     5V
      |
     H1
      |
    MQ2 Heater
      |
     H2
      |
     GND

Sensor Side:
 A1 -----+------> A0 (Arduino)
         |
         \
        [R] 10kΩ
         \
         |
        B1 ----- GND

        5V ----[10k]---- A1 (to A0) ----[Sensor Internals]---- B1 ----[10k]---- GND

```

---

## 🛠️ Extra Tips

- A1 or A2 → Use either one (internally connected).

- B1 or B2 → Same.

- If unsure which to use, use **A1** and **B1** for simplicity.

- Always use a load resistor between sensor and ground (10kΩ is common).

- Let sensor warm up for a few seconds before reading reliable values.

---

## 🧪 Tinkercad Notes

- Use **Rotating Potentiometer** as a virtual resistor if you don’t have a fixed 10kΩ resistor.

- You’ll need to manually build the divider circuit – Tinkercad doesn’t auto-handle this for 6-pin MQ sensors.

- Snap screenshots for your documentation showing:

    - Power connections (H1/H2)

    - Signal connections (A1 to A0, B1 to GND via resistor)

    - Output on Serial Monitor

---

## 📌 Summary Fixes

- Add 10k resistor between A1 and 5V to act as pull-up.

- Keep existing resistor from B1 to GND.

- A1 → A0 (Analog input of Arduino).

---

