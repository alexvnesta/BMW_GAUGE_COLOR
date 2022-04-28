#include "multiGaugeScreen.hpp"
#include "DISPLAY/lcd.hpp"
//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!


void displayBatteryStatusScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(0,30, battery_status_bitmap, car_battery_bitmap_width, car_battery_bitmap_height, ST77XX_RED);
    tft.setTextColor(ST77XX_RED, ST77XX_BLACK);

    tft.setFont(&Slimlines_MMKJ20pt7b);
    tft.setTextSize(1);
    
    // CHARGE VALUE
    tft.setCursor(90,75);
    tft.print("14.4");    

}
