/*
  Automatic Watering Plant System

  Create an automatic watering plant system that will run a small 3V DC water pump to water a plant into a vase if the Soil Moisture Sensor into the vase reads a value higher than the optimal value of moisture for that plant, meaning that the soil is dry.
  If the moisture level reads by the sensor is higher than the optimal value of moisture for the plant, a red LED will turn on, and a message "Dry Soil :(" will appear on the LCD Screen, together with the water pump being turned on, if not, a green LED will turn on and a message "Happy Plant :)" will appear on the LCD Screen.
  The water compartment also has a Water Level Sensor with three different sizes of pins, which read three different values. If the sensor reads that the three pins are in contact with water a green LED will turn on, and a message "Waterlevel: Full" will appear on the LCD Screen. If the sensor reads that two pins are in contact with water, a yellow LED will turn on, and a message "WaterLevel: Half" will appear on the LCD Screen. If the sensor reads that only one pin is in contact with water, a red LED will turn on, and a message "WaterLevel: Empty" will appear on the LCD Screen.
  Also a condition was created that if the Soil Moisture Sensor reads a value higher than the optimal value of moisture for the plant, AND the Water Level Sensor reads that only one pin is in contact with water, the pump will not be turned on.
  Display the read values and the desirable information on the Serial Monitor of the Arduino IDE.
  Concept of project done by Karen Cariño, Jose Tong, Rex Mendoza Orense, Ricson Que under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde
  Manila, May 3rd to May 16th, 2017

  Input:
  1x Soil Moisture Sensor 5V DC <https://www.e-gizmo.com/>
  1x Water Level Sensor 5V DC <https://www.e-gizmo.com/>
  Output:
  1x TIP120 Power Darlington Transistor
  1x 1N4001 Diode
  1x 10KΩ resistor
  1x Small Water Pump (similar to a 3V DC Motor)
  2x 5mm red LED
  1x 5mm yellow LED
  2x 5mm green LED
  5x 220Ω resistor
  1x LCD Screen (compatible with Hitachi HD44780 driver)
  1x 10KΩ Breadboard trim potentiometer
  1x 2.1mm DC barrel jack
  2X Switching Power Supply - Selectable Output 3-12VDC 1000mA

  created May 16th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos> and Ricson Que

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
int pump = 13;
int moistureSensor = A0;
int waterlevel1 = 7;
int waterlevel2 = 8;
int waterlevel3 = 9;
int moistureRedLed = A4;
int moistureGreenLed = A5;
int waterRedLed = A1;
int waterYellowLed = A2;
int waterGreenLed = A3;
//variables
int AnaVal = 0;
int DigVal = 0;
int level1 = 0;
int level2 = 0;
int level3 = 0;
int temp = 0;
int flag = 0;
//insert library
#include <LiquidCrystal.h>
//connected pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int preSwitchState = 0;
int reply;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  lcd.begin(16, 3); //because of this specific library, this is the necessary way to inform the Arduino that the potentiometer is connected at the 3rd pin of the LCD, and that the LCD Screen is a 16 pin type
  pinMode(switchPin, INPUT); //set the potentiometer as an input
}

// the loop routine runs over and over
void loop()
{
  //store the sensor values
  int AnaVal = analogRead(moistureSensor);
  int level1 = digitalRead(waterlevel1);
  int level2 = digitalRead(waterlevel2);
  int level3 = digitalRead(waterlevel3);

  //water compartment level
  temp = level1 + level2 + level3;
  Serial.println(temp);
  if (temp == 1)
  {
    analogWrite(waterGreenLed, 255);
    analogWrite(waterYellowLed, 0);
    analogWrite(waterRedLed, 0);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Water: Full");
    Serial.println("Waterlevel: Full");
  }
  else if (temp == 2)
  {
    analogWrite(waterGreenLed, 0);
    analogWrite(waterYellowLed, 255);
    analogWrite(waterRedLed, 0);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Water: Ok");
    Serial.println("WaterLevel: Half");
  }
  else
  {
    analogWrite(waterGreenLed, 0);
    analogWrite(waterYellowLed, 0);
    analogWrite(waterRedLed, 255);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Water: Empty");
    Serial.println("WaterLevel: Empty");
  }
  delay(3000);

  //soil moisture sensor
  Serial.print("Soil Moisture: ");
  Serial.println(AnaVal);
  delay(500);
  flag = 0;
  if (analogRead(moistureSensor) > 640) //Dry soil
  {
    flag = 1;
    analogWrite(moistureRedLed, 255);
    analogWrite(moistureGreenLed, 0);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Dry Soil :(");
    Serial.println("Pump ON");
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Happy Plant :)");
    Serial.println("Pump OFF");
    analogWrite(moistureRedLed, 0);
    analogWrite(moistureGreenLed, 255);
  }

  if (temp == 3) // Water is empty
  {
    flag = 0;
    Serial.println("Pump OFF, Water empty");
  }
  if (flag == 1)
  {
    analogWrite(pump, 255);
  }
  else
  {
    analogWrite(pump, 0);
  }
  delay(3000);  //For display of moisture
}
