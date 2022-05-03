#ifndef BUTTONPRESS_HPP
#define BUTTONPRESS_HPP
#include "canInit.hpp"
#include "canParse.hpp"
#include <FlexCAN_T4.h>

#include "SCREENS/currentScreen.hpp"


void checkNumClicks(void);

void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);

extern unsigned volatile long lastClickTime;
extern volatile int clickCount;

#endif