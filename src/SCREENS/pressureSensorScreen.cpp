#include "pressureSensorScreen.hpp"
#include "DISPLAY/lcd.hpp"
#include "../assets/images/bitmaps.h"

//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!
SensorClass boostSensor(BOOSTPIN);
SensorClass oilSensor(OILPIN);

float boostPressure = 0;
float oilPressure = 0;

GFXcanvas1 pressureSensorCanvas(120, 67.5);

void displayPressureSensorScreen(void){

    boostPressure = boostSensor.getBoostPressValue();
    oilPressure = oilSensor.getOilPressValue();

    pressureSensorCanvas.setTextSize(1);
    pressureSensorCanvas.setFont(&Slimlines_MMKJ20pt7b);

    // BOOST PRESSURE
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    
    pressureSensorCanvas.setCursor(0,40);
    pressureSensorCanvas.print(boostPressure);
    tft.drawBitmap(70,0, pressureSensorCanvas.getBuffer(), 120, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    pressureSensorCanvas.fillScreen(ST77XX_BLACK);

    // OIL PRESSURE
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    pressureSensorCanvas.setCursor(0,40);
    pressureSensorCanvas.print(oilPressure);
    tft.drawBitmap(70,68, pressureSensorCanvas.getBuffer(), 120, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    pressureSensorCanvas.fillScreen(ST77XX_BLACK);

}