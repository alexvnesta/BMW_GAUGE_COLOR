#include "sleep.hpp"
#include "INITIALIZE/init.hpp"

unsigned long snoozeTime = 0;
bool snoozePin = HIGH;

SnoozeDigital digital;
SnoozeBlock config_teensy32(digital);

bool sleepflag = 0;

void checkSnooze(void){
  pinMode(21, INPUT_PULLDOWN);

  Serial.print("Checking PIN21 state: ");

  //digital.pinMode(21, INPUT_DISABLE, RISING);
  digital.pinMode(21, INPUT_PULLDOWN, RISING);
  snoozePin = digitalRead(21);
  Serial.println(snoozePin);

  if (snoozePin == LOW){
      Serial.println("SLEEP PIN IS LOW");

      if (millis() - snoozeTime > 2000) {
        Serial.println("GOING TO SLEEP NOW!!");
        sleepflag = 1;
        Snooze.deepSleep( config_teensy32 ); 
      }
  }

  else if(snoozePin == HIGH) {
    snoozeTime = millis();
    // only reinitialize after sleep.
    if (sleepflag == 1){
          setup();
          sleepflag = 0;
    }
  }
}