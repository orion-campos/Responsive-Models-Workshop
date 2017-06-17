/*
  DC Motor and Infrared Distance Sensor

  Control the speed of a DC Motor (4.5 to 9VDC) according to the values read by an Infrared Distance Sensor (IRDS), turning the DC Motor faster if the distance sensor reads a higher value (closer object).
  Display the read values and the remapped speed values on the Serial Monitor.

  Input:
  1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
  Output:
  1x TIP120 Power Darlington Transistor
  1x 1N4001 Diode
  1x 10KΩ resistor
  1x DC Motor 130 Size
  1x 2.1mm DC barrel jack

  created May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
int motorPin1 = 9;
int SensorPin1 = 0;
//variables
int SensorReading1 = 0;
int speed1 = 0;

//the setup routine runs once
void setup()
{
  pinMode(motorPin1, OUTPUT); //set the DC Motor as an output
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  int SensorReading1 = analogRead(SensorPin1); //store the sensor value
  int speed1 = map(SensorReading1, 70, 550, 0, 255); //remap the value of the sensor to the speed of the DC motor
  analogWrite(motorPin1, speed1); //apply the remapped value to the speed of the DC motor
  //display the desired information on the Serial Monitor
  Serial.print("sensor value: ");
  Serial.print(SensorReading1);
  Serial.print("    ");
  Serial.print("speed value: ");
  Serial.println(speed1);
  //wait 200 milliseconds seconds
  delay(200);
}
