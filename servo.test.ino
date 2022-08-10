#include <ESP32Servo.h>
 
Servo myservo;
Servo myservodos;
  // create servo object to control a servo
// 16 servo objects can be created on the ESP32
 
int pos = 0;    // variable to store the servo position
// Recommended PWM GPIO pins on the ESP32 include 2,4,12-19,21-23,25-27,32-33 
int servoPin = 12;
 
void setup() {
	// Allow allocation of all timers
	ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
	myservo.setPeriodHertz(50);    // standard 50 hz servo
	myservo.attach(servoPin, 500, 2400);
  myservodos.setPeriodHertz(50);    // standard 50 hz servo
	myservodos.attach(13, 500, 2400);
  
   // attaches the servo on pin 18 to the servo object
	// using default min/max of 1000us and 2000us
	// different servos may require different min/max settings
	// for an accurate 0 to 180 sweep
}
 
void loop() {
 
		myservo.write(170);    // tell servo to go to position in variable 'pos'
		myservodos.write(170);    // tell servo to go to position in variable 'pos'

    delay(2000);
		myservo.write(30);    // tell servo to go to position in variable 'pos'
		myservodos.write(30);    // tell servo to go to position in variable 'pos'

   delay(2000);

}
