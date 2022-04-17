#include "init.hpp"


#include "CANBUS/buttonPress.hpp"
int numClicksTest = 0;

void checkIfClick(void){

    numClicksTest = checkNumClicks();

    if (numClicksTest == 1){
      tft.println("SINGLECLICK!!!");
      advanceScreen();
    }
    if (numClicksTest == 2){
      tft.println("DOUBLECLICK!!!!");
    }
}

void setup(void) {
  initSerial();
  initDisplay();
  initCanT4();

  //TEMP PIN INIT
  pinMode(22, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(22), checkIfClick, RISING);

}