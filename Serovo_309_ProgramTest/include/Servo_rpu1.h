#pragma once
#include <Arduino.h>
#include <Servo.h>

class Servo_rpu1 : public Servo
{
private:
    const uint8_t _pin;
    uint16_t _currentPosition = 90; // default position
    unsigned long _servoMillis = 0 ;
    unsigned long _currentMillis = 0;

public:
    Servo_rpu1(uint8_t pin);
    void servoAttach();
    void setPosition(uint16_t targetAngle);
    void setPosition(uint16_t targetAngle, uint16_t interval);

};
