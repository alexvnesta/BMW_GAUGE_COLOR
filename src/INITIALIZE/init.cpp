#include "init.hpp"


#include "CANBUS/buttonPress.hpp"

unsigned volatile long lastClickTime = 0;
volatile int clickCount = 0;

void clickISR(void){
  if (millis() - lastClickTime > 200){
    lastClickTime = millis();
    clickCount += 1;
    Serial.println("BUTTON PRESSED!");
  }
}

void checkClickCount(){
  if (clickCount > 2){
    clickCount = 0;
  }
  Serial.print("Number of clicks: ");
  Serial.println(clickCount);
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