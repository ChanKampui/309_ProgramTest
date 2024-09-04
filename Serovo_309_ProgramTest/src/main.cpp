#include <Arduino.h>
#include "Servo_rpu1.h"


Servo_rpu1 servo(9);


void setup() {
  servo.servoAttach();
}

void loop() {
  servo.setPosition(30,20);
}
