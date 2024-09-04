#pragma once
#include <Arduino.h>

class Joystick {
    private:
        const uint8_t _pin_Joystick_X;
        const uint8_t _pin_Joystick_Y;

        /*...*/

    public:
        Joystick(const uint8_t pin_Joystick_X, const uint8_t pin_Joystick_Y);

        uint16_t getRawX();
        uint16_t getRawY();

        void setDeadZoneX();
        void setDeadZoneY();

        int16_t getMapX();
        int16_t getMapY();

        void showRawValue();
        void showMapValue();

};