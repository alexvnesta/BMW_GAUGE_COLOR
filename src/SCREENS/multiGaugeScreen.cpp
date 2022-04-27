#include "multiGaugeScreen.hpp"
#include "DISPLAY/lcd.hpp"
//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!


void displayMultiGaugeScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(120,0, gauge_logo_bitmap_1, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(120,66, gauge_logo_bitmap_3, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.setTextColor(ST77XX_RED, ST77XX_BLACK);

    tft.setFont(&Slimlines_MMKJ20pt7b);
    tft.setTextSize(1);
    
    // BOOST TEXT
    tft.setCursor(65,40);
    tft.print("-.4");
    
    // TORQUE TEXT
    tft.setCursor(180,40);
    tft.print("312");
    
    // OIL PRESS TEXT
    tft.setCursor(65,105);
    tft.print("60");

    // COOLANT TEMP TEXT
    tft.setCursor(180,105);
    tft.print("212");
}
