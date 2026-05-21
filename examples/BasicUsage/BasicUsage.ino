#include <Sonic.h>

// Define the trigger and echo pins for your ultrasonic sensor
#define TRIG_PIN 9
#define ECHO_PIN 10

// Create a Sonic object, passing the trigger and echo pins to the constructor
Sonic Sonic1(TRIG_PIN, ECHO_PIN);

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Get the distance from the sensor
  float distanceCm = Sonic1.get();

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  delay(1000); // Wait for a second before the next reading
}
