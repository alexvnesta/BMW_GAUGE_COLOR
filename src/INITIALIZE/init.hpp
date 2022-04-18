#ifndef INIT_HPP
#define INIT_HPP

#include "DISPLAY/lcd.hpp"
#include "SERIAL/serial.hpp"
#include "CANBUS/canInit.hpp"

void setup(void);
void checkClickCount(void);
extern unsigned volatile long lastClickTime;
extern volatile int clickCount;

#endif