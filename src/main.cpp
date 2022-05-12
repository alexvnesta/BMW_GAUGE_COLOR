#include <Arduino.h>
#include <SPI.h>
#include "INITIALIZE/init.hpp"
#include "SLEEP/sleep.hpp"
#include "SCREENS/currentScreen.hpp"

#include "CANBUS/buttonPress.hpp"

#include "INITIALIZE/init.hpp"

void loop() {

  Serial.println("RUNNING MAIN LOOP!");

  // DRAW SCREEN UPDATE  
  displayCurrentScreen();
  
  // PARSE CAN MESSAGES
  //can1.events(); //Need to check can events in buffer.
  readCanMessages();

  // CHECK FOR BUTTON INPUT
  checkNumClicks();

  // Adjust brightness
  analogWrite(9, dimmer);
  //analogWrite(9, 1);

  //check if car is asleep?
  checkSnooze();
}

