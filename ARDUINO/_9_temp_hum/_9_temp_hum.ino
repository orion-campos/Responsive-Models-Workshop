/*
  Temperature and Humidity Sensor

  Connect the DHT-22, also named as AM2302, a relative humidity and temperature sensor to an Arduino, and turn on an LED with an 'IF' statement.
  In this code the LED turn on if the relative humidity is higher than 70%, which could be achieved by breathing very closely to the sensor.
  Display the read values on the Serial Monitor.

  Input:
  1x DHT-22 (AM2302)
  1x 10KΩ resistor
  Output:
  1x 5mm LED
  1x 220Ω resistor

  created July 1st, 2015
  by Michalis Vasilakis <www.ardumotive.com>

  modified May 4th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//connected pins
int LEDpin = 13;
//insert library
#include <dht.h>
dht DHT;
#define DHT22_PIN 2 //because of this specific library, this is the necessary way to inform the Arduino that the DHT22 sensor is connected on pin 2
//variables
float hum;
float temp;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  pinMode(LEDpin, OUTPUT); //set the LED as an output
}

// the loop routine runs over and over
void loop()
{
  //because of this specific library, the normal 'digitalRead' command of Arduino, is substituded by the following comands to store humidity and temperature
  int chk = DHT.read22(DHT22_PIN);
  hum = DHT.humidity;
  temp = DHT.temperature;
  if (hum > 70) //if the humidity is higher than 70%
  {
    digitalWrite(LEDpin, HIGH); //LED is on
  }
  else
  {
    digitalWrite(LEDpin, LOW); //LED is off
  }
  //display the desired information on the Serial Monitor
  Serial.print("humidity: ");
  Serial.print(hum);
  Serial.print("%");
  Serial.print("    ");
  Serial.print("temperature: ");
  Serial.print(temp);
  Serial.println("Celsius");
  //wait two seconds
  delay(2000);
}
