#include <Arduino.h>
#include "ESP32library.h"

static int servoPin;

void servoInit(int pin)
{
    servoPin = pin;
    pinMode(servoPin, OUTPUT);
}

static void servoPulse(int pulse_us)
{
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulse_us);

    digitalWrite(servoPin, LOW);
    delayMicroseconds(20000 - pulse_us);
}

void servoWrite(int angle)
{
    int pulse_us = map(angle, 0, 180, 1000, 2000);

    for (int i = 0; i < 25; i++)
    {
        servoPulse(pulse_us);
    }
}