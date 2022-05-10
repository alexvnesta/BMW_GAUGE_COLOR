#include "sleep.hpp"
#include "INITIALIZE/init.hpp"
#include "CANBUS/canParse.hpp"

unsigned long snoozeTime = 0;
bool snoozePin = HIGH;

SnoozeDigital digital;
SnoozeBlock config_teensy32(digital);

int sleepflag = 0;

void checkSnooze(void){
  pinMode(21, INPUT_PULLDOWN);

  Serial.print("Checking PIN21 state: ");

  digital.pinMode(21, INPUT_PULLDOWN, RISING);
  snoozePin = digitalRead(21);
  Serial.println(snoozePin);

  if (snoozePin == LOW || ignition_status != 69){
      Serial.println("SLEEP PIN IS LOW");
      if (millis() - snoozeTime > 1000){ // IF ASLEEP FOR 1 second
        analogWrite(9, 0); // TURN OFF DISPLAY
        tft.enableDisplay(false);
        sleepflag = 3;
      }
      else if (millis() - snoozeTime > 30000) {
        Serial.println("GOING TO SLEEP NOW!!");
        analogWrite(9, 0);
        tft.enableDisplay(false);
        sleepflag = 1;
        Snooze.deepSleep(config_teensy32); 
      }
  }
  else if(snoozePin == HIGH) {
    snoozeTime = millis();
    // only reinitialize after sleep.
    if (sleepflag == 1){
          setup();
          tft.enableDisplay(true);
          analogWrite(9, 254);
          sleepflag = 0;
    }
    if (sleepflag == 3 && ignition_status == 69){
          tft.enableDisplay(true);
          analogWrite(9, 254);
    }
  }
}