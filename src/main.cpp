#include "INITIALIZE/init.hpp"
#include "SLEEP/sleep.hpp"
#include <Arduino.h>
#include "SCREENS/currentScreen.hpp"

#include "CANBUS/buttonPress.hpp"

void loop() {

  Serial.println("RUNNING MAIN LOOP!");

  //checkIfClick();

  displayCurrentScreen();

  // 1 - parse can messages (FOR NON INTERRUPT MESSAGES)
  // 2 - update the display
  // 3 - check for device snooze? --- EVENTUALLY WILL SNOOZE IF SPECIFIC CAN MESSAGE
  //checkSnooze();
}

