#include <avr/pgmspace.h>
#include <Adafruit_GFX.h>    // Core graphics library

const uint8_t Slimlines12pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xE0, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x38, 0x1C, 0x70, 0x71, 0xC1, 0xC7, 0x07, 0x1C,
  0x1C, 0x70, 0x71, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x71, 0xC1, 0xC7,
  0x07, 0x1C, 0x1C, 0x70, 0x71, 0xC1, 0xC7, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF1, 0xC7, 0x07, 0x1C, 0x1C, 0x70, 0x71, 0xC1, 0xC7, 0x07, 0x1C, 0x1C,
  0x70, 0x1C, 0x0E, 0x1F, 0xDF, 0xFF, 0xFF, 0x1F, 0x8F, 0xC0, 0xF0, 0x38,
  0x1E, 0x0F, 0x03, 0x81, 0xE0, 0x70, 0x3C, 0x0E, 0x07, 0x83, 0xC0, 0xE0,
  0x78, 0x1F, 0x8F, 0xC7, 0xFF, 0xFF, 0xDF, 0xC3, 0x81, 0xC0, 0x03, 0x81,
  0xE0, 0x78, 0x1C, 0xE7, 0x39, 0xCE, 0xF0, 0x3C, 0x0E, 0x03, 0x80, 0xE0,
  0x38, 0x1E, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x0F, 0x03, 0xDC, 0xE7, 0x39,
  0xCE, 0x07, 0x81, 0xE0, 0x70, 0x00, 0x1C, 0x0E, 0x07, 0x0F, 0xFF, 0xFF,
  0xFF, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x01, 0xFE, 0x7F,
  0x7F, 0xF0, 0x38, 0x1C, 0x0E, 0x07, 0x1F, 0x8F, 0xC7, 0xFF, 0xFF, 0xDF,
  0xC3, 0x81, 0xC0, 0xFF, 0xFE, 0x7F, 0xFF, 0xF8, 0xE3, 0x8E, 0x38, 0xE3,
  0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3,
  0x8F, 0xFF, 0x7C, 0xFB, 0xFF, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7,
  0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x7F, 0xFF,
  0xF8, 0x7E, 0x3C, 0xFF, 0xFF, 0xFF, 0x3C, 0x7E, 0x0E, 0x03, 0x80, 0xE3,
  0xFF, 0xFF, 0xFF, 0xF0, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xFF, 0xFE, 0xFF,
  0xFF, 0xF8, 0xFF, 0x80, 0x0F, 0x0E, 0x0E, 0x0E, 0x1E, 0x1E, 0x1C, 0x1C,
  0x1C, 0x3C, 0x3C, 0x3C, 0x38, 0x38, 0x78, 0x78, 0x78, 0x70, 0x70, 0x70,
  0xF0, 0xF0, 0xE0, 0xE0, 0xE0, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F,
  0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xF7,
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70, 0x7F,
  0x7F, 0xFF, 0xFC, 0x7E, 0x38, 0x1C, 0x1E, 0x0E, 0x0F, 0x07, 0x83, 0x83,
  0xC1, 0xC1, 0xE0, 0xE0, 0xF0, 0x78, 0x38, 0x3C, 0x1C, 0x0E, 0x3F, 0x1F,
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0x70, 0x38, 0x1C, 0x0E,
  0x07, 0x03, 0x81, 0xC0, 0xE0, 0x71, 0xF0, 0xF0, 0x7C, 0x07, 0x03, 0x81,
  0xC0, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0x7B, 0x8F, 0x71,
  0xEE, 0x3D, 0xC7, 0xB8, 0xF7, 0x1E, 0xE3, 0xDC, 0x7B, 0x8F, 0x71, 0xEE,
  0x3D, 0xC7, 0xB8, 0xF7, 0x1E, 0xE3, 0xFF, 0xFF, 0xFF, 0xFC, 0x0E, 0x01,
  0xC0, 0x38, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0xFF, 0xFF, 0xFF, 0xFC,
  0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x3F, 0xDF, 0xFF, 0xF8, 0x1C,
  0x0E, 0x07, 0x03, 0x81, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F,
  0x00, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC0, 0xE0, 0x70,
  0x3F, 0xDF, 0xFF, 0xFF, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E,
  0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0E,
  0x0E, 0x0E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x3C,
  0x3C, 0x3C, 0x3C, 0x38, 0x38, 0x38, 0x38, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x77, 0xF1, 0xF1, 0xFD,
  0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00,
  0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8,
  0xFC, 0x7F, 0xFF, 0xFD, 0xFE, 0x07, 0x03, 0x81, 0xC0, 0xFC, 0x7E, 0x3F,
  0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0xFF,
  0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x06, 0x7F, 0xFF, 0xFF, 0x1F, 0xFF,
  0x9F, 0x06, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0xC1, 0xF3,
  0xFF, 0xF1, 0xFF, 0xFF, 0xFC, 0xC0, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F,
  0x1F, 0x8F, 0xC7, 0xE3, 0x81, 0xC0, 0xE3, 0xF1, 0xF8, 0xF8, 0x70, 0x38,
  0x1C, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x38, 0x1C, 0x00, 0x7F,
  0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF9, 0xFC,
  0xFE, 0x7F, 0x03, 0x81, 0xC0, 0xE0, 0x71, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F,
  0xFF, 0xFF, 0x7F, 0x00, 0x1E, 0x07, 0x81, 0xE0, 0xFC, 0x3F, 0x0F, 0xC3,
  0xF0, 0xFC, 0x3F, 0x0F, 0xC3, 0xF0, 0xFC, 0x3F, 0x0F, 0xC7, 0xF9, 0xFE,
  0x7F, 0x9C, 0xE7, 0x39, 0xCE, 0x7F, 0x9F, 0xE7, 0xF9, 0xCE, 0x73, 0x80,
  0xFF, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8,
  0xFC, 0x7F, 0xF7, 0xF3, 0xFD, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F,
  0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x03,
  0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0,
  0x70, 0x38, 0x1C, 0x0E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0x7F,
  0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF,
  0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xFF, 0xFF,
  0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x3F, 0xFF,
  0xFE, 0xFF, 0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xFF, 0xFF, 0xFF, 0x0E,
  0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0x7F,
  0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C,
  0x0E, 0x07, 0x03, 0x9F, 0xCF, 0xE7, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F,
  0xFF, 0xFF, 0x7F, 0x00, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F,
  0xC7, 0xFF, 0xFF, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1,
  0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0x80, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0x8F, 0xC7, 0xE0, 0x70,
  0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E,
  0x07, 0x03, 0x81, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00,
  0xE7, 0xF3, 0xB9, 0xDC, 0xEE, 0xF7, 0x7B, 0xBD, 0xDC, 0xEE, 0x7F, 0x3F,
  0x9F, 0xCF, 0xC7, 0xF3, 0xF9, 0xDC, 0xEE, 0x77, 0x3B, 0xDD, 0xEE, 0xF7,
  0x3B, 0x9D, 0xCE, 0xE7, 0x80, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70,
  0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C,
  0x3F, 0xFF, 0xFE, 0xE0, 0xFE, 0x3F, 0xC7, 0xFD, 0xFF, 0xBF, 0xFF, 0xFF,
  0xFF, 0x77, 0xE4, 0xFC, 0x9F, 0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F,
  0x07, 0xE0, 0xFC, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07,
  0xE0, 0xE0, 0xE3, 0xF9, 0xFE, 0xFF, 0x7F, 0xFF, 0xFF, 0xBF, 0xDF, 0xE7,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC,
  0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0x80, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F,
  0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00,
  0xFF, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8,
  0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0x70, 0x38, 0x1C, 0x0E, 0x07,
  0x03, 0x81, 0xC0, 0xE0, 0x00, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F,
  0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x0F, 0x03, 0xC0,
  0xFF, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8,
  0xFC, 0x7E, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3B, 0x9D, 0xEE, 0xF7,
  0x3B, 0x9D, 0xCF, 0xE3, 0x80, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x03,
  0xC0, 0xE0, 0x78, 0x3C, 0x0E, 0x07, 0x81, 0xC0, 0xF0, 0x38, 0x1E, 0x0F,
  0x03, 0x81, 0xE0, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF,
  0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
  0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC,
  0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F,
  0xFF, 0xFF, 0x7F, 0x00, 0xE7, 0xF3, 0xF9, 0xFC, 0xEE, 0x77, 0x3B, 0x9D,
  0xEE, 0xF7, 0x7B, 0x9D, 0xCE, 0xE7, 0xF3, 0xF9, 0xF8, 0xFC, 0x7E, 0x3F,
  0x1F, 0x8F, 0xC7, 0xE1, 0xF0, 0xF8, 0x7C, 0x3E, 0x00, 0xE0, 0xFC, 0x1F,
  0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xFC, 0x1F, 0x83,
  0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x27, 0xE4, 0xFD, 0xDF, 0xFF, 0xFF,
  0xFF, 0xBF, 0xF7, 0xFC, 0x7F, 0x8F, 0xE0, 0xE0, 0xE7, 0xF3, 0xB9, 0xDE,
  0xEF, 0x73, 0xF9, 0xFC, 0xFC, 0x7E, 0x3F, 0x0F, 0x87, 0xC3, 0xC1, 0xF1,
  0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xCE, 0xEF, 0x77, 0xBB, 0x9D, 0xCE, 0xE7,
  0x80, 0xF7, 0xBB, 0xDD, 0xCE, 0xE7, 0x73, 0xB8, 0xDC, 0x7C, 0x3E, 0x1F,
  0x0F, 0x83, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81,
  0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x7E, 0x38,
  0x1C, 0x1E, 0x0E, 0x0F, 0x07, 0x83, 0x83, 0xC1, 0xC1, 0xE0, 0xE0, 0xF0,
  0x78, 0x38, 0x3C, 0x1C, 0x0E, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0xFF,
  0xFF, 0xF8, 0xE3, 0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3,
  0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0x8F, 0xFF, 0xFC, 0xE0, 0xE0, 0xE0,
  0xF0, 0xF0, 0x70, 0x70, 0x70, 0x78, 0x78, 0x78, 0x38, 0x38, 0x38, 0x3C,
  0x3C, 0x1C, 0x1C, 0x1C, 0x1E, 0x1E, 0x0E, 0x0E, 0x0E, 0x0F, 0xFF, 0xFF,
  0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71,
  0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x7F, 0xFF, 0xFC, 0x3E, 0x3F, 0x1F, 0x8F,
  0xEF, 0xF7, 0xBB, 0x9E, 0xFF, 0xFF, 0xFF, 0xE0, 0xE7, 0x9C, 0x70, 0x1E,
  0x07, 0x81, 0xE0, 0xFC, 0x3F, 0x0F, 0xC3, 0xF0, 0xFC, 0x3F, 0x0F, 0xC3,
  0xF0, 0xFC, 0x3F, 0x0F, 0xC7, 0xF9, 0xFE, 0x7F, 0x9C, 0xE7, 0x39, 0xCE,
  0x7F, 0x9F, 0xE7, 0xF9, 0xCE, 0x73, 0x80, 0xFF, 0x7F, 0xFF, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7F, 0xF7, 0xF3, 0xFD,
  0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0x00,
  0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38,
  0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x3F,
  0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F,
  0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
  0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xFF, 0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x70,
  0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x3F, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0x0E,
  0x1C, 0x38, 0x70, 0xFF, 0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3,
  0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F,
  0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x9F, 0xCF,
  0xE7, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xFF, 0xFF, 0xFF, 0xFC,
  0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F,
  0x8F, 0xC7, 0xE3, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x1F, 0x8F, 0xC7, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03,
  0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xF8, 0xFC,
  0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xE7, 0xF3, 0xB9, 0xDC, 0xEE,
  0xF7, 0x7B, 0xBD, 0xDC, 0xEE, 0x7F, 0x3F, 0x9F, 0xCF, 0xC7, 0xF3, 0xF9,
  0xDC, 0xEE, 0x77, 0x3B, 0xDD, 0xEE, 0xF7, 0x3B, 0x9D, 0xCE, 0xE7, 0x80,
  0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x3F, 0xFF, 0xFE, 0xE0, 0xFE,
  0x3F, 0xC7, 0xFD, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0x77, 0xE4, 0xFC, 0x9F,
  0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xFC, 0x1F, 0x83,
  0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xE0, 0xE3, 0xF9, 0xFE,
  0xFF, 0x7F, 0xFF, 0xFF, 0xBF, 0xDF, 0xE7, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F,
  0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7,
  0xE3, 0x80, 0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3,
  0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC,
  0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0x7F, 0xFF, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF,
  0xFF, 0xFF, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x00,
  0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8,
  0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F,
  0x1F, 0xFF, 0xFF, 0x7F, 0x0F, 0x03, 0xC0, 0xFF, 0x7F, 0xFF, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x7F, 0x3B, 0x9D, 0xEE, 0xF7, 0x3B, 0x9D, 0xCF, 0xE3, 0x80,
  0x7F, 0x7F, 0xFF, 0xFC, 0x7E, 0x3F, 0x03, 0xC0, 0xE0, 0x78, 0x3C, 0x0E,
  0x07, 0x81, 0xC0, 0xF0, 0x38, 0x1E, 0x0F, 0x03, 0x81, 0xE0, 0x7E, 0x3F,
  0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C,
  0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
  0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F,
  0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7,
  0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0xFF, 0xFF, 0x7F, 0x00, 0xE7,
  0xF3, 0xF9, 0xFC, 0xEE, 0x77, 0x3B, 0x9D, 0xEE, 0xF7, 0x7B, 0x9D, 0xCE,
  0xE7, 0xF3, 0xF9, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE1, 0xF0,
  0xF8, 0x7C, 0x3E, 0x00, 0xE0, 0xFC, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC1,
  0xF8, 0x3F, 0x07, 0xE0, 0xFC, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8,
  0x3F, 0x27, 0xE4, 0xFD, 0xDF, 0xFF, 0xFF, 0xFF, 0xBF, 0xF7, 0xFC, 0x7F,
  0x8F, 0xE0, 0xE0, 0xE7, 0xF3, 0xB9, 0xDE, 0xEF, 0x73, 0xF9, 0xFC, 0xFC,
  0x7E, 0x3F, 0x0F, 0x87, 0xC3, 0xC1, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F,
  0xCE, 0xEF, 0x77, 0xBB, 0x9D, 0xCE, 0xE7, 0x80, 0xF7, 0xBB, 0xDD, 0xCE,
  0xE7, 0x73, 0xB8, 0xDC, 0x7C, 0x3E, 0x1F, 0x0F, 0x83, 0x81, 0xC0, 0xE0,
  0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C,
  0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x7E, 0x38, 0x1C, 0x1E, 0x0E, 0x0F, 0x07,
  0x83, 0x83, 0xC1, 0xC1, 0xE0, 0xE0, 0xF0, 0x78, 0x38, 0x3C, 0x1C, 0x0E,
  0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x3E, 0xFD, 0xFB, 0x87, 0x0E, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0x8F, 0x1E, 0x3C, 0x38, 0x70, 0xE1, 0xC3, 0x87,
  0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xFB, 0xF3, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xF9, 0xFB, 0xF0, 0xE1, 0xC3, 0x87,
  0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xE3, 0xC7, 0x8E, 0x1C, 0x38, 0x70, 0xE1,
  0xC3, 0x87, 0x0E, 0x1C, 0x3B, 0xF7, 0xEF, 0x80, 0x61, 0xE7, 0xFC, 0xF0,
  0xC0 };

