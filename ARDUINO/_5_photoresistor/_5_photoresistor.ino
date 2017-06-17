/*
  Photoresistor

  Turn a LED on by changing it brightness according to the values read by a photoresistor.
  Display the read values and the remapped values on the Serial Monitor.

  Input:
  1x Photo cell (CdS photoresistor)
  1x 10KΩ resistor
  Output:
  1x 5mm LED
  1x 220Ω resistor

  created May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
const int sensorPin = 0;
const int ledPin = 9;
//variables
int sensorValue = 0;
int sensorMap = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  sensorValue = analogRead(sensorPin); //store the sensor value
  sensorMap = map (sensorValue, 400, 0, 0, 255); //remap the value of the sensor to the value of the LED
  analogWrite(ledPin, sensorMap); //apply the remapped value to the LED
  //display the desired information on the Serial Monitor
  Serial.print("sensor value: ");
  Serial.print(sensorValue);
  Serial.print("    ");
  Serial.print("remapped value: ");
  Serial.println(sensorMap);
  //wait 200 milliseconds seconds
  delay(200);
}
