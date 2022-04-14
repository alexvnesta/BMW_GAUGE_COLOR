#include "../SERIAL/serial.hpp"

void initSerial(void){
  Serial.begin(BUS_SPEED);
  Serial.print(F("SERIAL INITIALIZED!!!"));
}