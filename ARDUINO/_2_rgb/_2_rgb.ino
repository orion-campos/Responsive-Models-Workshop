/*
  RGB LED

  Turn on an RGB LED with a series of predetermined colors, mixing values of red, green and blue light.

  Output:
  1x RGB LED
  3x 560KΩ resistor

  created November 30th, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int redPin = 11;
int greenPin = 10;
int bluePin = 9;

//the setup routine runs once
void setup()
{
  //set the LEDs as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// the loop routine runs over and over
void loop()
{
  setColor(255, 0, 0); //red color
  delay(500); //wait one second
  setColor(0, 255, 0); //green color
  delay(500); //wait one second
  setColor(0, 0, 255);  //blue color
  delay(500); //wait one second
  setColor(255, 255, 0);  //yellow color
  delay(500); //wait one second
  setColor(80, 0, 80);  //orange color
  delay(500); //wait one second
  setColor(0, 255, 255);  //purple color
  delay(500); //wait one second
}

void setColor(int red, int green, int blue)
{
#ifdef COMMON_ANODE
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
#endif
  //apply the values to the LEDs
  analogWrite (redPin, red);
  analogWrite (greenPin, green);
  analogWrite (bluePin, blue);
}
