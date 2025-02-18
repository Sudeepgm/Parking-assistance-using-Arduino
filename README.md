
# Parking Assistance System using Arduino Uno

## Overview
This project demonstrates a Parking Assistance System that helps drivers park their vehicles by detecting obstacles in front of the vehicle. Using an ultrasonic sensor, the system measures the distance from the vehicle to the obstacle and activates an LED and buzzer when the vehicle is too close to an object, indicating the need to stop.

## Features
- Measures the distance from an object using an ultrasonic sensor.
- Activates an LED and a buzzer when the object is within a predefined distance threshold.
- Simple and easy-to-use parking assistance for vehicles.

## Requirements
To build and run this project, the following components are required:

### Hardware
1. **Arduino Uno** – The main controller for processing inputs and outputs.
2. **Ultrasonic Sensor (HC-SR04)** – Used to measure the distance between the sensor and the object.
   - **TRIG_PIN** (Pin 9) – The trigger pin for sending ultrasonic signals.
   - **ECHO_PIN** (Pin 10) – The echo pin for receiving the reflected ultrasonic signal.
3. **LED** – Used to visually indicate when an obstacle is too close.
   - **LED_PIN** (Pin 8) – The pin connected to the LED.
4. **Buzzer** – Emits sound when the obstacle is detected within the threshold distance.
   - **BUZZER_PIN** (Pin 7) – The pin connected to the buzzer.
5. **Jumper Wires** – For connecting all components.

### Software
- **Arduino IDE** – Software to upload the code to the Arduino board.

## Pin Configuration
- **TRIG_PIN** (Pin 9): Output – Triggers the ultrasonic sensor to send the signal.
- **ECHO_PIN** (Pin 10): Input – Receives the signal and calculates the distance.
- **LED_PIN** (Pin 8): Output – Lights up when the distance is below the threshold.
- **BUZZER_PIN** (Pin 7): Output – Sounds when the distance is below the threshold.

## Code Explanation
1. The ultrasonic sensor sends out a pulse from the **TRIG_PIN** and listens for the reflected signal on the **ECHO_PIN**.
2. The time taken for the signal to return is measured and used to calculate the distance to the object.
3. If the distance is less than or equal to the threshold (20 cm in this case), the system turns on both the LED and the buzzer as an alert.
4. If the distance is greater than the threshold, both the LED and the buzzer are turned off.

## How to Use
1. Connect the components to the Arduino board as described in the pin configuration section.
2. Open the provided code in the Arduino IDE.
3. Upload the code to the Arduino Uno board.
4. Place the ultrasonic sensor at the front of the vehicle, where it can measure the distance to obstacles.
5. When the vehicle gets too close to an obstacle (within the threshold distance), the LED will light up, and the buzzer will sound.
