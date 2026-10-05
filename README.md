# Smart Solar Nanogrid Road Lighting System

## Overview

This project presents a smart and sustainable solar-powered road lighting system using renewable energy and intelligent lighting control.

The system uses an LDR sensor to detect ambient light and a PIR sensor to detect movement. An ESP32 microcontroller processes the sensor inputs and controls the LED street light according to road activity and lighting conditions.

## Problem Statement

Conventional road lighting systems can consume unnecessary electricity because they often operate at full brightness even when there is little or no road activity. Rural and remote areas may also face unreliable grid power.

## Proposed Solution

The proposed system combines solar energy, battery storage and intelligent lighting control. The smart controller automatically changes the street-light brightness according to ambient light and detected movement.

### Working Logic

- Daytime → Street light OFF
- Night + No movement → Low brightness
- Night + Movement detected → High brightness

## Hardware Components

- ESP32
- LDR / Photoresistor
- PIR Motion Sensor
- LED
- 220Ω Resistor

## Pin Configuration

| Component | ESP32 Pin |
|---|---|
| LDR AO | GPIO 34 |
| PIR Data | GPIO 27 |
| LED | GPIO 25 |

## Software

- Arduino/C++ code
- Wokwi simulator

## Virtual Prototype

The prototype was developed and tested using Wokwi.

Wokwi Simulation:
https://wokwi.com/projects/477019626251254785

## Testing

The prototype was tested under three operating conditions:

1. Daytime / high ambient light → LED OFF
2. Nighttime / no movement → LED at low brightness
3. Nighttime / movement detected → LED at high brightness

## Future Scope

- Solar panel and battery monitoring
- Real-time energy monitoring
- IoT-based remote monitoring
- Fault detection
- Multiple LED street-light nodes
- Deployment in rural and remote areas

## Environment Variables

No environment variables are required for the basic prototype.

## License

This project is released under the MIT License.