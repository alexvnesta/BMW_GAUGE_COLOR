#include "speedRpmScreen.hpp"

GFXcanvas1 speedRpmCanvas(80, 67.5);

float speedMax = 0;
float rpmMax = 0;
uint32_t maxResetspeedRpmScreen = 0;

void displaySpeedRpmScreen(void){

    /// Calculate horsepower

    /// reset max values
    if ((millis() - maxResetspeedRpmScreen) > 10000){
        speedMax = 0;
        rpmMax = 0;
        maxResetspeedRpmScreen = millis();
    }

    if (canSpeed > speedMax){
        speedMax = canSpeed;
    }
    if (rpm > rpmMax){
        rpmMax = rpm;
    }

    // DRAW IMAGES FIRST
    tft.drawBitmap(0,0, other_images_Racing_Flags_Clipart_Icon, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(0,66, other_images_rpm_speed_vector_logo_graphic_modern_abstract_174165391, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);


    speedRpmCanvas.setTextSize(1);
    speedRpmCanvas.setFont(&Slimlines_MMKJ20pt7b);

    // SPEED CURRENT
    speedRpmCanvas.setCursor(0,40);
    speedRpmCanvas.print(canSpeed,0);
    tft.drawBitmap(70,0, speedRpmCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    speedRpmCanvas.fillScreen(ST77XX_BLACK);
    
    // SPEED MAX
    speedRpmCanvas.setCursor(0,40);
    speedRpmCanvas.print(speedMax,0);
    tft.drawBitmap(150,0, speedRpmCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    speedRpmCanvas.fillScreen(ST77XX_BLACK);

    // HORSE CURRENT
    speedRpmCanvas.setCursor(0,40);
    speedRpmCanvas.print(rpm, 0);
    tft.drawBitmap(70,68, speedRpmCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    speedRpmCanvas.fillScreen(ST77XX_BLACK);

    // HORSE MAX
    speedRpmCanvas.setCursor(0,40);
    speedRpmCanvas.print(rpmMax, 0);
    tft.drawBitmap(150,68, speedRpmCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    speedRpmCanvas.fillScreen(ST77XX_BLACK);

}