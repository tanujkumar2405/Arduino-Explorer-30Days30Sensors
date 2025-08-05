# Connection Info – Day 8: Tilt Sensor – Orientation Change

<br>  

**Author**: Tanuj Kumar  
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

## 📌 Overview

This file provides detailed information about connecting the **Tilt Sensor** with an **Arduino Uno**.  
It includes pin mappings, component placement notes, and additional tips to ensure the circuit works as intended.

---

## 🔌 Pin Connection Table

| **Component**   | **Pin on Component** | **Arduino Uno Pin**      | **Notes**                               |
| --------------- | -------------------- | ------------------------ | --------------------------------------- |
| **Tilt Sensor** | Pin 1 (Signal)       | `D2`                     | Reads HIGH when tilted, LOW when stable |
|                 | Pin 2 (GND)          | `GND`                    | Common ground connection                |
| **LED**         | Anode (+)            | `D8` (via 220Ω resistor) | Lights up when tilt detected            |
|                 | Cathode (–)          | `GND`                    | Connect to Arduino ground               |
| **Buzzer**      | Positive (+)         | `D9`                     | Sounds when tilt detected               |
|                 | Negative (–)         | `GND`                    | Connect to Arduino ground               |
| **Arduino Uno** | `5V`                 | VCC (Tilt Sensor)        | Provides sensor power                   |
|                 | `GND`                | Common Ground            | Shared with all components              |

<br>  

---

## 📍 Wiring Notes

1. **Tilt Sensor** has **two pins**:

    - One pin goes to **digital pin D2** for signal.

    - The other pin goes to **GND**.

2. The **LED** must have a **current-limiting resistor** (220Ω–330Ω) to prevent damage.

3. The **buzzer** can be passive or active:

    - **Active**: Will sound immediately when powered.

    - **Passive**: Needs frequency signals for tone (modify code if needed).

4. All components share a common ground.

<br>  

---

## ⚠️ Common Mistakes to Avoid

- ❌ Connecting tilt sensor directly to 5V without proper wiring.

- ❌ Forgetting the resistor for LED → may burn out LED.

- ❌ Not sharing a common ground → circuit won’t work.

- ❌ Using analog pin for tilt sensor (use digital pin instead).

---

## 🖼 Example Wiring Flow (Text Diagram)

```yaml
Tilt Sensor:
  Pin 1 (Signal) → Arduino D2
  Pin 2 (GND)   → Arduino GND

LED:
  Anode (+)     → Arduino D8 → 220Ω Resistor → LED Anode
  Cathode (–)   → Arduino GND

Buzzer:
  Positive (+)  → Arduino D9
  Negative (–)  → Arduino GND
```

<br>

---

## 💡 Pro Tips

- Test the sensor in Serial Monitor first before adding LED & buzzer.

- If you get inverted results (LED ON when stable), swap HIGH/LOW logic in the code.

- Keep wires short to reduce false triggers from vibration.

---

