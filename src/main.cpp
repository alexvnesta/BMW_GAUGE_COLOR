#include "INITIALIZE/init.hpp"
#include "SLEEP/sleep.hpp"
#include <Arduino.h>
#include "../assets/images/bitmaps.h"
#include "SCREENS/pressureSensorScreen.hpp"


bool titlescreen = true;

void loop() {

  Serial.println("RUNNING MAIN LOOP!");
  pinMode(22, INPUT_PULLDOWN);

  if(titlescreen){
    if(digitalRead(22) == 1){
      titlescreen = !titlescreen;
    }
    //tft.fillScreen(ST77XX_BLACK);
    tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_RED);
    //delay(200);
    tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_BLUE);
    //delay(200);
    tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_WHITE);
  }
  else{
    if(digitalRead(22) == 0){
      titlescreen = !titlescreen;
    }
    drawTestValue();
  }
  tft.fillScreen(ST77XX_BLACK);
  //delay(200);
  //tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_RED);
  //delay(200);
  //tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_BLUE);
  //delay(200);
  //tft.drawBitmap(0,0, bmw_logo_bitmap, bmw_logo_width, bmw_logo_height, ST77XX_WHITE);
  //delay(200);
  //delay(200);

  // 1 - parse can messages (FOR NON INTERRUPT MESSAGES)
  // 2 - update the display
  // 3 - check for device snooze? --- EVENTUALLY WILL SNOOZE IF SPECIFIC CAN MESSAGE
  //checkSnooze();
}

