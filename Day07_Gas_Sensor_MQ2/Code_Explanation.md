# 📄 Code_Explanation.md

**Day 7 – Gas Sensor MQ2: Smoke and Gas Leakage Detection**  
**File**: `gas_sensor_mq2.ino`  

---

## 🧠 Objective:

This Arduino code reads values from an **MQ2 Gas Sensor** to detect the presence of smoke or combustible gases. If the gas level crosses a predefined threshold, it activates a **buzzer** and **LED** to alert the user.

---

## 📘 Code Walkthrough
<br>  

```cpp
    const int gasSensorPin =A0;
```
- Declares `gasSensorPin` as analog pin A0.
- MQ2 gas sensor outputs analog voltage based on gas concentration.

---

```cpp
    const int ledPin = 8;
    const int buzzerPin = 9;
```

- `ledPin`: Connected to an LED for visual alert.

- `buzzerPin`: Connected to a buzzer for audio alert.

---

```cpp
    int gasValue = 0;
    int gasThreshold = 300;
```
- `gasValue`: Stores real-time sensor data.
- `gasThreshold`: Trigger level for LED and buzzer. **Can be calibrated** based on environment.

---

```cpp
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.println("MQ2 Gas Sensor Monitoring Started...");
}
```

- `Serial.begin(9600)`: Starts communication with Serial Monitor.

- `pinMode()`: Defines LED and buzzer pins as outputs.

- Sends an initial startup message to the Serial Monitor.

---

```cpp
    void loop() {
    gasValue = analogRead(gasSensorPin);
    Serial.print("Gas Value: ");
    Serial.println(gasValue);
```
- Continuously reads the gas level using `analogRead()`.
- Prints the value to the Serial Monitor for monitoring.

---

```cpp
  if (gasValue > gasThreshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("⚠️ ALERT: Gas Leakage Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
```
- If gas level is above the threshold:

    - Turns ON the **LED** and **buzzer**.

    - Displays an **alert** message on the Serial Monitor.

- Else:

    - Turns both OFF.

---

```cpp
    delay(1000);
    }
```
- Waits 1 second between each reading to avoid flooding the serial output and to stabilize sensor readings.

---

## 🛠️ How It Works:

| Component       | Role                             |
|----------------|----------------------------------|
| MQ2 Sensor      | Detects gas concentration (LPG, smoke, methane, etc.) |
| Arduino         | Processes analog data            |
| LED             | Glows when gas level is high     |
| Buzzer          | Beeps when gas level is high     |
| Serial Monitor  | Displays real-time readings and alerts |

---

## 📝 Notes:
- You can fine-tune `gasThreshold` after testing in your specific environment.
- For real-world applications, you can log data or trigger relays for safety systems.
- MQ2 sensors need a **preheating time (~1–2 minutes)** before giving accurate readings.

---

