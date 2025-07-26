#include "DHT.h"

// Define pin and sensor type
#define DHTPIN 2      // Connect DATA pin of DHT11 to D2
#define DHTTYPE DHT11 // Define sensor model as DHT11

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Temperature & Humidity Sensor");
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements
  delay(2000);

  // Reading humidity and temperature
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Default is Celsius

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Display results
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
