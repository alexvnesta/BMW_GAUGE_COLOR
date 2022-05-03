#include "speedRpmScreen.hpp"

// STATE CANVAS
#define zeroSixtyCanvasHeightA 60
#define zeroSixtyCanvasWidthA 80
GFXcanvas1 zeroSixtyCanvasA(zeroSixtyCanvasWidthA, zeroSixtyCanvasHeightA);

// MPH LOGO CANVAS
#define zeroSixtyCanvasHeightB 25
#define zeroSixtyCanvasWidthB 40
GFXcanvas1 zeroSixtyCanvasB(zeroSixtyCanvasWidthB, zeroSixtyCanvasHeightB);

// SPEED CANVAS
#define zeroSixtyCanvasHeightC 65
#define zeroSixtyCanvasWidthC 50
GFXcanvas1 zeroSixtyCanvasC(zeroSixtyCanvasWidthC, zeroSixtyCanvasHeightC);

// MEASURES CANVAS
#define zeroSixtyCanvasHeightD 25
#define zeroSixtyCanvasWidthD 45
GFXcanvas1 zeroSixtyCanvasD(zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD);



int zeroSixtyState = 0;
/// STORE ACCEL STATE
// 0 = IDLE;
// 1 = ACCEL;
// 2 = BRAKING;

float zeroSixtySpeed = 0;
uint32_t zeroSixtyTime = 0;

const char* getState(int numericState){

    const char *charState[6] = {}; 

    switch (numericState){
        case 0:
        *charState = "IDLE";
        break;
        case 1:
        *charState = "ACCEL";
        break;
        case 2:
        *charState = "BRAKE";
        break;
    }
    return(*charState);
}



/// LINEAR G FORCE.

/// MAX SPEED

/// TIMES
// TWENTY
// SIXTY
// ONE HUNDRED
/// SIXTY to ZERO
// QUARTER MILE MILE TIME


// BRAKE DISTANCE CALCULATED
// BRAKE TIME




//// MAIN SCREEN

/// DRAW CURRENT STATE IN TOP LEFT
/// DRAW CURRENT SPEED ON BOTTOM LEFT
/// DRAW TIMINGS ON RIGHT - 0-15, 0-60, 15-0, 1/4 mi TIME

/// MAIN LOGIC
// IF MPH == 0 AND STAT != BRAKING, STATE = IDLE
// IF MPH > 0 AND STATE == IDLE

//  CHANGE STATE TO ACCEL
//  ACCELBEGINTIME == millis()
//  ACCEL BEGIN DISTANCE?
//  MAX SPEED == CURRENT SPEED
//  IF MPH > 15
//      SAVE 15 MPH TIME
//  IF MPH > 60
//      SAVE 60 MPH TIME
//  IF CURRENTSPEED < MAX SPEED
//      BRAKEBEGINTIME = millis()
//      CHANGE STATE TO BRAKING
//      IN BRAKING STATE
//          IF SPEED == 0
//          BRAKE TIME TOZERO DISPLAY
//          




void displayZeroSixtyScreen(void){
    //tft.fillScreen(ST77XX_BLKAMBER);

    // INIT STATE CANVAS
    zeroSixtyCanvasA.setTextSize(1);
    zeroSixtyCanvasA.setFont(&Slimlines_MMKJ20pt7b);

    // INIT MPH LOGO CANVAS
    zeroSixtyCanvasB.setTextSize(1);
    zeroSixtyCanvasB.setFont(&Slimlines12pt7b);

    // INIT CURRENT SPEED CANVAS
    zeroSixtyCanvasC.setTextSize(1);
    zeroSixtyCanvasC.setFont(&Slimlines_MMKJ20pt7b);

    // INIT MEASURES CANVAS
    zeroSixtyCanvasD.setTextSize(1);
    zeroSixtyCanvasD.setFont(&Slimlines12pt7b);


    //DRAW GRIDLINES
    tft.drawLine(0, 65, 110, 65, ST77XX_AMBER);
    tft.drawLine(110, 0, 110, 135, ST77XX_AMBER);

    tft.drawLine(110, 30, 240, 30, ST77XX_AMBER);
    tft.drawLine(110, 60, 240, 60, ST77XX_AMBER);
    tft.drawLine(110, 95, 240, 95, ST77XX_AMBER);


    // CURRENT ACCEL STATE

    zeroSixtyCanvasA.setCursor(0,40);
    //zeroSixtyCanvasA.print(getState(zeroSixtyState));
    zeroSixtyCanvasA.print(getState(1));
    tft.drawBitmap(5,0, zeroSixtyCanvasA.getBuffer(), zeroSixtyCanvasWidthA, zeroSixtyCanvasHeightA, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasA.fillScreen(ST77XX_BLACK);
   
    // MPH LOGO
    
    zeroSixtyCanvasB.setCursor(0,20);
    zeroSixtyCanvasB.println("mph");
    tft.drawBitmap(55,95, zeroSixtyCanvasB.getBuffer(), zeroSixtyCanvasWidthB, zeroSixtyCanvasHeightB, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasB.fillScreen(ST77XX_BLACK);
    

    // CURRENT SPEED
    
    zeroSixtyCanvasC.setCursor(0,40);
    //zeroSixtyCanvas.print(canSpeed,0);
    zeroSixtyCanvasC.print("120");
    tft.drawBitmap(5,70, zeroSixtyCanvasC.getBuffer(), zeroSixtyCanvasWidthC, zeroSixtyCanvasWidthC, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasC.fillScreen(ST77XX_BLACK);
    

    // MEASUREMENT LOGO
    zeroSixtyCanvasD.setCursor(0,20);
    zeroSixtyCanvasD.println("0-20");
    tft.drawBitmap(120,0, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);


    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("0-60");
    tft.drawBitmap(120,33.75, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("20-0");
    tft.drawBitmap(120,67.5, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("1/4mi");
    tft.drawBitmap(120,101, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    // TIME BREAKS
    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("2.4s");
    tft.drawBitmap(190,0, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("5.5s");
    tft.drawBitmap(190,33.75, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("1.3s");
    tft.drawBitmap(190,67.5, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("14.3s");
    tft.drawBitmap(190,101, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);
}