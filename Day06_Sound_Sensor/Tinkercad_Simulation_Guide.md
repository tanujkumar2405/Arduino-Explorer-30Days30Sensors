# 🧪 Tinkercad Simulation Guide – Day 6: Sound Sensor 🔊
<br>  

This guide walks you through the steps to simulate the **Sound Detection System** using a **Sound Sensor** and **Arduino Uno** in **Tinkercad Circuits**. It helps validate your setup virtually before implementing it in hardware.

---

## 🔗 Access Tinkercad Circuits

1. Visit https://www.tinkercad.com

2. Login or Sign Up for a free account.

3. Click "**Circuits**" → "**Create New Circuit**"

---

## 🧰 Components Required in Tinkercad

| Component                      | Quantity | Description                                          |
| ------------------------------ | -------- | ---------------------------------------------------- |
| Arduino Uno R3                 | 1        | Microcontroller                                      |
| Generic Sound Sensor (Digital) | 1        | Use a digital input sensor to simulate sound trigger |
| LED                            | 1        | For sound indication                                 |
| Resistor (220Ω)                | 1        | Limits current for LED                               |
| Breadboard                     | 1        | Optional but helpful for layout                      |
| Jumper Wires                   | \~6      | To make necessary connections                        |

---
<br>  

> **NOTE**: Since TinkerCad not builtin `Sound Sensor`, So we used `Potentiometer` as on its place. 

<br>   
---

## 🔌 Circuit Connections

🧭 **Sensor to Arduino**

| Sound Sensor Pin | Connects To |
| ---------------- | ----------- |
| **VCC**          | 5V          |
| **GND**          | GND         |
| **OUT**          | D2          |

<br>  
<br>  

💡 **LED to Arduino**

| LED Pin         | Connects To           |
| --------------- | --------------------- |
| **Anode (+)**   | D13                   |
| **Cathode (-)** | GND via 220Ω Resistor |

---

## 🖼️ Circuit Diagram Reference

Refer to `wiring_diagram.png` and `Schematic View.pdf` provided in this project folder.

---

## 💾 Uploading Code

1. Open the **Code editor** in Tinkercad (top right corner).

2. Delete the default block-based code and switch to **Text** (C/C++) mode.

3. Paste the contents from `sound_sensor.ino`.

4. Click "**Start Simulation**".

---

## 🔍 How to Simulate Sound

Tinkercad does not allow actual audio input. To **simulate sound detection**, follow these steps:

1. Click the sound sensor in the simulation view.

2. Under the **Inspector** (**right panel**):

    - Toggle the "**Value**" from LOW → HIGH manually.

    - This mimics a sound being detected by the sensor.

3. Observe:

    - Serial Monitor outputs "**Sound Detected!**"

    - LED turns **ON** for 1 second.

---

## 🛠️ Debugging Tips

- Ensure **OUT** pin is connected to **D2**.

- Make sure you are using a **Digital** (**not Analog**) **Sound Sensor**.

- Confirm resistor is placed in series with **LED cathode**.

- Check serial monitor for real-time detection messages.

---

## 🎯 Objective Recap

✅ **Verify that**:

- Sound triggers a digital HIGH on D2

- LED glows when sound is "detected"

- Serial monitor prints output

- System resets automatically after delay

---

## 🏁 You’re Ready!

You can now confidently replicate this project using real hardware with minimal debugging. Simulations allow you to verify logic and connections beforehand.

---

## Additionally

Using a potentiometer as a stand-in for a sound sensor in Tinkercad. Here’s how to connect the three pins on the potentiometer:

### 🛠️ Potentiometer Pin Mapping:

| Potentiometer Pin      | Connect To        | Description                     |
| ---------------------- | ----------------- | ------------------------------- |
| **Terminal 1**         | GND               | One end of the resistor         |
| **Terminal 2**         | 5V                | The other end of the resistor   |
| **Wiper (middle pin)** | Digital Pin 2 (D2) | Simulate digital HIGH/LOW signal |

<br>  
---

### 🧠🔄 Adjust the Potentiometer

When the wiper voltage is below ~2.5V, digitalRead(D2) will likely read LOW (0).

When the wiper voltage is above ~2.5V, digitalRead(D2) will likely read HIGH (1).

So, rotating the knob simulates sound being detected or not.
---

### ✅ Tinkercad Setup Steps:

1. Drag a **potentiometer** from the components list.

2. Connect:

    - **Terminal 1** → **GND (black wire)**

    - **Terminal 2** → **5V (red wire)**

    - **Wiper (middle)** → **D2 (Green Wire)**

3. Load your original code — it will now respond to your potentiometer's position like it’s a sound sensor.

> ⚠️ Normally, potentiometers connect to analog pins, but since your code expects **digital input**, we’ll use the wiper to feed D2.

---

### Optional Tip:

If you want to simulate **sudden claps or spikes**, turn the knob quickly past the mid-point to simulate a HIGH signal, then back to LOW.

---
