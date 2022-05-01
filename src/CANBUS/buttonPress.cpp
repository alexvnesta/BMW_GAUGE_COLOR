#include "buttonPress.hpp"

//static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX

//unsigned volatile long lastButtonPressTime = 0;
//int volatile numClicks = 0;

unsigned volatile long lastClickTime = 0;
volatile int clickCount = 0;
static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX



void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){
    if (id == STEERING_WHEEL_ID){
    Serial.println("STEERING WHEEL BUTTON!!!!!");   
        if (message[0] == 192 && message[1] == 13){ // IF the particular voice button is pressed...
          lastClickTime = millis();  // Reset button press timer
          clickCount += 1;
          }
    }
}