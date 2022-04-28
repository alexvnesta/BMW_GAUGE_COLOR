#ifndef LCD_HPP
#define LCD_HPP

//Includes REQUIRED FOR THE COLOR DISPLAY
#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>
#include <Adafruit_I2CDevice.h>
#include <Fonts/FreeSans24pt7b.h>

// Fonts made with
// https://rop.nl/truetype2gfx/
#include "../assets/fonts/ostrich_sans_sans_medium20pt7b.h"
#include "../assets/fonts/ostrich_sans_sans_condensed_light20pt7b.h"
#include "../assets/fonts/Slimlines_MMKJ20pt7b.h"

//LCD PINS
#define TFT_CS        6 // Hallowing display control pins: chip select
#define TFT_RST       8 // Display reset
#define TFT_DC        7 // Display data/command select
#define TFT_BACKLIGHT  9 // Display backlight pin

//TFT display object
extern Adafruit_ST7789 tft;
//extern GFXcanvas1 canvas;

//Functions
void initDisplay(void);



#endif