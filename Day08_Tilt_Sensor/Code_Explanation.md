# Code Explanation – Day 8: Tilt Sensor – Orientation Change

<br>  

**Author**: Tanuj Kumar  
**Part of**: Arduino Explorer – 30 Days, 30 Sensors

---

## Overview

This Arduino program detects orientation changes using a **Tilt Sensor**.
When the sensor is tilted, it triggers an LED and a buzzer, and logs the event in the Serial Monitor.
When the sensor is in a stable position, the LED and buzzer remain off.

---

## Line-by-Line Breakdown

| **Line** | **Code**                                                           | **Explanation**                                                             |
| -------- | ------------------------------------------------------------------ | --------------------------------------------------------------------------- |
| 1        | `// Day 8: Tilt Sensor – Orientation Change Detection`             | Comment indicating the project name.                                        |
| 2        | `// Part of "Arduino Explorer: 30 Days, 30 Sensors"`               | Identifies the project series.                                              |
| 3        | `// Developed by Tanuj Kumar`                                      | Author credit.                                                              |
| 6        | `const int tiltPin = 2;`                                           | Assigns **digital pin 2** to read tilt sensor output.                       |
| 7        | `const int ledPin = 8;`                                            | Assigns **digital pin 8** to control the LED.                               |
| 8        | `const int buzzerPin = 9;`                                         | Assigns **digital pin 9** to control the buzzer.                            |
| 11       | `int tiltState = LOW;`                                             | Variable to store sensor state (LOW = stable, HIGH = tilted).               |
| 13       | `void setup() {`                                                   | **Setup function** – runs once when Arduino starts.                         |
| 14       | `Serial.begin(9600);`                                              | Starts Serial Monitor at **9600 baud rate** for debugging.                  |
| 15       | `pinMode(tiltPin, INPUT_PULLUP);`                                  | Configures tilt sensor pin as **input** with **internal pull-up**.                                    |
| 16       | `pinMode(ledPin, OUTPUT);`                                         | Configures LED pin as **output**.                                           |
| 17       | `pinMode(buzzerPin, OUTPUT);`                                      | Configures buzzer pin as **output**.                                        |
| 19       | `Serial.println("Tilt Sensor Orientation Monitoring Started...");` | Displays a start-up message in the Serial Monitor.                          |
| 21       | `void loop() {`                                                    | **Loop function** – runs repeatedly after `setup()`.                        |
| 22       | `tiltState = digitalRead(tiltPin);`                                | Reads the tilt sensor's current state (HIGH or LOW).                        |
| 24       | `if (tiltState == HIGH) {`                                         | Checks if the sensor detects tilt.                                          |
| 26       | `digitalWrite(ledPin, HIGH);`                                      | Turns **ON LED** when tilted.                                               |
| 27       | `digitalWrite(buzzerPin, HIGH);`                                   | Turns **ON buzzer** when tilted.                                            |
| 28       | `Serial.println("⚠️ Tilt Detected!");`                             | Sends alert message to Serial Monitor.                                      |
| 30       | `} else {`                                                         | If sensor is NOT tilted...                                                  |
| 32       | `digitalWrite(ledPin, LOW);`                                       | Turns **OFF LED** in stable position.                                       |
| 33       | `digitalWrite(buzzerPin, LOW);`                                    | Turns **OFF buzzer** in stable position.                                    |
| 34       | `Serial.println("✅ Stable Position");`                             | Sends normal state message to Serial Monitor.                               |
| 37       | `delay(500);`                                                      | Adds half-second delay for stable readings and less spam in Serial Monitor. |

<br>  

---

## Logic Flow

1. Arduino reads **tilt sensor state** via `digitalRead(tiltPin)`.

2. If **tilted** → LED ON, buzzer ON, alert printed.

3. If **stable** → LED OFF, buzzer OFF, stable message printed.

4. Repeat every 500 ms.

---

## Key Notes for Beginners

- **Tilt Sensor Output**:

    - **HIGH** = Tilt detected (ball inside moves away from contact).

    - **LOW** = Stable position.

- Digital Read: Reads either `0` (LOW) or `1` (HIGH).

- LED & Buzzer: Both are controlled via `digitalWrite()`.

---

## Possible Extensions

- Add a **counter** to track tilt events.

- Store tilt detection logs on an SD card.

- Trigger a wireless alert using a **Bluetooth module**.

---
