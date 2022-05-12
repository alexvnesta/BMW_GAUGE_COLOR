#include "logoScreen.hpp"

uint32_t logoScreenTimer = 0;

void displayLogoScreen(void){
  if (millis() - logoScreenTimer < 500){
    //Serial.println(millis());
    //Serial.println(logoScreenTimer);

    tft.drawBitmap(0,24, m_logo_bitmap_1, m_logo_width, m_logo_height, ST77XX_CYAN);
    tft.drawBitmap(0,24, m_logo_bitmap_2, m_logo_width, m_logo_height, ST77XX_MAGENTA);
    tft.drawBitmap(0,24, m_logo_bitmap_3, m_logo_width, m_logo_height, ST77XX_AMBER);
    tft.drawBitmap(0,24, m_logo_bitmap_4, m_logo_width, m_logo_height, ST77XX_WHITE);
  }
  else{
    advanceScreen();
  }  
}