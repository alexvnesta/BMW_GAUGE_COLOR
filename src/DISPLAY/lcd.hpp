#ifndef LCD_HPP
#define LCD_HPP


//Includes REQUIRED FOR THE COLOR DISPLAY
#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>
#include <Adafruit_I2CDevice.h>

//LCD PINS
#define TFT_CS        6 // Hallowing display control pins: chip select
#define TFT_RST       8 // Display reset
#define TFT_DC        7 // Display data/command select
#define TFT_BACKLIGHT  9 // Display backlight pin

//TFT display object
extern Adafruit_ST7789 tft;

//Functions
void initDisplay(void);



#endif