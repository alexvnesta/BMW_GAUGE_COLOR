#ifndef ZEROSIXTYSCREEN_HPP
#define ZEROSIXTYSCREEN_HPP

#include "DISPLAY/lcd.hpp"
#include "../assets/images/bitmaps.h"
#include "CANBUS/canParse.hpp"

void displayZeroSixtyScreen(void);
void resetZeroSixtyScreen(void);
const char* getState(int numericState);
void initFonts();
void drawGridlines();
void drawTimeBreaks();
void checkAccelTimes(int speed);
void checkBrakeTimes(int speed);
void evaluateState(int speed, int state);


#endif