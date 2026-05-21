# Sonic Arduino Library

A simple and easy-to-use Arduino library for ultrasonic sensors (like the HC-SR04).

## Features

*   **Simple API:** Get distance readings with a single function call.
*   **Automatic Pin Configuration:** No need to manually set `pinMode` in your `setup()` function.
*   **Multiple Sensors:** Easily manage multiple ultrasonic sensors in a single sketch.

## Installation

1.  **Download:** Download the latest release of the library from [GitHub](https://github.com/your_username/Sonic/releases) (or clone this repository).
2.  **Arduino IDE:**
    *   Open your Arduino IDE.
    *   Go to `Sketch > Include Library > Add .ZIP Library...`.
    *   Navigate to the downloaded ZIP file and select it.
    *   The library will be installed in your `libraries` folder.

## Usage

### 1. Include the Library

```cpp
#include <Sonic.h>
```

### 2. Create a Sonic Object

Instantiate a `Sonic` object by providing the trigger and echo pin numbers to its constructor.

```cpp
// Define your pins
#define TRIG_PIN 9
#define ECHO_PIN 10

// Create a Sonic object
Sonic mySensor(TRIG_PIN, ECHO_PIN);
```

### 3. Get Distance

Call the `get()` method to retrieve the distance in centimeters.

```cpp
void loop() {
  float distanceCm = mySensor.get();
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");
  delay(1000);
}
```

## Example Sketch: BasicUsage

The `examples/BasicUsage/BasicUsage.ino` sketch demonstrates how to use the `Sonic` library to read distances from a single ultrasonic sensor and print them to the Serial Monitor.

1.  Open the example: `File > Examples > Sonic > BasicUsage`.
2.  Upload the sketch to your Arduino board.
3.  Open the Serial Monitor (Baud Rate: 9600) to see the distance readings.

## API Reference

### `Sonic(int trigPin, int echoPin)`

**Description:** Constructor for the `Sonic` class. Initializes a new ultrasonic sensor object.

**Parameters:**

*   `trigPin`: The digital pin connected to the sensor's `Trig` pin.
*   `echoPin`: The digital pin connected to the sensor's `Echo` pin.

### `float get()`

**Description:** Measures the distance to an object in front of the sensor.

**Returns:** The distance in centimeters as a `float`.

## Contributing

Feel free to contribute to this project by submitting issues or pull requests on GitHub.

## License

This library is released under the MIT License. See the `LICENSE` file for more details.
