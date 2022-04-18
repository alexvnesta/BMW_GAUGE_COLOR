#include "../SERIAL/serial.hpp"

void initSerial(void){
  Serial.begin(BUS_SPEED);
  Serial.println(F("SERIAL INITIALIZED!!!"));
}