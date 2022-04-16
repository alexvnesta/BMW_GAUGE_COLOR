#include "pressureSensorScreen.hpp"

//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!
SensorClass boostSensor;
SensorClass oilSensor;

float boostPressure = boostSensor.getBoostPressValue();
float oilPressure = boostSensor.getBoostPressValue();