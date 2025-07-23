# 🧠 Full Code Explanation – Day 01: IR Obstacle Sensor with Arduino Nano

This file provides a **line-by-line, detailed explanation** of the Arduino code used to detect obstacles using an IR sensor with Arduino Nano.

---

## 📄 Arduino Code

```cpp
int irSensor = 2;   // IR Sensor Output pin connected to D2
int led = 13;       // On-board LED on pin 13

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int obstacle = digitalRead(irSensor);

  if (obstacle == LOW) { // Object detected
    digitalWrite(led, HIGH);
    Serial.println("🚧 Obstacle Detected!");
  } else {
    digitalWrite(led, LOW);
    Serial.println("✅ Clear Path");
  }

  delay(500);
}
```

## 🧩 Line-by-Line Explanation


### ***int irSensor = 2;***

- Declares an integer variable named `irSensor`.

- Assigns it pin number D2 where the IR sensor output pin is connected.


---


### ***int led = 13;***

- Declares an integer variable named `led`.

- Pin 13 is used for the on-board LED on the Arduino Nano.


---


### ***void setup()***

- This special Arduino function runs once when the Arduino is powered on or reset.

- It's used to initialize pins and communication.


---


### ***pinMode(irSensor, INPUT);***

- Configures pin D2 as input.

- Arduino will read signals from the sensor.


---


### ***pinMode(led, OUTPUT);***

- Configures pin 13 as output.

- Used to control the built-in LED — ON or OFF.


---


### ***Serial.begin(9600);***

- Starts serial communication with your computer at a baud rate of 9600 bits/sec.

- Required for printing to the Serial Monitor (for debugging or display).


---


### ***void loop()***

- Another special Arduino function.

- This runs again and again as long as the Arduino is powered.

- It contains the main logic of the program.


---


### ***int obstacle = digitalRead(irSensor);***

- Reads the digital signal from the IR sensor using `digitalRead()`.

- Returns `HIGH` (1) if no object is detected, or `LOW` (0) if an object is in front.

- Stores this value in variable `obstacle`.


---


### ***if (obstacle == LOW)***

- Checks if the sensor detected an object.

- IR sensors typically output LOW when an object is detected.


---


### ***digitalWrite(led, HIGH);***

- Turns the LED ON by sending 5V to pin 13.


---


### ***Serial.println("🚧 Obstacle Detected!");***

- Prints this message to the Serial Monitor.

- Helpful for real-time debugging and visibility.


---


### ***else { ... }***

- If no object is detected, the code inside the `else` block runs:

    - Turns OFF the LED: `digitalWrite(led, LOW);`

    - Prints `✅ Clear Path` to Serial Monitor.


---


### ***delay(500);***

- Waits for 500 milliseconds before repeating the loop.

- Helps slow down the messages on Serial Monitor and avoid flooding.       


---  


## 🧠 Summary of Code Logic  


1. Set pin modes and start serial communication.

2. Continuously check the sensor's output.

3. If obstacle detected → turn on LED, print message.

4. If not → turn off LED, print alternate message.

5. Wait half a second and repeat.


---


## ⚠️ Troubleshooting Tips

- If LED never turns on, try placing your hand closer.

- Adjust the IR sensor’s range potentiometer (small blue screw).

- Make sure GND and 5V are properly connected.

- Try printing `obstacle` directly to see raw values: `Serial.println(obstacle);`


---


## 📌 Important Functions Used

| Function           | Purpose                                       |
| ------------------ | --------------------------------------------- |
| `pinMode()`        | Sets pin as INPUT or OUTPUT                   |
| `digitalRead()`    | Reads HIGH or LOW from digital pin            |
| `digitalWrite()`   | Sends HIGH or LOW to a digital pin            |
| `Serial.begin()`   | Starts Serial Monitor communication           |
| `Serial.println()` | Prints messages to Serial Monitor             |
| `delay()`          | Pauses the program for specified milliseconds |


---


## ✅ You Now Understand

- The basic working of digital IR sensors

- How Arduino reads digital signals

- Using onboard LED for feedback

- Serial communication basics

- Core Arduino functions


---


This concludes the detailed explanation of Day 01's code.
You're now ready to explore more sensors!

👉 To continue, go to `Day02_LDR_Sensor/` (Light Sensor)