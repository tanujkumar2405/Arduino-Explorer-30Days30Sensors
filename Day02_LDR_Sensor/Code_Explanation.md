# 📘 Code Explanation – Day 2: LDR Sensor with LED Brightness Control

This document explains every line of the `ldr_sensor.ino` file used in the **Day 2** project of *Arduino Explorer: 30 Days, 30 Sensors*.

---

## 🔄 Full Code Recap

```cpp
const int ldrPin = A0;     
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  int ledBrightness = map(ldrValue, 0, 1023, 255, 0);
  analogWrite(ledPin, ledBrightness);

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" => LED Brightness: ");
  Serial.println(ledBrightness);

  delay(200);
}
```

---


## 🧠 Line-by-Line Explanation

### 1. Variable Declarations
```cpp
const int ldrPin = A0;
```

- `const`: Makes the variable constant (value won't change).

- `int`: Declares an integer variable.

- `ldrPin = A0`: The LDR is connected to analog pin A0.

```cpp
const int ledPin = 9;
```
- The LED is connected to PWM-capable digital pin D9.


---


### 2. `setup()` Function
```cpp
void setup() {
```
- Called once when Arduino is powered on or reset.

- Used to initialize settings (pin modes, serial, etc.).

```cpp
  pinMode(ledPin, OUTPUT);
```
- Sets the LED pin as an output so Arduino can send signals to it.

```cpp
  Serial.begin(9600);
```
- Starts serial communication at 9600 baud rate.

- Allows debugging via Serial Monitor.

```cpp
}
```

---


### 3. `loop()` Function

```cpp
void loop() {
```

- Repeats forever after setup runs once.

```cpp
  int ldrValue = analogRead(ldrPin);
```
- Reads the analog value (0 to 1023) from the LDR.

- 0 = dark, 1023 = bright.

```cpp
  int ledBrightness = map(ldrValue, 0, 1023, 255, 0);
```
- `map()` remaps the LDR value to a PWM range (0–255).

- It's inverted: More light = dimmer LED.

- So, dark = bright LED, bright = dim LED.

```cpp
  analogWrite(ledPin, ledBrightness);
```
- Writes a PWM value (0–255) to the LED pin.

- Adjusts LED brightness based on mapped LDR reading.


---


### 4. Debugging Output

```cpp
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
```
- Prints the raw light value from the sensor.

```cpp
  Serial.print(" => LED Brightness: ");
  Serial.println(ledBrightness);
```
- Shows mapped brightness value.

- Helps you observe how light affects LED in real time.


---


### 5. Delay

```cpp
  delay(200);
```
- Waits 200 milliseconds before repeating the loop.

- Prevents spamming the Serial Monitor too fast.


---


## ✅ Summary

- The code reads brightness from the LDR.

- Converts it into a brightness level for the LED.

- More light = dimmer LED. Less light = brighter LED.

- Useful for making automatic night lights, brightness-controlled displays, or light loggers.
