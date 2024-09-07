# GPIO LED Control Using WiringPi

This program demonstrates controlling three LEDs connected to GPIO pins on a Raspberry Pi using the WiringPi library. The LEDs are controlled with various blinking patterns on the **Red**, **Yellow**, and **Green** LEDs connected to GPIO pins 23, 24, and 25, respectively.

## Prerequisites

To compile and run this program, you will need the WiringPi library installed on your Raspberry Pi.

### Installing WiringPi:
sudo apt-get install wiringpi

##Wiring

 * Red LED: Connect to GPIO 23 (Physical pin 16).
-- Green LED: Connect to GPIO 24 (Physical pin 18).
-- Yellow LED: Connect to GPIO 25 (Physical pin 22).
-- Ground (GND): Connect to any ground pin (e.g., Physical pin 6).
-- Each LED should have a resistor (220Ω to 1kΩ) in series to limit the current.

##Program Description

-- The program first initializes the GPIO pins using the wiringPiSetupGpio() function to use the BCM GPIO numbering scheme. 
-- It sets GPIO 23, 24, and 25 as output pins for controlling the Red, Green, and Yellow LEDs.

## LED Blinking Pattern:
-- The Red LED blinks in varying intervals (300ms, 100ms, 50ms).
-- The Yellow LED blinks at intervals of 100ms and 50ms.
-- The Green LED blinks for 100ms.
-- The cycle repeats indefinitely, creating a flashing pattern for the LEDs.

