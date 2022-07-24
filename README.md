# ABOUT

Responsive Models Workshop from May 3 to May 16, 2017, at the De La Salle-College of Saint Benilde School of Design and Arts, Manila, Philippines, in which faculty members where taught by Orion Campos, during a two weeks workshop, the basics on electronics and digital fabrication to create a responsive object.

At the first week, daily classes of Arduino, Rhinoceros 3D, Grasshopper 3D, Firefly, and digital fabrication took place. Organized by themes and teaching from the very beginning electronic concepts, the classes created a base for the participants to develop their own projects during the second week. At this second phase, the participants were divided into groups of 3 to 4 individuals, and assisted daily by the main tutor, each group developed a responsive working object from their own concept using primarily tools and softwares taught at the first week. The final working prototype was presented after 12 days of classes, made from people who mostly, have none or few experience at electronics or digital fabrication processes.

Conceptual development, organization, creation of classes and main tutoring by [Orion Campos](oriongmc@hotmail.com)
Conceptual development by Associate Dean [Maria Cynthia Funk](atelierfunk2@gmail.com)
Organization and assistant tutoring by [Patrick Sunico](pat_sunico@yahoo.com)

- **Group 1** Lyle La Madrid, Ronald John Dalmacio, Harvey Vasquez
- **Group 2** Karen Cari–o, Jose Tong, Rex Mendoza Orense, Ricson Que
- **Group 3** Dorothy Chan, Stuart Paul Dee Yang, Anthony Brian Cruz, and Patrick Sunico

