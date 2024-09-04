#include <Arduino.h>
#include "Mux.h"

Mux mux(4,5,6,7,A4);

void setup() {
  Serial.begin(9600);
}

void loop() {
  mux.getData();
  mux.showData();
}

