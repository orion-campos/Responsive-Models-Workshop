/*
  Shift Register

  Control with a Shift Register (74HC595 Serial to Parallel Converter) up to eight LEDs with a predetermined pattern using only three pins of the Arduino.

  Output:
  1x 74HC595 Shift Register
  8x 5mm LED
  8x 220Ω resistor

  created December 3rd, 2012
  by Simon Monk <www.adafruit.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int dataPin = 4; //data pin of the 74HC595
int latchPin = 5; //latch pin of the 74HC595
int clockPin = 6; //clock pin of the 74HC595
//variables
byte leds = 0

//the setup routine runs once
void setup()
{
  pinMode(dataPin, OUTPUT); //set the data pin as an output
  pinMode(latchPin, OUTPUT); //set the latch pin as an output
  pinMode(clockPin, OUTPUT); //set the clock pin as an output
}

// the loop routine runs over and over
void loop()
{
  leds = 0; //the LED's are initially all turned off
  updateShiftRegister(); //the 'updateShiftRegister' will send the desired pattern to the shift register
  delay(500); //the loop function pauses for half a second
  for (int i = 0; i < 8; i++) //the function begins with value 0, counting from 0 to 7, adding one each cycle until it reaches 8, then repeating the process again
  {
    bitSet(leds, i); //use the Arduino function 'bitSet' to set the bit that controls the LED in the variable 'leds' (similar with digitalWrite)
    updateShiftRegister(); //the LEDs update to reflect what is in the variable 'leds'
    delay(100); //wait 100 milliseconds
  }
}
void updateShiftRegister()
{
  digitalWrite(latchPin, LOW); //the function 'updateShiftRegister' sets the latchPin to low
  shiftOut(dataPin, clockPin, LSBFIRST, leds); //then calls the function 'shiftOut' that takes four parameters, the first two are the pins to use for Data and Clock respectively.The third parameter specifies which end of the data to start at. It is going to start with the right most bit, which is referred to as the 'Least Significant Bit' (LSB). The last parameter is the actual data to be shifted into the shift register, which in this case is 'leds'
  digitalWrite(latchPin, HIGH); //the function sets the latchPin back to high
}
