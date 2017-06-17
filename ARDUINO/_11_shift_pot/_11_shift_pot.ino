/*
  Shift Register and Potentiometer

  Control with a Shift Register (74HC595 Serial to Parallel Converter) up to eight LEDs with a pattern created by a potentiometer using only three pins of the Arduino.

  Input:
  1x 10KΩ Breadboard trim potentiometer
  Output:
  1x 74HC595 Shift Register
  8x 5mm LED
  8x 220Ω resistor

  created December 10th, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int potPin = 0; //potentiometer
int dataPin = 4; //data pin of the 74HC595
int latchPin = 5; //latch pin of the 74HC595
int clockPin = 6; //clock pin of the 74HC595
//variables
byte leds = 0;

//the setup routine runs onces
void setup()
{
  pinMode(dataPin, OUTPUT); //set the data pin as an output
  pinMode(latchPin, OUTPUT); //set the latch pin as an output
  pinMode(clockPin, OUTPUT); //set the clock pin as an output
}

// the loop routine runs over and over
void loop()
{
  int reading = analogRead(potPin); //store the sensor value
  int numLEDSlit = reading / 128; // since the reading value of the potentiometer will be a value from 0 to 1023, it is necessary  to convert the value into the number of LEDs to light, in this case, between 0 and 7. The range of numbers between 0 and 7 are 8 values, so it is necessary to scale the reading from 1023 dividing by 8 which is equal to 128
  leds = 0; //the LED's are initially all turned off
  for (int i = 0; i < numLEDSlit; i++) //the function begins with value 0, counting from 0 to the value of 'numLEDSlit', which is determined by the position of the potentiometer, adding one each cycle until it reaches 8, then repeating the process again
  {
    bitSet(leds, i); //use the Arduino function 'bitSet' to set the bit that controls the LED in the variable 'leds' (similar with digitalWrite)
    updateShiftRegister(); //the 'updateShiftRegister' will send the desired pattern to the shift register
  }
}
void updateShiftRegister()
{
  digitalWrite(latchPin, LOW); //the function 'updateShiftRegister' sets the latchPin to low
  shiftOut(dataPin, clockPin, LSBFIRST, leds); //then calls the function 'shiftOut' that takes four parameters, the first two are the pins to use for Data and Clock respectively.The third parameter specifies which end of the data to start at. It is going to start with the right most bit, which is referred to as the 'Least Significant Bit' (LSB). The last parameter is the actual data to be shifted into the shift register, which in this case is 'leds'
  digitalWrite(latchPin, HIGH); //the function sets the latchPin back to high
}
