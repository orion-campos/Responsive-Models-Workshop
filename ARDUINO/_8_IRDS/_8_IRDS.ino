/*
  Infrared Distance Sensor (IRDS)

  Control the brighteness of a LED according to the values read by an Infrared Distance Sensor (IRDS), turning the LED brighter if the distance sensor reads a higher value (closer object).
  Display the read values and the remapped values on the Serial Monitor.

  Input:
  1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
  Output:
  1x 5mm LED
  1x 220Ω resistor

  created May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
const int ledPin = 13;
const int sensorPin = 0;
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
  sensorMap = map(sensorValue, 70, 550, 0, 255); //remap the value of the sensor to the value of the LED
  analogWrite(ledPin, sensorMap); //apply the  remapped value to the LED
  //display the desired information on the Serial Monitor
  Serial.print("sensor value: ");
  Serial.print(sensorValue);
  Serial.print("    ");
  Serial.print("remapped value: ");
  Serial.println(sensorMap);
  //wait 200 milliseconds seconds
  delay(200);
}
