#include "currentScreen.hpp"

#include "DISPLAY/lcd.hpp"
#include "logoScreen.hpp"
#include "pressureSensorScreen.hpp"
#include "multiGaugeScreen.hpp"
#include "batteryStatusScreen.hpp"

int currentScreenSelected = 0;

void displayCurrentScreen(){
    switch (currentScreenSelected){
        case 0:
        displayLogoScreen();
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
        currentScreenSelected = 0;
        break;
    }

}
void advanceScreen(){
    currentScreenSelected += 1;
    tft.fillScreen(ST77XX_BLKAMBER);
    tft.setCursor(0,0);
}