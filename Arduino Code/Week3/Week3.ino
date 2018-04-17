//Week 3:
//Create functions for forward, backward, left, right, and stop
//Use functions in the loop to drive the robot

#include <Servo.h> //this includes the Servo library so that your code is easier to write

//Name your servos
Servo left; 
Servo right;

void setup() {
  // put your setup code here, to run once:

  //Attach your servos to the pin that you have them wired to
  left.attach(10);
  right.attach(3);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 forward();
 left();
 forward();
}

//write functions for forward, backward, left, right, and stop
//Remember: motors are mounted in opposite directions!
void forward(){
  left.write(120);
  right.write(60);
  delay(200);
}

void backward(){
  left.write(60);
  right.write(120);
  delay(200);
}

void left(){
  left.write(120);
  right.write(120);
  delay(200);
}

void right(){
  left.write(60);
  right.write(60);
  delay(200);
}

//stop is a reserved word - use a different name like hold instead
void hold(){
  left.write(90);
  right.write(90);
  delay(200);
}

