# ESP32 MG90S Servo Control

A simple ESP32 project for controlling an MG90S servo motor using a manually generated control signal.

## Project Overview

This project demonstrates basic servo motor control with an ESP32 without using a dedicated servo library.

The MG90S is connected to the ESP32 as follows:

| MG90S | ESP32 |
|---|---|
| VCC | VN (5V) |
| GND | GND |
| Signal | GPIO 13 |

### Wiring

![ESP32 and MG90S wiring](https://github.com/HugoTheJanitor/ESP32-MG90S-control/blob/main/Photos/ESP32-Wroom%20and%20MG90S.png)

## How It Works

The ESP32 generates the servo control signal on GPIO 13.

The current program moves the servo through the following positions:

```
30° → 90° → 150° → 90°
```

Each position is held for approximately 0.5 seconds.

The control signal is generated manually using `digitalWrite()` and `delayMicroseconds()`, rather than using a dedicated servo library.

## Hardware

- ESP32 development board
- MG90S servo motor
- Jumper wires

## Software

- PlatformIO
- Arduino Framework
- C++

## Project Structure

```
ESP32-MG90S-control/
├── src/
│   └── main.cpp
├── platformio.ini
└── README.md
```

## What I Learned

- ESP32 GPIO control
- Digital output
- `delayMicroseconds()`
- Servo control signals
- Mapping servo positions to pulse widths
- Basic C++ functions
- Working with PlatformIO

## Future Improvements

- Replace the software-generated signal with the ESP32 hardware PWM (LEDC) peripheral
- Add potentiometer control
- Control multiple MG90S servos
- Add serial control
- Use the project as a base for a multi-servo robot

## Author

**HugoTheJanitor**

Embedded systems learning project.
