#include "init.hpp"
#include "CANBUS/buttonPress.hpp"
#include "SCREENS/logoScreen.hpp"

//unsigned volatile long lastClickTime = 0;
//volatile int clickCount = 0;
/*
void clickISR(void){
  if (millis() - lastClickTime > 200){
    clickCount += 1;
    lastClickTime = millis();
    Serial.println("BUTTON PRESSED!");
  }
}
*/

void setup(void) {
  initSerial();
  initDisplay();
  initCanT4();
  dimmer = 255;
  logoScreenTimer = millis();

  //TEMP PIN INIT
  //pinMode(22, INPUT_PULLDOWN);
  //attachInterrupt(digitalPinToInterrupt(22), clickISR, HIGH);
  //END ISR TEST

}