#include "currentScreen.hpp"



int currentScreenSelected = 0;

void displayCurrentScreen(){
    switch (currentScreenSelected){
        case 0:
        displayTorqueHorsepowerScreen();
        //displayLogoScreen();
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
        currentScreenSelected = 0;
        break;
    }

}
void advanceScreen(){
    currentScreenSelected += 1;
    tft.fillScreen(ST77XX_BLKAMBER);
    tft.setCursor(0,0);
}