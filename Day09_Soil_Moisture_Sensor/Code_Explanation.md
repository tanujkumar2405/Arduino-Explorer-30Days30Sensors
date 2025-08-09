# Code Explanation – Day 9: Soil Moisture Sensor (Smart Irrigation)

<br>  

### Overview
This code reads soil moisture levels using an analog sensor and automatically controls a **pump** (via relay) and an **LED** indicator based on the detected moisture level.  
It’s designed for **automated irrigation systems** in gardens or farms.

---

## Code Sections
<br>  

### 1️⃣ Variable Declarations

```cpp
const int moistureSensorPin = A0;  // Analog pin connected to soil moisture sensor
const int ledPin = 8;              // LED for dry soil indication
const int pumpPin = 9;             // Pump relay control pin
int moistureValue = 0;             // Variable to store sensor reading
int moistureThreshold = 500;       // Threshold value for dry/wet soil (adjustable)
```

- `moistureSensorPin`: The **A0 analog pin** reads voltage from the soil moisture sensor.

- `ledPin`: A **digital pin** connected to an LED that indicates **dry soil**.

- `pumpPin`: A **digital pin** controlling a **water pump relay**.

- `moistureValue`: Stores the live reading from the sensor (0–1023).

- `moistureThreshold`: The **cut-off** value to determine **dry vs. wet soil**.

    - Lower values → Wet soil

    - Higher values → Dry soil

---

### 2️⃣ `setup()` – **Initial Configuration**

```cpp
void setup() {
  Serial.begin(9600);              // Start Serial Monitor
  pinMode(ledPin, OUTPUT);         // LED pin as output
  pinMode(pumpPin, OUTPUT);        // Pump relay pin as output

  Serial.println("Soil Moisture Sensor Monitoring Started...");
}
```

- `Serial.begin(9600)`: Enables **serial communication** at **9600** baud for debugging and live data viewing.

- `pinMode()`: Configures LED and pump relay pins as outputs.

- A startup message is printed to the Serial Monitor.

---

### 3️⃣ `loop()` – **Continuous Monitoring**

```cpp
moistureValue = analogRead(moistureSensorPin); // Read sensor value
Serial.print("Soil Moisture Value: ");
Serial.println(moistureValue);
```

- `analogRead()`: Reads the sensor’s analog signal (0 = max wet, 1023 = very dry).

- The reading is sent to the Serial Monitor.

---

### 4️⃣ Dry Soil Condition

```cpp
if (moistureValue > moistureThreshold) {
  digitalWrite(ledPin, HIGH);    // Turn on LED
  digitalWrite(pumpPin, HIGH);   // Turn on pump
  Serial.println("🌱 Soil is dry! Pump ON.");
}
```

- If the reading is **above threshold** → The soil is dry.

- **LED ON** and **pump ON** to start watering.

- A message is displayed: `"Soil is dry! Pump ON."`

---

### 5️⃣ Sufficient Moisture Condition

```cpp

else {
  digitalWrite(ledPin, LOW);     // Turn off LED
  digitalWrite(pumpPin, LOW);    // Turn off pump
  Serial.println("💧 Soil moisture sufficient. Pump OFF.");
}
```

- If the reading is **below or equal to threshold** → The soil is wet enough.

- **LED OFF** and **pump OFF** to save water.

- A message is displayed: `"Soil moisture sufficient. Pump OFF."`

---

### 6️⃣ Delay

```cpp

delay(1000);
```

- **Waits 1 second** before taking another reading to prevent excessive pump switching.

<br>  

---

## 💡 Tips

- **Calibrating Threshold**: Place the sensor in wet soil, note the value, then place it in dry soil, note the value, and set `moistureThreshold` halfway between those readings.

- **Sensor Care**: Avoid leaving the sensor in wet soil for too long to prevent corrosion—use waterproof probes if possible.

- **Pump Safety**: Always use a relay or MOSFET to control pumps, never connect pumps directly to Arduino.

---
