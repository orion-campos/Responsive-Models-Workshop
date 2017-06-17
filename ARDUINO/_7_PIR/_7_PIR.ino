/*
  Passive Infrared Sensor (PIR)

  Detect motion using a Passive Infrared Sensor (PIR), turning a LED on if there is motion.
  Display on the Serial Monitor the information if there is or if there is not motion.

  Input:
  1x PIR motion sensor (5V-12V)
  Output:
  1x 5mm LED
  1x 220Ω resistor

  created May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
int PIRsensor = 8;
int LEDpin = 13;
//variables
int val;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  pinMode(LEDpin, OUTPUT); //set the LED as an output
  pinMode(PIRsensor, INPUT); //set the PIR sensor as an input
}

// the loop routine runs over and over
void loop()
{
  val = digitalRead(PIRsensor); //store the PIR value
  if (val == LOW) //if the read value from the PIR is low, there is no motion
  {
    Serial.println("No motion"); //inform on the serial monitor that there is no motion
    digitalWrite(LEDpin, LOW); //LED is off
  }
  else  //if not, there is motion
  {
    Serial.println("Motion!"); //inform on the serial monitor that there is motion
    digitalWrite(LEDpin, HIGH); //LED is on
  }
  //wait 500 milliseconds seconds
  delay(500);
}
