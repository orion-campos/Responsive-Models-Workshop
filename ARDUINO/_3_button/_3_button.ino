/*
  Button

  Control the displayed colors of a RGB LED mixing values of red, green and blue by clicking on three buttons.

  Input:
  3x Tactile button switch (6mm)
  Output:
  1x RGB LED
  3x 560KΩ resistor

  created December 7th, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int redLEDPin = 11;
int greenLEDPin = 10;
int blueLEDPin = 9;
int redSwitchPin = 7;
int greenSwitchPin = 6;
int blueSwitchPin = 5;
//variables
int red = 0; //start with value 0
int blue = 0; //start with value 0
int green = 100; //start with value 100

//the setup routine runs once
void setup()
{
  //set the LEDs as outputs
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  //set the buttons as inputs
  pinMode(redSwitchPin, INPUT_PULLUP);
  pinMode(greenSwitchPin, INPUT_PULLUP);
  pinMode(blueSwitchPin, INPUT_PULLUP);
}

// the loop routine runs over and over
void loop()
{
  if (digitalRead(redSwitchPin) == LOW) //if the button is pressed
  {
    red = red + 10; //add 10 to the value everytime the button is pressed
    if (red > 255) red = 0; //until the value is less than 255, if not the value is zero
  }
  if (digitalRead(greenSwitchPin) == LOW) //if the button is pressed
  {
    green ++; //add 1 to the value everytime the button is pressed
    if (green > 255) green = 0; //until the value is less than 255, if not the value is zero
  }
  if (digitalRead(blueSwitchPin) == LOW)
  {
    blue --; //decrease 1 to the value everytime the button is pressed
    if (blue > 255) blue = 0; //until the value is less than 255, if not the value is zero
  }
  //output the value to the LEDs
  analogWrite(redLEDPin, red);
  analogWrite(greenLEDPin, green);
  analogWrite(blueLEDPin, blue);
  //wait 20 milliseconds seconds
  delay(20);
}
