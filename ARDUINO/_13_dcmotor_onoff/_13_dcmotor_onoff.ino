/*
  ON/OFF mode of a DC Motor and a Photoresistor

  Turn a DC Motor (4.5 to 9VDC) on at a predetermined speed using, using a Photoresistor as a trigger.
  Display on the Serial Monitor the information if the DC Motor is on or if it is off.

  Input:
  1x Photo cell (CdS photoresistor)
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
int sensorValue = 0;

//the setup routine runs once
void setup()
{
  pinMode(motorPin1, OUTPUT); //set the DC Motor as an output
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  int sensorValue = analogRead(SensorPin1); //store the sensor value
  Serial.println(sensorValue); //display the stored value at the Serial Monitor
  if (analogRead(SensorPin1) < 580) //if the read value from the Photoresistor is lower than 580
  {
    analogWrite(motorPin1, 255); //turn DC Motor on
    Serial.println ("_______ON"); //display on the Serial Monitor that the DC Motor is on
    delay(250); //wait 250 milliseconds seconds
  }
  else
  {
    analogWrite(motorPin1, 0); //turn DC Motor off
    Serial.println ("_______OFF"); //display on the Serial Monitor that the DC Motor is off
    delay(250); //wait 250 milliseconds seconds
  }
}
