#include "currentScreen.hpp"

int currentScreenSelected = 0;

void displayCurrentScreen(){
    switch (currentScreenSelected){
        case 0:
        //displayZeroSixtyScreen();
        //logoTimer = millis();
        //displayLogoScreen();
                displayMultiGaugeScreen();

        break;
        case 1:
        displayMultiGaugeScreen();
        break;
        case 2:
        displayPressureSensorScreen();
        break;
        case 3:
        displayBatteryStatusScreen();
        break;
        case 4:
        displayTorqueHorsepowerScreen();
        break;        
        case 5:
        displaySpeedRpmScreen();
        break;
        case 6:
        displayZeroSixtyScreen();
        break;    
        case 7:
        currentScreenSelected = 0;
        break;
    }

}
void advanceScreen(){
    currentScreenSelected += 1;
    tft.fillScreen(ST77XX_BLKAMBER);
    tft.setCursor(0,0);
}

void jumpMultiGauge(){
    currentScreenSelected = 1;
    tft.fillScreen(ST77XX_BLKAMBER);
    tft.setCursor(0,0);
}

void resetScreen(){
    if (currentScreenSelected == 6){
        resetZeroSixtyScreen();
    }

}