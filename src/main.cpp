#include <Arduino.h>

const int SERVO_PIN = 13;

void servoPulse(int pulse_us)
{
    digitalWrite(SERVO_PIN, HIGH);
    delayMicroseconds(pulse_us);

    digitalWrite(SERVO_PIN, LOW);
    delayMicroseconds(20000 - pulse_us);
}

void servoWrite(int angle)
{
    // 0..180 градусов → примерно 1000..2000 мкс
    int pulse_us = map(angle, 0, 180, 1000, 2000);

    // Посылаем сигнал примерно 0.5 секунды
    for (int i = 0; i < 25; i++)
    {
        servoPulse(pulse_us);
    }
}

void setup()
{
    pinMode(SERVO_PIN, OUTPUT);
}

void loop()
{
    servoWrite(30);
    delay(500);

    servoWrite(90);
    delay(500);

    servoWrite(150);
    delay(500);

    servoWrite(90);
    delay(500);

}