[Video of the workshop results](https://vimeo.com/222001151)

All the files of the Arduino codes, images, Rhinoceros 3D, Grasshopper 3D, etc. are available for download at [GitHub](https://github.com/orion-campos/Responsive-Models-Workshop)

This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

---

# FILE MAP

### ARDUINO
- 1_blink
	- 1_blink.ino
	- blink.jpg
- 2_rgb
	- 2_rgb.ino
	- 2_rgb.jpg
- 3_button
	- 3_button.ino
	- 3_button.jpg
- 4_if
	- 4_if.ino
	- 4_if.jpg
- 5_photoresistor
	- 5_photoresistor.ino
	- 5_photoresistor.jpg
- 6_piezo
	- 6_piezo.ino
	- 6_piezo.jpg
- 7_PIR
	- 7_PIR.ino
	- 7_PIR.jpg
- 8_IRDS
	- 8_IRDS.ino
	- 8_IRDS.jpg
- 9_temp_hum
	- 9_temp_hum.ino
	- 9_temp_hum.jpg
- 10_shift
	- 10_shift.ino
	- 10_shift.jpg
- 11_shift_pot
	- 11_shift_pot.ino
	- 11_shift_pot.jpg
- 12_dc_motor
	- 12_dc_motor.ino
	- 12_dc_motor.jpg
- 13_dcmotor_onoff
	- 13_dcmotor_onoff.ino
	- 13_dcmotor_onoff.jpg
- 14_servo
	- 14_servo.ino
	- 14_servo.jpg
- 15_servo_IRDS
	- 15_servo_IRDS.ino
	- 15_servo_IRDS.jpg

### GRASSHOPPER3D
- 1_circles	
	- 1_circles.3dm
	- 1_circles.gh
	- 1_circles.png
- 2_turning_tower
	- 2_turning_tower.3dm
	- 2_turning_tower.gh
	- 2_turning_tower.png
- 3_attractor_points
	- 3_attractor_points.3dm
	- 3_attractor_points.gh
	- 3_attractor_points.png

### FIREFLY
- FIREFLY.ino
- firefly_turning_tower.3dm
- firefly_turning_tower.gh
- 110920_Firefly_Users_Guide.pdf

### PROJECTS
- group1
	- group1.ino
	- group1.png
	- group1_poster.pdf
- group2
	- group2.ino
	- group2.png
	- shell.3dm
	- shell.gh
	- soil_moisture_sensor.pdf
	- water_level_sensor.pdf
	- group2_poster.pdf
- group3
	- group3.ino
	- group3.png
	- group3_poster.pdf

### README

---
# ARDUINO
*Arduino file*

### 1_blink
Blink
Turns on an LED on and off repeatedly.
It is possible to use the on-board LED. Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO it is attached to digital pin 13.
If desired, a 5mm LED can be used on digital pin 13. If so, it is not necessary to use a resistor, since the pin 13 allready has a resistor attached.
Output:
1x 5mm LED
1x 220O resistor (if the digital pin 13 is not used)
modified May 8th, 2014
by Scott Fitzgerald
modified September 2nd, 2016
by Arturo Guadalupi
modified September 8th, 2016
by Colby Newman
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 2_rgb
RGB LED
Turn on an RGB LED with a series of predetermined colors, mixing values of red, green and blue light.
Output:
1x RGB LED
3x 560KO resistor
created November 30th, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 3_button
Button
Control the displayed colors of a RGB LED mixing values of red, green and blue by clicking on three buttons.
Input:
3x Tactile button switch (6mm)
Output:
1x RGB LED
3x 560KO resistor
created December 7th, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 4_if
If
Turn a LED on if a button is pressed and turn it off if a second button is pressed using the 'IF' condition of Arduino.
Display which button is pressed on the Serial Monitor.
Input:
2x Tactile button switch (6mm)
Output:
1x 5mm LED
1x 220O resistor
created December 12th, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 5_photoresistor
Photoresistor
Turn a LED on by changing it brightness according to the values read by a photoresistor.
Display the read values and the remapped values on the Serial Monitor.
Input:
1x Photo cell (CdS photoresistor)
1x 10KO resistor
Output:
1x 5mm LED
1x 220O resistor
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

### 6_piezo
Piezo Buzzer
Play a Piezo buzzer, changing the pitch of the notes according to the values read by a photoresistor.
Display the read values from the sensor and the pitch values on the Serial Monitor.
Input:
1x Photo cell (CdS photoresistor)
1x 1 KO resistor
Output:
1x Piezo Buzzer - PS1240
created December 12th, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 7_PIR
Passive Infrared Sensor (PIR)
Detect motion using a Passive Infrared Sensor (PIR), turning a LED on if there is motion.
Display on the Serial Monitor the information if there is or if there is not motion.
Input:
1x PIR motion sensor (5V-12V)
Output:
1x 5mm LED
1x 220O resistor
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

### 8_IRDS
Infrared Distance Sensor (IRDS)
Control the brighteness of a LED according to the values read by an Infrared Distance Sensor (IRDS), turning the LED brighter if the distance sensor reads a higher value (closer object).
Display the read values and the remapped values on the Serial Monitor.
Input:
1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
Output:
1x 5mm LED
1x 220O resistor
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

### 9_temp_hum
Temperature and Humidity Sensor
Connect the DHT-22, also named as AM2302, a relative humidity and temperature sensor to an Arduino, and turn on an LED with an 'IF' statement.
In this code the LED turn on if the relative humidity is higher than 70%, which could be achieved by breathing very closely to the sensor.
Display the read values on the Serial Monitor.
Input:
1x DHT-22 (AM2302)
1x 10KO resistor
Output:
1x 5mm LED
1x 220O resistor
created July 1st, 2015
by Michalis Vasilakis <www.ardumotive.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 10_shift
Shift Register
Control with a Shift Register (74HC595 Serial to Parallel Converter) up to eight LEDs with a predetermined pattern using only three pins of the Arduino.
Output:
1x 74HC595 Shift Register
8x 5mm LED
8x 220O resistor
created December 3rd, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 11_shift_pot
Shift Register and Potentiometer
Control with a Shift Register (74HC595 Serial to Parallel Converter) up to eight LEDs with a pattern created by a potentiometer using only three pins of the Arduino.
Input:
1x 10KO Breadboard trim potentiometer
Output:
1x 74HC595 Shift Register
8x 5mm LED
8x 220O resistor
created December 10th, 2012
by Simon Monk <www.adafruit.com>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 12_dc_motor
DC Motor and Infrared Distance Sensor
Control the speed of a DC Motor (4.5 to 9VDC) according to the values read by an Infrared Distance Sensor (IRDS), turning the DC Motor faster if the distance sensor reads a higher value (closer object).
Display the read values and the remapped speed values on the Serial Monitor.
Input:
1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
Output:
1x TIP120 Power Darlington Transistor
1x 1N4001 Diode
1x 10KO resistor
1x DC Motor 130 Size
1x 2.1mm DC barrel jack
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

### 13_dcmotor_onoff
ON/OFF mode of a DC Motor and a Photoresistor
Turn a DC Motor (4.5 to 9VDC) on at a predetermined speed using, using a Photoresistor as a trigger.
Display on the Serial Monitor the information if the DC Motor is on or if it is off.
Input:
1x Photo cell (CdS photoresistor)
Output:
1x TIP120 Power Darlington Transistor
1x 1N4001 Diode
1x 10KO resistor
1x DC Motor 130 Size
1x 2.1mm DC barrel jack
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

### 14_servo
Servo Motor Sweep
Sweeps one Micro Servo Motor back and forth across 180 degrees using two 'FOR' statements.
Output:
1x HXT900 Micro Servo 1.6kg / 0.12sec / 9g
created August 18th, 2015
by SM <https://www.arduino.cc/en/Tutorial/Sweep>
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 15_servo_IRDS
Two Servo Motors and one Infrared Distance Sensor (IRDS)
Control the angle of two Servo Motors according to the values read by an Infrared Distance Sensor (IRDS), turning the Servo Motors on oposite directions if the distance sensor reads a higher value (closer object).
Display the read values and the remapped values on the Serial Monitor.
Input:
1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
Output:
2x HXT900 Micro Servo 1.6kg / 0.12sec / 9g
1x 2.1mm DC barrel jack
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

---

# GRASSHOPPER 3D
*Rhinoceros 3D and Grasshopper 3D files*

### 1_circles
Circles
Create circles on XY plane which radius are controlled by a slider, from points created on Rhinoceros 3D
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 2_turning_tower
Turning Tower
From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to 360º and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

### 3_attractor_points
Attractor Points
Create a series of points, in a rectangular grid, which radius and colors are related to the distance to the closest attractor point.
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

---
# FIREFLY
*Arduino file*

### FIREFLY
Firefly and Potentiometer
Reads an analog input on pin 0, prints the result to the serial monitor.
Input:
1x 10KO Breadboard trim potentiometer
modified May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

*Rhinoceros 3D and Grasshopper 3D files*

### firefly_turning_tower
Turning Tower
From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to a specific angle determined by the plug-in Firefly and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.
The maximum rotation angle of the floors are remaped values read from a potentiometer connected to an Arduino <https://www.arduino.cc/>, and communicating with Grasshopper3D with the plug-in Firefly <http://www.fireflyexperiments.com/>.
created May 4th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

---
# PROJECTS

### Group1

**Random Drawing Machine**

Create drawings by the use of a Sharpie pen, attached to the end of two lasercut acrylic arms, attached to two parallel circles, connected to two 12V DC Motors.

The speed of those two motors are related to the values read by two Infrared Distance Sensor (IRDS), turning the DC Motor faster if the distance sensor reads a higher value (closer object). Since the sensors are attached distant from each other, the values that one sensor reads is different from the other, moving the DC Motors at an erratic and unexpected time and speed, creating a random drawing from the attached Sharpie pen.

Display the read values and the remapped speed values on the Serial Monitor of the Arduino IDE.

Concept of project done by Lyle La Madrid, Ronald John Dalmacio, Harvey Vasquez under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde

Manila, May 3rd to May 16th, 2017

**Input:**
- 2x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)

**Output:**
- 2x TIP120 Power Darlington Transistor
- 2x 1N4001 Diode
- 2x 10KO resistor
- 2x DC Motor 12V DC
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-12VDC 1000mA
- 1X Switching Power Supply - Selectable Output 3-12VDC 2000mA

Created May 16th, 2017
by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

**This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)**

