#include "init.hpp"
#include "CANBUS/buttonPress.hpp"


unsigned volatile long lastClickTime = 0;
volatile int clickCount = 0;

void clickISR(void){
  if (millis() - lastClickTime > 200){
    clickCount += 1;
    lastClickTime = millis();
    Serial.println("BUTTON PRESSED!");
  }
}


void checkNumClicks(void){
static unsigned long max_delay = 800;

      Serial.println("");
      Serial.print("internal Fn click Counter: ");
      Serial.println(clickCount);

      while((millis() - lastClickTime < max_delay) && clickCount == 1){
          if (clickCount >= 2){
            //returnVal = 2;
            clickCount = 0;
            Serial.println("DOUBLECLICK************************");
            break;
            }
      }
      if ((clickCount == 1) && (millis() - lastClickTime >= max_delay)){
          clickCount = 0;
          Serial.println("***********************SINGLECLICK");
          advanceScreen();
          //returnVal = 1;
          //lastClickTime = millis();
      }
      if (clickCount == 2){
        Serial.println("DOUBLECLICK************************");
        clickCount = 0;
      }
      if (clickCount >= 3){
        Serial.println("*****************HOLD************************");
        clickCount = 0;
      }
  //clickCount = 0;
}


void setup(void) {
  initSerial();
  initDisplay();
  initCanT4();

  //TEMP PIN INIT
  pinMode(22, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(22), clickISR, HIGH);
  //END ISR TEST

}