const GFXglyph Slimlines12pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   6,    0,    0 },   // 0x20 ' '
  {     1,   3,  25,   5,    1,  -18 },   // 0x21 '!'
  {    11,   9,   5,  11,    1,  -18 },   // 0x22 '"'
  {    17,  14,  25,  16,    1,  -18 },   // 0x23 '#'
  {    61,   9,  29,  11,    1,  -20 },   // 0x24 '$'
  {    94,  10,  25,  12,    1,  -18 },   // 0x25 '%'
  {   126,   9,  29,  11,    1,  -21 },   // 0x26 '&'
  {   159,   3,   5,   5,    1,  -18 },   // 0x27 '''
  {   161,   6,  29,   7,    1,  -20 },   // 0x28 '('
  {   183,   6,  29,   7,    0,  -20 },   // 0x29 ')'
  {   205,   8,   7,  10,    1,  -18 },   // 0x2A '*'
  {   212,  10,  10,  12,    1,  -11 },   // 0x2B '+'
  {   225,   3,   5,   5,    1,    4 },   // 0x2C ','
  {   227,   7,   3,   9,    1,   -7 },   // 0x2D '-'
  {   230,   3,   3,   5,    1,    4 },   // 0x2E '.'
  {   232,   8,  25,   9,    1,  -18 },   // 0x2F '/'
  {   257,   9,  25,  11,    1,  -18 },   // 0x30 '0'
  {   286,   4,  25,   6,    1,  -18 },   // 0x31 '1'
  {   299,   9,  25,  11,    1,  -18 },   // 0x32 '2'
  {   328,   9,  25,  11,    1,  -18 },   // 0x33 '3'
  {   357,  11,  25,  11,    0,  -18 },   // 0x34 '4'
  {   392,   9,  25,  11,    1,  -18 },   // 0x35 '5'
  {   421,   9,  25,  11,    1,  -18 },   // 0x36 '6'
  {   450,   8,  25,   9,    1,  -18 },   // 0x37 '7'
  {   475,   9,  25,  11,    1,  -18 },   // 0x38 '8'
  {   504,   9,  25,  11,    1,  -18 },   // 0x39 '9'
  {   533,   3,  15,   5,    1,   -8 },   // 0x3A ':'
  {   539,   3,  17,   5,    1,   -8 },   // 0x3B ';'
  {   546,   7,   9,   9,    1,  -10 },   // 0x3C '<'
  {   554,   7,   9,   9,    1,  -10 },   // 0x3D '='
  {   562,   7,   9,   9,    1,  -10 },   // 0x3E '>'
  {   570,   9,  25,  11,    1,  -18 },   // 0x3F '?'
  {   599,   9,  25,  11,    1,  -18 },   // 0x40 '@'
  {   628,  10,  25,  10,    0,  -18 },   // 0x41 'A'
  {   660,   9,  25,  11,    1,  -18 },   // 0x42 'B'
  {   689,   9,  25,  11,    1,  -18 },   // 0x43 'C'
  {   718,   9,  25,  11,    1,  -18 },   // 0x44 'D'
  {   747,   7,  25,   9,    1,  -18 },   // 0x45 'E'
  {   769,   7,  25,   9,    1,  -18 },   // 0x46 'F'
  {   791,   9,  25,  11,    1,  -18 },   // 0x47 'G'
  {   820,   9,  25,  11,    1,  -18 },   // 0x48 'H'
  {   849,   3,  25,   5,    1,  -18 },   // 0x49 'I'
  {   859,   9,  25,  11,    1,  -18 },   // 0x4A 'J'
  {   888,   9,  25,  10,    1,  -18 },   // 0x4B 'K'
  {   917,   7,  25,   9,    1,  -18 },   // 0x4C 'L'
  {   939,  11,  25,  13,    1,  -18 },   // 0x4D 'M'
  {   974,   9,  25,  11,    1,  -18 },   // 0x4E 'N'
  {  1003,   9,  25,  11,    1,  -18 },   // 0x4F 'O'
  {  1032,   9,  25,  11,    1,  -18 },   // 0x50 'P'
  {  1061,   9,  27,  11,    1,  -18 },   // 0x51 'Q'
  {  1092,   9,  25,  11,    1,  -18 },   // 0x52 'R'
  {  1121,   9,  25,  11,    1,  -18 },   // 0x53 'S'
  {  1150,   8,  25,  10,    1,  -18 },   // 0x54 'T'
  {  1175,   9,  25,  11,    1,  -18 },   // 0x55 'U'
  {  1204,   9,  25,  10,    1,  -18 },   // 0x56 'V'
  {  1233,  11,  25,  13,    1,  -18 },   // 0x57 'W'
  {  1268,   9,  25,  10,    1,  -18 },   // 0x58 'X'
  {  1297,   9,  25,  10,    0,  -18 },   // 0x59 'Y'
  {  1326,   9,  25,  11,    1,  -18 },   // 0x5A 'Z'
  {  1355,   6,  29,   7,    1,  -20 },   // 0x5B '['
  {  1377,   8,  25,   9,    1,  -18 },   // 0x5C '\'
  {  1402,   6,  29,   7,    0,  -20 },   // 0x5D ']'
  {  1424,   9,   7,  10,    1,  -18 },   // 0x5E '^'
  {  1432,   9,   3,  11,    1,    7 },   // 0x5F '_'
  {  1436,   5,   4,   7,    1,  -17 },   // 0x60 '`'
  {  1439,  10,  25,  10,    0,  -18 },   // 0x61 'a'
  {  1471,   9,  25,  11,    1,  -18 },   // 0x62 'b'
  {  1500,   9,  25,  11,    1,  -18 },   // 0x63 'c'
  {  1529,   9,  25,  11,    1,  -18 },   // 0x64 'd'
  {  1558,   7,  25,   9,    1,  -18 },   // 0x65 'e'
  {  1580,   7,  25,   9,    1,  -18 },   // 0x66 'f'
  {  1602,   9,  25,  11,    1,  -18 },   // 0x67 'g'
  {  1631,   9,  25,  11,    1,  -18 },   // 0x68 'h'
  {  1660,   3,  25,   5,    1,  -18 },   // 0x69 'i'
  {  1670,   9,  25,  11,    1,  -18 },   // 0x6A 'j'
  {  1699,   9,  25,  10,    1,  -18 },   // 0x6B 'k'
  {  1728,   7,  25,   9,    1,  -18 },   // 0x6C 'l'
  {  1750,  11,  25,  13,    1,  -18 },   // 0x6D 'm'
  {  1785,   9,  25,  11,    1,  -18 },   // 0x6E 'n'
  {  1814,   9,  25,  11,    1,  -18 },   // 0x6F 'o'
  {  1843,   9,  25,  11,    1,  -18 },   // 0x70 'p'
  {  1872,   9,  27,  11,    1,  -18 },   // 0x71 'q'
  {  1903,   9,  25,  11,    1,  -18 },   // 0x72 'r'
  {  1932,   9,  25,  11,    1,  -18 },   // 0x73 's'
  {  1961,   8,  25,  10,    1,  -18 },   // 0x74 't'
  {  1986,   9,  25,  11,    1,  -18 },   // 0x75 'u'
  {  2015,   9,  25,  10,    1,  -18 },   // 0x76 'v'
  {  2044,  11,  25,  13,    1,  -18 },   // 0x77 'w'
  {  2079,   9,  25,  10,    1,  -18 },   // 0x78 'x'
  {  2108,   9,  25,  10,    0,  -18 },   // 0x79 'y'
  {  2137,   9,  25,  11,    1,  -18 },   // 0x7A 'z'
  {  2166,   7,  29,   8,    1,  -20 },   // 0x7B '{'
  {  2192,   3,  25,   5,    1,  -18 },   // 0x7C '|'
  {  2202,   7,  29,   8,    0,  -20 },   // 0x7D '}'
  {  2228,   7,   5,   9,    1,   -9 } }; // 0x7E '~'

const GFXfont Slimlines12pt7b PROGMEM = {
  (uint8_t  *)Slimlines12pt7bBitmaps,
  (GFXglyph *)Slimlines12pt7bGlyphs,
  0x20, 0x7E, 31 };

// Approx. 2905 bytes