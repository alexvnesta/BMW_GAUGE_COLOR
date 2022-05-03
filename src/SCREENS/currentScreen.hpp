#ifndef CURRENTSCREEN_HPP
#define CURRENTSCREEN_HPP

#include "DISPLAY/lcd.hpp"
#include "logoScreen.hpp"
#include "pressureSensorScreen.hpp"
#include "multiGaugeScreen.hpp"
#include "batteryStatusScreen.hpp"
#include "TorqueHorseScreen.hpp"
#include "speedRpmScreen.hpp"
#include "zeroSixtyScreen.hpp"

void displayCurrentScreen();
void advanceScreen();

void jumpMultiGauge();
void resetScreen();

#endif