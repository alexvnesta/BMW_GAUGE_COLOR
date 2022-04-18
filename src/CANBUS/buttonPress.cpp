#include "buttonPress.hpp"




//////////////////////////////////////////////////////////////////////////
const unsigned long DEBOUNCE_DELAY = 50UL;














struct button_t
{
    const uint8_t   pin;
    uint8_t         state;
    uint8_t         stateLast;
    uint8_t         count;
    unsigned long   lastDebounceTime;
};

boolean debounce(struct button_t* button)
{
    const unsigned long millisRef = millis();
    
    uint8_t state = digitalRead((*button).pin);
    if ( state != (*button).stateLast )
    {
        (*button).lastDebounceTime = millisRef;
    }

    if ( (millisRef - (*button).lastDebounceTime) > DEBOUNCE_DELAY )
    {
        if ( state != (*button).state )
        {
            (*button).state = state;

            if ( (*button).state == HIGH )
            {
                (*button).stateLast = state;

                return HIGH;
            }
        }
    }

    (*button).stateLast = state;

    return LOW;
}
///////////////////////////////////////////////////////////////////////////









static uint32_t STEERING_WHEEL_ID = 470; //1D6 HEX

unsigned volatile long lastButtonPress = 0;
int volatile clickCounter;

unsigned volatile long lastButtonPressTime = 0;

int volatile numClicks = 0;

void parseCanInterruptedMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){
    if (id == STEERING_WHEEL_ID){
    Serial.println("STEERING WHEEL BUTTON!!!!!");   
        if (message[0] == 192 && message[1] == 13){ // IF the particular voice button is pressed...
          lastButtonPressTime = millis();  // Reset button press timer
          numClicks = checkNumClicks(); // get number of clicks

            if(numClicks == 2){
              Serial.println("DOUBLE CLICK!");
              // DO SOME ACTION TO THE SCREEN
            }
            else if(numClicks == 1){
              Serial.println("SINGLE CLICK!");
              // CALL THE FUNCTION TO SWITCH THE SCREEN!
              advanceScreen();
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

      while((millis() - lastButtonPress < max_delay) && clickCounter == 1){
          can1.events();  //keep getting can messages so that the whole device does not wait on this next button press
          if (clickCounter == 2){
            returnVal = 2;
            clickCounter = 0;
          break;
          return(returnVal);
          }
      }
      if ((clickCounter == 1) && (millis() - lastButtonPress >= max_delay)){
          clickCounter = 0;
          returnVal = 1;
          lastButtonPress = millis();
          return(returnVal);
      }
      clickCounter = 0;
      return (returnVal);
}


