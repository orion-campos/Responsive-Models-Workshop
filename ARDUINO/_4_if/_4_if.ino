/*
  If

  Turn a LED on if a button is pressed and turn it off if a second button is pressed using the 'IF' condition of Arduino.
  Display which button is pressed on the Serial Monitor.

  Input:
  2x Tactile button switch (6mm)
  Output:
  1x 5mm LED
  1x 220Ω resistor

  created December 12th, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;
//variables
byte leds = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  pinMode(ledPin, OUTPUT); //set the LED as an output
  pinMode(buttonApin, INPUT_PULLUP); //set button A as an input
  pinMode(buttonBpin, INPUT_PULLUP); //set button B as an input
}

// the loop routine runs over and over
void loop()
{
  if (digitalRead(buttonApin) == LOW) //if button A is pressed
  {
    digitalWrite(ledPin, HIGH); //turn LED on
    Serial.println("button A pressed"); //display on the Serial Monitor that button A is pressed
  }
  if (digitalRead(buttonBpin) == LOW) //if button B is pressed
  {
    digitalWrite(ledPin, LOW); //turn LED off
    Serial.println("button B pressed"); //display on the Serial Monitor that button B is pressed
  }
}
