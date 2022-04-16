#ifndef CANINIT_HPP
#define CANINIT_HPP
#include <FlexCAN_T4.h>

extern FlexCAN_T4<CAN0, RX_SIZE_256, TX_SIZE_16> can1;

void initCanT4(void);
void canSniff(const CAN_message_t &msg);
void readCanMessages();

// The iterrupt functions are only for the steering wheel controls
void canInterruptSniff(const CAN_message_t &msg);
void readCanInterruptMessages();

#endif