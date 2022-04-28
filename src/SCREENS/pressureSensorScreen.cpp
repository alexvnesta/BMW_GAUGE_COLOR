#include "pressureSensorScreen.hpp"
#include "DISPLAY/lcd.hpp"
#include "../assets/images/bitmaps.h"
//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!
SensorClass boostSensor(BOOSTPIN);
SensorClass oilSensor(OILPIN);

float boostPressure = boostSensor.getBoostPressValue();
float oilPressure = boostSensor.getBoostPressValue();

SensorClass testSensor(23);

GFXcanvas1 pressureSensorCanvas(120, 67.5);

void displayPressureSensorScreen(void){

    pressureSensorCanvas.setTextSize(1);
    pressureSensorCanvas.setFont(&Slimlines_MMKJ20pt7b);

    // BOOST PRESSURE
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    float testSensorValue = testSensor.getBoostPressValue(23);
    
    pressureSensorCanvas.setCursor(0,40);
    pressureSensorCanvas.print(testSensorValue);
    tft.drawBitmap(70,0, pressureSensorCanvas.getBuffer(), 120, 67.5, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    pressureSensorCanvas.fillScreen(ST77XX_BLACK);

    // OIL PRESSURE
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    pressureSensorCanvas.setCursor(0,40);
    pressureSensorCanvas.print(testSensorValue*0.25);
    tft.drawBitmap(70,68, pressureSensorCanvas.getBuffer(), 120, 67.5, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    pressureSensorCanvas.fillScreen(ST77XX_BLACK);

    //tft.setCursor(70,110);
    //tft.print(digitalRead(22));
}


/*
void displayPressureSensorScreen(void){

    // BOOST PRESSURE
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    float testSensorValue = testSensor.getBoostPressValue(23);
    tft.setCursor(70,40);
    tft.print(testSensorValue);

    // OIL PRESSURE
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.setCursor(70,110);
    tft.print(digitalRead(22));


    //tft.fillScreen(ST77XX_BLACK);
}
*/