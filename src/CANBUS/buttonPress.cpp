#include "buttonPress.hpp"

static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX

unsigned volatile long lastButtonPressTime = 0;
int volatile numClicks = 0;

void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){
    if (id == STEERING_WHEEL_ID){
    Serial.println("STEERING WHEEL BUTTON!!!!!");   
        if (message[0] == 192 && message[1] == 13){ // IF the particular voice button is pressed...
          lastButtonPressTime = millis();  // Reset button press timer
          numClicks += 1;
          }
    }
}