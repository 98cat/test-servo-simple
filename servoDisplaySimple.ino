//Code for a simple servo test program
//Tested with a Tower Pro Micro Servo (SG 90) https://www.towerpro.com.tw/product/sg90-7/ on an Arduino Uno
//Authored by 98cat

//SERVO WIRING:
//Yellow/Gold Cable: D6
//Red Cable: 5V
//Black/Brown Cable: GND

//Include servo library
#include <Servo.h>

//Initialize a servo
Servo servo1;

//Set initial servo position
int servoPos = 0;


void setup() {
  //"attach" the servo to digital port 6
  servo1.attach(6);

  //Open the Serial port at 9600 baud to accept incoming data from the Arduino
  Serial.begin(9600);
}

void loop() {
  //Change the servo position variable to 180 (degrees)
  servoPos = 180;

  //Tell the servo to go to the servoPos position
  servo1.write(servoPos);

  //Wait a second
  delay(1000);
  
  //Print our position to the Serial Monitor
  Serial.print("Current Servo Position (degrees): ");
  Serial.println(servoPos);

  //Change the servo position variable to 90 (degrees)
  servoPos = 90;

  //Tell the servo to go to the servoPos position
  servo1.write(servoPos);

  //Wait a second
  delay(1000);
  
  //Print our position to the Serial Monitor
  Serial.print("Current Servo Position (degrees): ");
  Serial.println(servoPos);

  //Change the servo position variable to 0 (degrees)
  servoPos = 0;

  //Tell the servo to go to the servoPos position
  servo1.write(servoPos);

  //Wait a second
  delay(1000);
  
  //Print our position to the Serial Monitor
  Serial.print("Current Servo Position (degrees): ");
  Serial.println(servoPos);
}
//Do this forever
