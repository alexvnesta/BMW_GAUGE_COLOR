#include "INITIALIZE/init.hpp"
#include "SLEEP/sleep.hpp"

void loop() {

  Serial.println("RUNNING MAIN LOOP!");

  // 1 - parse can messages (FOR NON INTERRUPT MESSAGES)
  // 2 - update the display
  // 3 - check for device snooze? --- EVENTUALLY WILL SNOOZE IF SPECIFIC CAN MESSAGE
  checkSnooze();
}

