#pragma once
#include <Arduino.h>

class Mux
{
private:
    uint8_t _S0, _S1, _S2, _S3, _SIG;
    int data_arr[16];

public:
    Mux(uint8_t S0, uint8_t S1, uint8_t S2, uint8_t S3, uint8_t SIG);
    void selectChannel(uint8_t channel);
    void getData();
    void showData();
    //int getDigitalData(uint8_t channel);
    int getAnalogData(uint8_t channel);
};