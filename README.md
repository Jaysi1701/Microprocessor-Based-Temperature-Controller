# Microprocessor-Based-Temperature-Controller

The Microprocessor-Based Temperature Controlled Fan System is a project designed to create an efficient and automated solution for regulating temperature in enclosed spaces. The system employs a microprocessor, temperature sensors, and a fan to maintain a desired temperature setpoint within the environment. This project aims to provide enhanced comfort, energy efficiency, and convenience by intelligently controlling the fan's speed based on the ambient temperature.


## Hardware & Software Requirements
Hardware
1.	Arduino Microcontroller
2.	LM35 Temperature sensor
3.	16x2 LCD Display
4.	10k ohm potentiometer
5.	220-ohm resistor
6.	PCB
7.	Wires
8.	power supply block
9.	Fan Module
   
Software
1.	Arduino IDE


## Working Mechanism

The working mechanism of a microcontroller-based temperature-controlled fan system using Arduino, LM35 temperature sensor, and a real-time LCD display involves several steps. The system aims to maintain a target temperature by adjusting the speed of a fan based on the ambient temperature measured by the LM35 sensor. The real-time LCD display provides temperature information for user monitoring. Here's how the system works:
Hardware Setup:
●	Connect the LM35 temperature sensor to one of the analog pins of the Arduino.
●	Connect the fan to a digital pin of the Arduino that supports PWM (Pulse Width Modulation) for speed control.
●	Connect an LCD display module to the Arduino for real-time temperature display.

Initialization:
●	Initialize the required libraries for the LCD display and PWM control.

Main Loop:
●	Inside the Arduino's main loop, perform the following steps repeatedly:

Temperature Measurement:
●	Read the analog value from the LM35 temperature sensor using the Arduino's analog-to-digital converter.
●	Convert the analog value to temperature using the LM35's sensitivity and calibration formula.

Control Algorithm:
●	Compare the measured temperature with the desired target temperature.
●	Calculate the temperature error (difference between desired and measured temperatures).

Fan Speed Adjustment:
●	Use a control algorithm, such as a proportional controller or PID controller, to determine the required fan speed adjustment based on the temperature error.
●	Convert the control output to a PWM duty cycle value that corresponds to the desired fan speed. Higher PWM duty cycle values result in faster fan speeds.

LCD Display:
●	Send the measured temperature value and the fan speed (PWM duty cycle) to the LCD display module for real-time display.

Fan Control:
●	Set the PWM duty cycle of the fan control pin based on the calculated value from the control algorithm. This adjusts the fan speed accordingly

Delay and Loop Iteration:
●	Introduce a delay to control the frequency of temperature readings and fan speed adjustments.
●	Repeat the loop iteration to continuously monitor the temperature, adjust the fan speed, and update the LCD display.

This process continues in a loop, allowing the microcontroller (Arduino) to constantly monitor the temperature using the LM35 sensor, calculate the required fan speed adjustment, and display the temperature and fan speed on the LCD display in real-time. As the ambient temperature changes, the system automatically adjusts the fan speed to maintain the desired target temperature, offering efficient temperature control and user-friendly monitoring.


## Diagram
 
![image](https://github.com/Jaysi1701/Microprocessor-Based-Temperature-Controller/assets/128627421/3340db27-ccb6-4541-bae6-51c09328745c)



![front](https://github.com/Jaysi1701/Microprocessor-Based-Temperature-Controller/assets/128627421/1b394b83-444e-4f71-87bc-9632df228d61)

![image](https://github.com/Jaysi1701/Microprocessor-Based-Temperature-Controller/assets/128627421/e04cfc53-10cb-485f-9628-c163f645afd0)

