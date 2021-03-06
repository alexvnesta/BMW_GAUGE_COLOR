#ifndef PARSECAN_H
#define PARSECAN_H
#include <FlexCAN_T4.h>
#include <Arduino.h>

void parseCanMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);
void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);

extern  double voltage;
extern  float canSpeed;
extern  float torquenm;
extern  float torquelbf;
extern  float rpm; 
extern  float coolantC;
extern  float coolantF;
extern  int dimmer;
extern  int ignition_status;


#endif
