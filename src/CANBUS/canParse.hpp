#ifndef PARSECAN_H
#define PARSECAN_H
#include <FlexCAN_T4.h>
#include <Arduino.h>

void parseCanMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);
void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);
//int checkNumClicks(void);

extern  float voltage;
extern  int canSpeed;
extern  float torquenm;
extern  float torquelbf;
extern  int rpm; 
extern  float coolantC;
extern  float coolantF;
extern  int dimmer;


#endif
