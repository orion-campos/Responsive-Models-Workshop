/*
  Piezo Buzzer

  Play a Piezo buzzer, changing the pitch of the notes according to the values read by a photoresistor.
  Display the read values from the sensor and the pitch values on the Serial Monitor.

  Input:
  1x Photo cell (CdS photoresistor)
  1x 1 KΩ resistor
  Output:
  1x Piezo Buzzer - PS1240

  created December 12th, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int speakerPin = 12;
int photocellPin = 0;
//variables
int reading = 0;
int pitch = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  int reading = analogRead(photocellPin); //store the sensor value
  int pitch = 200 + reading / 4; //instead of remaping the values of the photoresistor sensor, it is possible to reduce the value to a number between 200Hz to 370Hz by a math equation
  tone(speakerPin, pitch); //the Arduino command 'tone' takes two parameters, the first is the pin to play the tone on and the second is the frequency of the tone to play by the piezo
  //display the desired information on the Serial Monitor
  Serial.print("sensor value: ");
  Serial.print(reading);
  Serial.print("    ");
  Serial.print("pitch value: ");
  Serial.println(pitch);
}
