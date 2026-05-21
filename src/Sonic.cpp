#include "Sonic.h"

Sonic::Sonic(int trigPin, int echoPin) {
    _trigPin = trigPin;
    _echoPin = echoPin;
    _initialized = false;
}

void Sonic::_init() {
    if (!_initialized) {
        pinMode(_trigPin, OUTPUT);
        pinMode(_echoPin, INPUT);
        _initialized = true;
    }
}

float Sonic::get() {
    // Ensure pins are configured
    _init();

    // Clear the trigPin
    digitalWrite(_trigPin, LOW);
    delayMicroseconds(2);

    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trigPin, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    long duration = pulseIn(_echoPin, HIGH);

    // Calculating the distance
    // Speed of sound is ~343m/s or 0.0343 cm/us
    // Distance = (time * speed) / 2
    float distance = duration * 0.0343 / 2;

    return distance;
}
