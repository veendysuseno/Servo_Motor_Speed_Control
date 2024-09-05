# Servo Motor Speed Control with Analog Input on Arduino Uno

This project demonstrates how to control a servo motor using an analog input. The position of the servo is adjusted based on the value read from an analog sensor, such as a potentiometer.

## Components

- Arduino (Uno, Nano, or similar)
- Servo Motor
- Analog Sensor (e.g., potentiometer)
- Breadboard and Jumper Wires

## Code Explanation

The following code reads an analog input and maps it to control the angle of a servo motor.

```cpp
#include <Servo.h>

Servo servo1;
int val;

void setup() {
  servo1.attach(2); // Attach the servo to pin 2
}

void loop() {
  val = analogRead(0); // Read the analog input from pin A0
  val = map(val, 0, 1023, 0, 179); // Map the input value to a range of 0 to 179
  servo1.write(val); // Set the servo position
  delay(15); // Wait for the servo to reach the position
}
```

## Key Functions

- Servo.attach(pin): Attaches the servo control to the specified pin.
- analogRead(pin): Reads the analog value from the specified pin (0-1023).
- map(value, fromLow, fromHigh, toLow, toHigh): Maps the analog input range (0-1023) to the servo angle range (0-179 degrees).
- servo.write(angle): Sets the position of the servo motor to the specified angle.
- delay(ms): Waits for the specified number of milliseconds.

## Setup

- Connect the servo motor’s control wire to pin 2 on the Arduino.
- Connect the analog sensor’s output to pin A0 on the Arduino.
- Power the Arduino and connect it to your computer.
- Upload the provided code to your Arduino.

## Conclusion

- This simple project shows how to use an analog input to control a servo motor's position. By adjusting the analog sensor (e.g., turning a potentiometer), you can change the angle of the servo, demonstrating the basics of servo control with Arduino. <br/>
"# Servo_Motor_Speed_Control" 
