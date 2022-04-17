#include "logoScreen.hpp"

void displayLogoScreen(void){
  tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_RED);
  tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_BLUE);
  tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_WHITE);
}