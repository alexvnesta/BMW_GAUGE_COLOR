#include "TorqueHorseScreen.hpp"

GFXcanvas1 torqueHorsepowerCanvas(80, 67.5);

float calcHorsePower = 0;
float horsepowermax = 0;
float torquemax = 0;
uint32_t maxReset = 0;


void displayTorqueHorsepowerScreen(void){

      /// Calculate horsepower
      if (rpm > 0 && torquelbf > 0) calcHorsePower = (rpm * torquelbf) / (60/(2*3.1415962))/1000;

      /// reset max values
      if ((millis() - maxReset) > 10000){
          torquemax = 0;
          horsepowermax = 0;
          maxReset = millis();
      }

      if (torquelbf > torquemax){
          torquemax = torquelbf;
      }
      if (calcHorsePower > horsepowermax){
          horsepowermax = calcHorsePower;
      }

    // DRAW IMAGES FIRST
    tft.drawBitmap(0,0, gauge_logo_bitmap_1, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(0,66, other_images_11ec8c5b8293f8a475da2dc6da661c08__horse_logo_running_horses, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);


    torqueHorsepowerCanvas.setTextSize(1);
    torqueHorsepowerCanvas.setFont(&Slimlines_MMKJ20pt7b);

    // TORQUE CURRENT
    torqueHorsepowerCanvas.setCursor(0,40);
    torqueHorsepowerCanvas.print(torquelbf,0);
    tft.drawBitmap(70,0, torqueHorsepowerCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    torqueHorsepowerCanvas.fillScreen(ST77XX_BLACK);
    
    // TORQUE MAX
    torqueHorsepowerCanvas.setCursor(0,40);
    torqueHorsepowerCanvas.print(torquemax,0);
    tft.drawBitmap(150,0, torqueHorsepowerCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    torqueHorsepowerCanvas.fillScreen(ST77XX_BLACK);

    // HORSE CURRENT
    torqueHorsepowerCanvas.setCursor(0,40);
    torqueHorsepowerCanvas.print(calcHorsePower, 0);
    tft.drawBitmap(70,68, torqueHorsepowerCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    torqueHorsepowerCanvas.fillScreen(ST77XX_BLACK);

    // HORSE MAX
    torqueHorsepowerCanvas.setCursor(0,40);
    torqueHorsepowerCanvas.print(horsepowermax, 0);
    tft.drawBitmap(150,68, torqueHorsepowerCanvas.getBuffer(), 80, 67.5, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    torqueHorsepowerCanvas.fillScreen(ST77XX_BLACK);

}