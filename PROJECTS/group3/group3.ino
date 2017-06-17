/*
  Animatronic Owl

  Create an animatronic owl, which will follow the user turning its head to the right or to the left side, by a servo motor, based o values read from two PIR sensors attached to opposite sides of the owl and pointed to different directions. If the PIR sensor reads a higher value (detects movement), the owl will turn its head to this specific direction (left or right). If none of the two PIR sensors detects movement, the owl will turn its head into a central position.
  The wings of the owl are attached each to one metal gear servo. They will turn up based on the values of one IFDS, meaning if the user is closer to the object, the wings move higher.
  An additional behaviour was added to the head, which hosts a photoresistor sensor. Two LEDs will be in the place of the eyes. They will be constantly turned on, until the photoresistor reads a very low value, meaning that someone is blocking the light with its hand (petting the owl), at this moment the LEDs will start to blink repeatedly.
  Display the read values and the desirable information on the Serial Monitor of the Arduino IDE.
  Concept of project done by Dorothy Chan, Stuart Paul Dee Yang, Anthony Brian Cruz, and Patrick Sunico under the tuition of Orion Campos, at the Arduino Responsive Models Workshop, De La Salle College of Saint Benilde
  Manila, May 3rd to May 16th, 2017

  Input:
  1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
  2x PIR motion sensor (5V-12V)
  1x Photo cell (CdS photoresistor)
  1x 10KΩ resistor
  Output:
  1x HXT900 Micro Servo 1.6kg / 0.12sec / 9g
  2x Standard 15kg.cm Metal Gear Digital Servo FT5316M
  2x 5mm red LED
  1x 220Ω resistor
  1x 2.1mm DC barrel jack
  2X Switching Power Supply - Selectable Output 3-12VDC 1000mA

  created May 16th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos> and Anthony Brian Cruz

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

#include <Servo.h> //servolibrary

//pins that are connected
int servoPinHead = 10; //servo pin head
int servoPinWingL = 9; //servo pin wing L
int servoPinWingR = 8; //servo pin wing R
int LEDpin = 13; //eyes
int sensorLeft = 2; //motion sensor left
int sensorRight = 3; //motion sensor right
int lightsensor = A1;//photo
int IRDSsensor = A0;//IRDS

Servo servo1;//head
Servo servo2;//wing left
Servo servo3;//wing right

//int pos = 90;   //initial servo position
//int left = 0;
//int right = 0;

int angle = 0; //servo start angle
int angle1 = 0;
//int sensorValue = analogRead(sensor1);

void setup()
{
  servo1.attach(servoPinHead);
  servo2.attach(servoPinWingL);
  servo3.attach(servoPinWingR);

  Serial.begin(9600); //speed for the serial monitor

  pinMode (LEDpin, OUTPUT);
  //pinMode (LEDpin2, OUTPUT);
  //pinMode (sensor1, INPUT);
  //pinMode (sensor2, INPUT);

}
void loop()
{
  A();//tracker head
  B();//wings
  C();//eyes
}

void A()//tracker head
{
  int headSensorLeft = 0;
  int headSensorRight = 0;
  int servo1position = 90;
  int servo1positionLeft = 150;
  int servo1positionRight = 30;
  headSensorLeft = digitalRead(sensorLeft);
  headSensorRight = digitalRead(sensorRight);



  if (headSensorLeft == HIGH)
  {
    servo1.write(servo1positionLeft);
    Serial.println("Turn Left");
  }
  else if (headSensorRight == HIGH)
  {
    servo1.write(servo1positionRight);
    Serial.println("Turn Right");
  }
  else
  {
    servo1.write(servo1position);
    Serial.println("Center");
    delay(30);
  }



}

void B()//wings
{
  int distanceSensorValue = 0;
  int servo2position = 0;
  int servo3position = 0;

  distanceSensorValue = analogRead(IRDSsensor);
  servo2position = map(distanceSensorValue, 60, 400, 180, 120);
  servo2position = constrain(servo2position, 0, 180);
  servo2.write(servo2position);

  servo3position = map(distanceSensorValue, 60, 400, 0, 60);
  servo3position = constrain(servo3position, 0, 180);
  servo3.write(servo3position);

  Serial.print("               Distance Sensor: ");
  Serial.print(distanceSensorValue);
  Serial.print(" ");
  Serial.print("Wing Angle left: ");
  Serial.print(servo2position);
  Serial.print(" ");
  Serial.print("Wing Angle right: ");
  Serial.println(servo3position);

  delay(500);
}

void C()//eyes
{
  int lightSensorValue = 0;
  int ledValue = 0;
  lightSensorValue = analogRead(lightsensor);

  Serial.print("                                                                                      Light Sensor: ");
  Serial.println(lightSensorValue);
  delay(200);

  if (lightSensorValue < 250)
  {
    digitalWrite(LEDpin, 0);
    delay(10);
    digitalWrite(LEDpin, 255);
    delay(30);
    digitalWrite(LEDpin, 0);
    delay(10);
    digitalWrite(LEDpin, 255);
    delay(20);
    digitalWrite(LEDpin, 0);
    delay(10);

    Serial.println("                                                                                      HAPPY");
    delay(200);
  }
  else
  {
    digitalWrite(LEDpin, 255);
    Serial.println("                                                                                      NORMAL");
    delay(200);
  }
}
