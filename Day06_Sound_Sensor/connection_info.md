# 🔌 Circuit Diagram: Sound Sensor with Arduino Uno
<br>  

This circuit helps you connect a Sound Sensor module with an **LED** to visualize sound detection.

---

## 🧰 Required Components:

- Arduino Uno (or compatible)

- Sound Sensor Module (KY-038 or LM393-based)

- 1x LED

- 1x 220Ω Resistor

- Jumper Wires

- Breadboard

---

<br>  

> **NOTE**: Since TinkerCad not builtin `Sound Sensor`, So we used `Potentiometer` as on its place. 

<br> 

---

## 📊 Sound Sensor Pinout (LM393-based typical):

| Pin on Sensor | Label        | Connects To          |
| ------------- | ------------ | -------------------- |
| 1             | AO (Analog)  | A0 on Arduino        |
| 2             | GND          | GND on Arduino       |
| 3             | VCC          | 5V on Arduino        |
| 4 (optional)  | DO (Digital) | (Optional, not used) |

---

## 🔌 LED Connection:

| LED Pin               | Connects To                     |
| --------------------- | ------------------------------- |
| Longer leg (Anode)    | Digital Pin 8 via 220Ω resistor |
| Shorter leg (Cathode) | GND                             |

---

## 🧠 Working Logic:

- The **analog output (AO)** of the sound sensor sends values based on sound intensity.

If the sound crosses a certain threshold, the Arduino turns **ON** the LED.

Otherwise, the LED remains **OFF**.

---

## 🖼️ Visual Layout:

```scss
[Sound Sensor]
  AO  ───────────── A0 (Arduino)
  VCC ───────────── 5V (Arduino)
  GND ───────────── GND (Arduino)

[LED]
  Anode (+) ───── 220Ω ───── Pin 8 (Arduino)
  Cathode (–) ──── GND (Arduino)
```

> Make sure the sensor is placed close to the sound source (claps or voice) during testing.

---

## 🧪 Tinkercad Tips:

- Use **KY-038** sensor in Tinkercad.

- Simulate sound by adjusting the analog input slider during simulation.

- Watch the LED respond as the analog value increases.

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