### Group2

**Automatic Watering Plant System**

Create an automatic watering plant system that will run a small 3V DC water pump to water a plant into a vase if the Soil Moisture Sensor into the vase reads a value higher than the optimal value of moisture for that plant, meaning that the soil is dry.
If the moisture level reads by the sensor is higher than the optimal value of moisture for the plant, a red LED will turn on, and a message "Dry Soil :(" will appear on the LCD Screen, together with the water pump being turned on, if not, a green LED will turn on and a message "Happy Plant :)" will appear on the LCD Screen.

The water compartment also has a Water Level Sensor with three different sizes of pins, which read three different values. If the sensor reads that the three pins are in contact with water a green LED will turn on, and a message "Waterlevel: Full" will appear on the LCD Screen. If the sensor reads that two pins are in contact with water, a yellow LED will turn on, and a message "WaterLevel: Half" will appear on the LCD Screen. If the sensor reads that only one pin is in contact with water, a red LED will turn on, and a message "WaterLevel: Empty" will appear on the LCD Screen.
Also a condition was created that if the Soil Moisture Sensor reads a value higher than the optimal value of moisture for the plant, AND the Water Level Sensor reads that only one pin is in contact with water, the pump will not be turned on.

Display the read values and the desirable information on the Serial Monitor of the Arduino IDE.

