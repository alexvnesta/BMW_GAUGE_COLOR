#ifndef PRESSURESENSORSCREEN_HPP
#define PRESSURESENSORSCREEN_HPP

#include "SENSORS/readSensor.hpp"

extern float boostPressure;
extern float oilPressure;

extern SensorClass boostSensor;
extern SensorClass oilSensor;

void displayPressureSensorScreen(void);

#endif