#include "multiGaugeScreen.hpp"
#include "DISPLAY/lcd.hpp"


#define multiGaugeCanvasHeight 67.5
#define multiGaugeCanvasWidth 60
GFXcanvas1 multiGaugeCanvas(multiGaugeCanvasWidth, multiGaugeCanvasHeight);

void displayMultiGaugeScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(120,0, gauge_logo_bitmap_1, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    tft.drawBitmap(120,66, gauge_logo_bitmap_3, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_RED);
    
    multiGaugeCanvas.setTextSize(1);
    multiGaugeCanvas.setFont(&Slimlines_MMKJ20pt7b);
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // BOOST TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(-.4,1); // Set decimal precision to 1 to prevent issues
    tft.drawBitmap(65,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);
    
    // TORQUE TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(350);
    tft.drawBitmap(180,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // OIL PRESS TEXT
    multiGaugeCanvas.setCursor(10,40);
    multiGaugeCanvas.print(60);
    tft.drawBitmap(65,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // COOLANT TEMP TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(212);
    tft.drawBitmap(180,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_RED, ST77XX_BLACK); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

}
