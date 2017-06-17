/*
  Random Drawing Machine

  Create drawings by the use of a Sharpie pen, attached to the end of two lasercut acrylic arms, attached to two parallel circles, connected to two 12V DC Motors.
  The speed of those two motors are related to the values read by two Infrared Distance Sensor (IRDS), turning the DC Motor faster if the distance sensor reads a higher value (closer object). Since the sensors are attached distant from each other, the values that one sensor reads is different from the other, moving the DC Motors at an erratic and unexpected time and speed, creating a random drawing from the attached Sharpie pen.
  Display the read values and the remapped speed values on the Serial Monitor of the Arduino IDE.
  Concept of project done by Lyle La Madrid, Ronald John Dalmacio, Harvey Vasquez under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde
  Manila, May 3rd to May 16th, 2017

  Input:
  2x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
  Output:
  2x TIP120 Power Darlington Transistor
  2x 1N4001 Diode
  2x 10KΩ resistor
  2x DC Motor 12V DC
  1x 2.1mm DC barrel jack
  1X Switching Power Supply - Selectable Output 3-12VDC 1000mA
  1X Switching Power Supply - Selectable Output 3-12VDC 2000mA

  created May 16th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
int motorPin1 = 9;
int motorPin2 = 10;
int SensorPin1 = A0;
int SensorPin2 = A1;
//variables
int sensorReading1 = 0;
int sensorReading2 = 0;
int speed1 = 0;
int speed2 = 0;

//the setup routine runs once
void setup()
{
  pinMode(motorPin1, OUTPUT); //set the DC Motor 1 as an output
  pinMode(motorPin2, OUTPUT); //set the DC Motor 2 as an output
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  //store the sensor values
  int sensorReading1 = analogRead(SensorPin1);
  int sensorReading2 = analogRead(SensorPin2);
  //remap the values of the sensors to the speed of the DC motors
  int speed1 = map(sensorReading1, 20, 670, 20, 250);
  int speed2 = map(sensorReading2, 20, 670, 20, 250);
  //apply the remapped values to the speed of the DC motor
  analogWrite(motorPin1, speed1);
  analogWrite(motorPin2, speed2);
  //display the desired information on the Serial Monitor
  Serial.print(" Sensor 1: ");
  Serial.print(sensorReading1);
  Serial.print(" Speed 1: ");
  Serial.print(speed1);
  Serial.print(" Sensor 2: ");
  Serial.print(sensorReading2);
  Serial.print(" Speed 2: ");
  Serial.println(speed2);
  //wait 200 milliseconds seconds
  delay(200);
}
