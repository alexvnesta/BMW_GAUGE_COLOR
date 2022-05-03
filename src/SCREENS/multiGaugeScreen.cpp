#include "multiGaugeScreen.hpp"


#define multiGaugeCanvasHeight 55
#define multiGaugeCanvasWidth 60
GFXcanvas1 multiGaugeCanvas(multiGaugeCanvasWidth, multiGaugeCanvasHeight);


void displayMultiGaugeScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(120,0, gauge_logo_bitmap_1, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(120,66, gauge_logo_bitmap_3, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    
    multiGaugeCanvas.setTextSize(1);
    multiGaugeCanvas.setFont(&Slimlines_MMKJ20pt7b);
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    boostPressure = boostSensor.getBoostPressValue();
    oilPressure = oilSensor.getOilPressValue();

    // BOOST TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(boostPressure,1); // Set decimal precision to 1 to prevent issues
    tft.drawBitmap(65,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);
    
    // TORQUE TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(torquelbf);
    tft.drawBitmap(180,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // OIL PRESS TEXT
    multiGaugeCanvas.setCursor(10,40);
    multiGaugeCanvas.print(oilPressure);
    tft.drawBitmap(62,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // COOLANT TEMP TEXT
    multiGaugeCanvas.setCursor(0,40);
    multiGaugeCanvas.print(coolantF);
    tft.drawBitmap(180,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

}
