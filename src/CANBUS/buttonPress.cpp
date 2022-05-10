#include "buttonPress.hpp"

unsigned volatile long lastClickTime = 0;
volatile int clickCount = 0;
static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX

void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){

    if (id == STEERING_WHEEL_ID){
    Serial.println("STEERING WHEEL BUTTON!!!!!");   
        if (message[0] == 192 && message[1] == 13 && lastClickTime - millis() > 800){ // IF the particular voice button is pressed...
            lastClickTime = millis();  // Reset button press timer
            Serial.println("STEERING WHEEL BUTTON!!!!!****************PRESSED!");   
            clickCount += 1;
        }
    }
}


void checkNumClicks(void){
static unsigned long max_delay = 3000;

      Serial.println("");
      Serial.print("internal Fn click Counter: ");
      Serial.println(clickCount);

      while((millis() - lastClickTime < max_delay) && clickCount == 1){
          if (clickCount >= 2){
            //returnVal = 2;
            clickCount = 0;
            Serial.println("DOUBLECLICK************************");
            lastClickTime = millis();

            break;
            }
      }
      if ((clickCount == 1) && (millis() - lastClickTime >= max_delay)){
          clickCount = 0;
          Serial.println("***********************SINGLECLICK");
          advanceScreen();
          lastClickTime = millis();

          //returnVal = 1;
          //lastClickTime = millis();
      }
      if (clickCount == 2){
        Serial.println("DOUBLECLICK************************");
        clickCount = 0;
        lastClickTime = millis();

        resetScreen();
        
      }
      if (clickCount >= 3){
        Serial.println("*****************HOLD************************");
        clickCount = 0;
        lastClickTime = millis();

        jumpMultiGauge();

        //_reboot_Teensyduino_();
      }
  //clickCount = 0;
  //lastClickTime = millis();
}
