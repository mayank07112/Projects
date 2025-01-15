# Fire Alarm System with Arduino 

This repository contains the code and circuit design for a basic Fire Alarm System using an Arduino. The system monitors temperature and gas levels using sensors, and it activates an LED and buzzer as warnings if thresholds are crossed.

## Components Used

Arduino Uno - Microcontroller board.

Temperature Sensor (TMP36 or similar) - Measures ambient temperature.

#### Gas Sensor (MQ Series) - Detects gas levels.

#### LED - Visual indicator for temperature threshold.

#### Buzzer - Audio indicator for gas level threshold.

#### Resistors - As required in the circuit.

Breadboard and Jumper Wires - For connections.

## Circuit Diagram

Refer to the circuit_diagram.png file in this repository for the wiring details.

## Key Connections:
#### i) Temperature Sensor: Output connected to A0.

#### ii) Gas Sensor: Output connected to A1.

#### iii) LED: Connected to pin 8.

#### iv) Buzzer: Connected to pin 13.

## Code Overview

The Arduino sketch monitors the temperature and gas levels using analog sensors and triggers the appropriate outputs:

#### • Temperature Monitoring:

Analog input A0 is read and converted to temperature in Celsius.

If the temperature exceeds 50°C, the LED connected to pin 8 turns on.

#### • Gas Level Monitoring:

Analog input A1 is read to detect gas concentration.

If the gas sensor value is >= 250, the buzzer connected to pin 13 activates.

## Code
Refer to the fire_alarm_system.ino file for the code.

## How to Use

#### Set Up the Circuit:

Follow the circuit diagram to connect the components.

#### Upload the Code:

Open the .ino file in the Arduino IDE and upload it to the Arduino board.

#### Power the Arduino:

Connect the Arduino to a power source.

#### Monitor Serial Output:

Open the Serial Monitor in the Arduino IDE to view temperature and gas sensor readings.

#### Threshold Values

Temperature Threshold: 50°C

Gas Sensor Threshold: 250 (raw analog value)

## Expected Behavior

The LED turns on if the temperature exceeds 50°C.

The Buzzer activates if the gas concentration exceeds the threshold.

## Notes

Ensure the sensors are properly calibrated for accurate readings.

Modify the threshold values in the code as per your requirements.
