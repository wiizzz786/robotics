#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>

#define DHTPIN 4      // Pin connected to the DHT sensor
#define DHTTYPE DHT11 // Define the type of sensor used

DHT dht(DHTPIN, DHTTYPE); // Create an instance of the DHT class

unsigned long previousMillis = 0;  // Stores the last time the temperature was updated
const long interval = 1000;        // Interval at which to switch units (milliseconds)
bool showCelsius = true;           // Flag to toggle between Celsius and Fahrenheit

void setup() {
  Serial.begin(9600);  // Start serial communication
  dht.begin();         // Initialize the DHT sensor
}

void loop() {
  unsigned long currentMillis = millis(); // Get the current time

  // Read sensor data
  float humidity = dht.readHumidity();
  float temperatureC = dht.readTemperature();
  float temperatureF = dht.readTemperature(true); // true for Fahrenheit

  // Check if any reads failed and exit early
  if (isnan(humidity) || isnan(temperatureC)) {
    Serial.println("Failed to read sensor!");
    return;
  }

  // Alternate the display every `interval` milliseconds
  if (currentMillis - previousMillis >= interval) {
    // Save the last time you updated the display
    previousMillis = currentMillis;

    // Toggle the temperature unit
    showCelsius = !showCelsius;
  }

  // Print the results to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");

  Serial.print("Temperature: ");
  if (showCelsius) {
    Serial.print(temperatureC);
    Serial.print(" °C");
  } else {
    Serial.print(temperatureF);
    Serial.print(" °F");
  }
  Serial.println();
}
