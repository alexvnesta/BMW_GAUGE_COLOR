#include "DISPLAY/lcd.hpp"
#include "SERIAL/serial.hpp"


void setup(void) {
  initSerial();
  initDisplay();
}

void loop() {

  Serial.println("RUNNING MAIN LOOP!");

  tft.fillScreen(ST77XX_BLUE);

  delay(500);
  tft.fillScreen(ST77XX_GREEN);
  delay(500);

}

