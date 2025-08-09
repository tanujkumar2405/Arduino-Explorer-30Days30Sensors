# Soil Moisture Sensor – Smart Irrigation

Detailed Circuit Connection Information

---

### 1. Components Used

- **Arduino Uno/Nano** – Microcontroller for reading sensor data and controlling outputs

- **Soil Moisture Sensor Module** – Detects soil water content

- **LED** – Indicates dry soil condition

- **Relay Module** – Controls the water pump

- **Water Pump** – Irrigates the soil when moisture is low

- **Jumper Wires** – For connections

---

### 2. Pin Mapping Table

| Component                  | Pin on Component       | Connects to Arduino Pin          | Function                  |
| -------------------------- | ---------------------- | -------------------------------- | ------------------------- |
| **Soil Moisture Sensor**   | VCC                    | 5V                               | Power supply to sensor    |
|                            | GND                    | GND                              | Common ground             |
|                            | AO *(Analog Output)*   | A0                               | Reads soil moisture level |
| **LED**                    | Anode (+, long leg)    | D8                               | Indicates dry soil        |
|                            | Cathode (−, short leg) | GND                              | Completes LED circuit     |
| **Relay Module**           | VCC                    | 5V                               | Powers relay module       |
|                            | GND                    | GND                              | Common ground             |
|                            | IN                     | D9                               | Controls pump on/off      |
| **Water Pump** (via Relay) | + Terminal             | Relay NO (Normally Open) Contact | Power line to pump        |
|                            | − Terminal             | Power Supply Negative            | Pump ground connection    |

<br>  

---

### . Wiring Diagram (Text-Based)

1. Connect **Soil Moisture Sensor VCC** → **Arduino 5V**

2. Connect **Soil Moisture Sensor GND** → **Arduino GND**

3. Connect **Soil Moisture Sensor AO** → **Arduino A0**

4. Connect **LED Anode** → **Arduino D8**

5. Connect **LED Cathode** → **Arduino GND**

6. Connect **Relay Module VCC** → **Arduino 5V**

7. Connect **Relay Module GND** → **Arduino GND**

8. Connect **Relay Module IN** → **Arduino D9**

Connect pump positive wire to **Relay NO**, relay **COM** to **external pump power supply positive**, and **pump negative wire to external supply negative**.

---

### 4. Working Principle

- **Sensor Reading**: The moisture sensor outputs a varying voltage on **AO** depending on soil wetness.

- **Dry Soil**: Resistance between probes increases → Output value on **A0** increases → If value > threshold (500), LED and pump turn **ON**.

- **Wet Soil**: Resistance decreases → Output value decreases → LED and pump remain **OFF**.

---

### 5. Power Requirements

- **Arduino**: 5V USB or external supply

- **Soil Sensor**: 3.3V–5V

- **Relay Module**: 5V logic compatible

- **Pump**: Separate power supply recommended (voltage and current as per pump specs)

---
