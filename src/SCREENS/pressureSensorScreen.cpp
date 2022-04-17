#include "pressureSensorScreen.hpp"
#include "DISPLAY/lcd.hpp"
//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!
SensorClass boostSensor(BOOSTPIN);
SensorClass oilSensor(OILPIN);

float boostPressure = boostSensor.getBoostPressValue();
float oilPressure = boostSensor.getBoostPressValue();

SensorClass testSensor(23);

void drawTestValue(void){
    float testSensorValue = testSensor.getBoostPressValue(23);
    tft.setCursor(0,0);
    tft.setTextColor(ST77XX_BLUE, ST77XX_BLACK);
    tft.setTextSize(4);
    tft.print(testSensorValue);
    tft.setCursor(40,40);
    tft.print(digitalRead(22));
} 
