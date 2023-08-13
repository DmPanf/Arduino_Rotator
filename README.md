# rotator_on_Arduino (for an Arduino microcontroller):
C++ code for rotator on Arduino

## Ver 1. A Stepper Motor.

1. The "Stepper" library is included to control a stepper motor.
2. **`stepsPerRevolution`** is a constant that defines the number of steps required for the motor to complete one full revolution. It's set to 400, but users might need to adjust this for their specific motor.
3. A **`Stepper`** object named **`myStepper`** is instantiated, indicating that the motor is connected to pins 8, 9, 10, and 11 of the Arduino board.
4. Inside the **`setup()`** function:
 - The speed of the stepper motor is set to 10 RPM.
 - The built-in LED is set as an output.
5. Inside the **`loop()`** function, which runs repeatedly:
 - The built-in LED is turned on, remains on for 500 milliseconds, and then turned off. It remains off for 2500 milliseconds.
 - The stepper motor rotates one full revolution clockwise (in the direction of the clock's hands). It then pauses for 2500 milliseconds.
 - The stepper motor rotates one full revolution counter-clockwise (opposite the direction of the clock's hands). It then pauses for 2500 milliseconds.


## Ver 2. На двух сервомоторах
