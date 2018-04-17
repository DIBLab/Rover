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
  
  //Set both servos to stopped (90)
  left.write(90); 
  right.write(90);

  //wait for one second
  delay(1000);

  //Set both servos to drive forward
  //they have opposite numbers because they are mounted in opposite directions
  left.write(120);
  right.write(120);

}
