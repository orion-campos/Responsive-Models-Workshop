/*
  Firefly and Potentiometer

  Reads an analog input on pin 0, prints the result to the serial monitor.

  Input:
  1x 10KΩ Breadboard trim potentiometer

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int sensorValue = analogRead(A0);

//the setup routine runs once
void setup()
{
  Serial.begin(115200); //begin serial communication at 115200 baud rate
}

// the loop routine runs over and over
void loop()
{
  Serial.println(sensorValue);
  delay(200);
}
