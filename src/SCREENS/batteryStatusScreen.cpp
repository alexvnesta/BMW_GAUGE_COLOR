#include "multiGaugeScreen.hpp"
#include "DISPLAY/lcd.hpp"
//// THIS WILL CONTAIN THE CODE TO DRAW THE READINGS FOR THE TWO 5V Pressure sensors!

#define batteryCanvasHeight 67.5
#define batteryCanvasWidth 100
GFXcanvas1 batteryCanvas(batteryCanvasWidth, batteryCanvasHeight);


void displayBatteryStatusScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(30,30, battery_status_bitmap, car_battery_bitmap_width, car_battery_bitmap_height, ST77XX_AMBER);

    batteryCanvas.setFont(&Slimlines_MMKJ20pt7b);
    batteryCanvas.setTextSize(1);
    
    // CHARGE VALUE
    batteryCanvas.setCursor(0,40);
    batteryCanvas.print(voltage,2); // Set decimal precision to 1 to prevent issues
    tft.drawBitmap(120,35, batteryCanvas.getBuffer(), batteryCanvasWidth, batteryCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    batteryCanvas.fillScreen(ST77XX_BLACK);

}
