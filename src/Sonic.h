#ifndef SONIC_H
#define SONIC_H

#include <Arduino.h>

/**
 * @class Sonic
 * @brief A simple SDK for ultrasonic sensors (HC-SR04).
 */
class Sonic {
public:
    /**
     * @brief Constructor for the Sonic class.
     * @param trigPin The digital pin connected to the Trigger.
     * @param echoPin The digital pin connected to the Echo.
     */
    Sonic(int trigPin, int echoPin);

    /**
     * @brief Measures the distance to an object.
     * @return The distance in centimeters as a float.
     */
    float get();

private:
    int _trigPin;
    int _echoPin;
    bool _initialized;

    /**
     * @brief Internal method to initialize pins if not already done.
     */
    void _init();
};

#endif
