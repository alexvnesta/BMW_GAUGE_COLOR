#include "lcd.hpp"
#include "../SERIAL/serial.hpp"

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void initDisplay(void){
  // OR use this initializer (uncomment) if using a 1.14" 240x135 TFT:
  tft.init(135, 240);           // Init ST7789 240x135
  tft.setRotation(1);           // Rotate 90 degrees
  tft.fillScreen(ST77XX_BLACK);
  Serial.print("Display Initialized!");
}