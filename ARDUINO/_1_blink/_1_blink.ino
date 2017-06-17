/*
  Blink

  Turns on an LED on and off repeatedly.
  It is possible to use the on-board LED. Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO it is attached to digital pin 13.
  If desired, a 5mm LED can be used on digital pin 13. If so, it is not necessary to use a resistor, since the pin 13 allready has a resistor attached.

  Output:
  1x 5mm LED
  1x 220Ω resistor (if the digital pin 13 is not used)

  modified May 8th, 2014
  by Scott Fitzgerald

  modified September 2nd, 2016
  by Arturo Guadalupi

  modified September 8th, 2016
  by Colby Newman

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int led = 13;

//the setup routine runs once
void setup()
{
  pinMode(led, OUTPUT); //set the LED as an output
}

// the loop routine runs over and over
void loop()
{
  digitalWrite(led, HIGH); //turn the LED on
  delay(1000); //wait one second
  digitalWrite(led, LOW); //turn the LED off
  delay(500); //wait half second
}
