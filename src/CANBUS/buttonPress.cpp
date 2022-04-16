#include "buttonPress.hpp"

static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX

unsigned volatile long lastButtonPress = 0;
int volatile clickCounter;

unsigned volatile long lastButtonPressTime = 0;

int volatile numClicks = 0;


void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){
    if (id == STEERING_WHEEL_ID){
    Serial.println("STEERING WHEEL BUTTON!!!!!");   
        // IF the particular voice button is pressed...
        if (message[0] == 192 && message[1] == 13 && (millis() - lastButtonPressTime > 150)){
          lastButtonPressTime = millis();
          Serial.println("MATCHES VOICE BUTTON!");
          numClicks = checkNumClicks();

            if(numClicks == 2){
              Serial.println("DOUBLE ClICK!");
            }
            else if(numClicks == 1){
              //Single click event
              Serial.println("SINGLE ClICK!");
              lastButtonPress = millis();
              // CALL THE FUNCTION TO SWITCH THE SCREEN!                 
            }
          
        }
    }
}


int checkNumClicks(void){
    static unsigned long max_delay = 800;
    int returnVal = 0;
    Serial.print("before Adding to Counter");
    Serial.println(clickCounter);
    clickCounter += 1;
    Serial.print("After Adding to Counter");
    Serial.println(clickCounter);

    lastButtonPress = millis();

    while((millis() - lastButtonPress < max_delay) && clickCounter == 1){
        can1.events();
        if (clickCounter == 2){
        //Serial.println("Button pressed twice!");
        returnVal = 2;
        clickCounter = 0;
        lastButtonPress = millis();
        break;
        return(returnVal);
        }
    }
    if (clickCounter == 1){
        //Serial.println("Button pressed once!");
        clickCounter = 0;
        returnVal = 1;
        lastButtonPress = millis();
        return(returnVal);
    }

    return (returnVal);
}