Concept of project done by Karen Cariño, Jose Tong, Rex Mendoza Orense, Ricson Que under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde

Manila, May 3rd to May 16th, 2017

**Input:**
- 1x Soil Moisture Sensor 5V DC <https://www.e-gizmo.com/>
- 1x Water Level Sensor 5V DC <https://www.e-gizmo.com/>

**Output:**
- 1x TIP120 Power Darlington Transistor
- 1x 1N4001 Diode
- 1x 10KO resistor
- 1x Small Water Pump (similar to a 3V DC Motor)
- 2x 5mm red LED
- 1x 5mm yellow LED
- 2x 5mm green LED
- 5x 220O resistor
- 1x LCD Screen (compatible with Hitachi HD44780 driver)
- 1x 10KO Breadboard trim potentiometer
- 1x 2.1mm DC barrel jack
- 2X Switching Power Supply - Selectable Output 3-12VDC 1000mA

Created May 16th, 2017 by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos> and Ricson Que

**This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)**

### Group3

**Animatronic Owl**

Create an animatronic owl, which will follow the user turning its head to the right or to the left side, by a servo motor, based o values read from two PIR sensors attached to opposite sides of the owl and pointed to different directions. If the PIR sensor reads a higher value (detects movement), the owl will turn its head to this specific direction (left or right). If none of the two PIR sensors detects movement, the owl will turn its head into a central position.
The wings of the owl are attached each to one metal gear servo. They will turn up based on the values of one IFDS, meaning if the user is closer to the object, the wings move higher.

An additional behaviour was added to the head, which hosts a photoresistor sensor. Two LEDs will be in the place of the eyes. They will be constantly turned on, until the photoresistor reads a very low value, meaning that someone is blocking the light with its hand (petting the owl), at this moment the LEDs will start to blink repeatedly.

Display the read values and the desirable information on the Serial Monitor of the Arduino IDE.

Concept of project done by Dorothy Chan, Stuart Paul Dee Yang, Anthony Brian Cruz, and Patrick Sunico under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde

Manila, May 3rd to May 16th, 2017

**Input:**
- 1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
- 2x PIR motion sensor (5V-12V)
- 1x Photo cell (CdS photoresistor)
- 1x 10K½ resistor

**Output:**
- 1x HXT900 Micro Servo 1.6kg / 0.12sec / 9g
- 2x Standard 15kg.cm Metal Gear Digital Servo FT5316M
- 2x 5mm red LED
- 1x 220½ resistor
- 1x 2.1mm DC barrel jack
- 2X Switching Power Supply - Selectable Output 3-12VDC 1000mA

Created May 16th, 2017 by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos> and Anthony Brian Cruz

**This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)**
