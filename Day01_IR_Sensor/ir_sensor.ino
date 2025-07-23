//Arduino Code (`ir_sensor.ino`)

int irSensor = 2;   // IR Sensor Output pin Connected to D2
int led = 13;       // On-board LED on pin 13

void setup() {
  // put your setup code here, to run once:

  pinMode(irSensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);   // Start serial communication
}

void loop() {
  // put your main code here, to run repeatedly:

  int obstacle = digitalRead(irSensor);

  if (obstacle == LOW) {  // Object Detected
    digitalWrite(led, HIGH);
    Serial.println("🚧 Obstacle Detected!");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("✅ Clear Path");
  }

  delay(500);
}
