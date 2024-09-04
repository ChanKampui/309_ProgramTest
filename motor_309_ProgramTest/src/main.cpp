#include <Arduino.h>
#include<motor.h>


Motor motor_1(13,12,11);
Motor motor_2(10,9,8,-200,200);

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  motor_1.setSpeed();
  motor_1.getSpeed();
}

// put function definitions here:
