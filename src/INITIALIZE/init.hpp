#ifndef INIT_HPP
#define INIT_HPP

#include "DISPLAY/lcd.hpp"
#include "SERIAL/serial.hpp"
#include "CANBUS/canInit.hpp"

void setup(void);
extern unsigned volatile long lastClickTime;
extern volatile int clickCount;
void checkNumClicks(void);
#endif