#include "zeroSixtyScreen.hpp"

// STATE CANVAS
#define zeroSixtyCanvasHeightA 60
#define zeroSixtyCanvasWidthA 100
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
float maxZeroSixtySpeed = 0;
uint32_t zeroSixtyAccelTime = 0;
uint32_t zeroSixtyBrakeTime = 0;

uint32_t zeroSixtyAccelTimes[5] = {0}; 
uint32_t zeroSixtyBrakeTimes[5] = {0}; 


void displayZeroSixtyScreen(void){
    //tft.fillScreen(ST77XX_BLKAMBER);

    zeroSixtySpeed = canSpeed;

    initFonts();
    drawGridlines();
    drawTimeBreaks();

    evaluateState(zeroSixtySpeed, zeroSixtyState);

    // CURRENT ACCEL STATE
    zeroSixtyCanvasA.setCursor(0,40);
    zeroSixtyCanvasA.print(getState(zeroSixtyState));
    tft.drawBitmap(5,0, zeroSixtyCanvasA.getBuffer(), zeroSixtyCanvasWidthA, zeroSixtyCanvasHeightA, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasA.fillScreen(ST77XX_BLACK);
    
    // CURRENT SPEED
    zeroSixtyCanvasC.setCursor(0,40);
    zeroSixtyCanvasC.print(canSpeed,0);
    //zeroSixtyCanvasC.print("120");
    tft.drawBitmap(5,70, zeroSixtyCanvasC.getBuffer(), zeroSixtyCanvasWidthC, zeroSixtyCanvasWidthC, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasC.fillScreen(ST77XX_BLACK);
    
    // TIME BREAKS
    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print((zeroSixtyAccelTime - zeroSixtyAccelTimes[0])/1000); // start - 10
    zeroSixtyCanvasD.print("s");
    tft.drawBitmap(190,0, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print((zeroSixtyAccelTime - zeroSixtyAccelTimes[1])/1000); // start - 30
    zeroSixtyCanvasD.print("s");
    tft.drawBitmap(190,33.75, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print((zeroSixtyBrakeTimes[2] - zeroSixtyBrakeTimes[3])/1000); // 10 mph time - 0
    zeroSixtyCanvasD.print("s");
    tft.drawBitmap(190,67.5, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print((zeroSixtyAccelTime - zeroSixtyAccelTimes[2])/1000); // start - 60
    zeroSixtyCanvasD.print("s");
    tft.drawBitmap(190,101, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);
}


void resetZeroSixtyScreen(void){
    /// ZERO OUT THE VALUES AND SET THE STATE TO IDLE
    zeroSixtyState = 0;
    zeroSixtySpeed = 0;
    maxZeroSixtySpeed = 0;
    zeroSixtyAccelTime = 0;
    zeroSixtyBrakeTime = 0;
    memset(zeroSixtyAccelTimes, 0, sizeof zeroSixtyAccelTimes);
    memset(zeroSixtyBrakeTimes, 0, sizeof zeroSixtyBrakeTimes);
}

void evaluateState(int speed, int state){
    if (speed == 0 && state != 2){ //If not brake state
        zeroSixtyState = 0; //Set state to idle
    }
    if (speed >= 1 && state == 0){ // If moving and state idle
        // Begin timer!
        zeroSixtyAccelTime = millis();
        zeroSixtyState = 1; //Set state to accel
    }
    if (speed >= 1 && state == 1){ // If moving and state accel
        // Begin timer!
        zeroSixtyAccelTimes[0] = millis();
        zeroSixtyState = 1; //Set state to accel
        if (speed > maxZeroSixtySpeed){
            maxZeroSixtySpeed = speed;
        }
        if (speed < maxZeroSixtySpeed){
            zeroSixtyState = 2; // Set state to braking
        }
        checkAccelTimes(speed);
    }
    if (state == 2){
        zeroSixtyBrakeTime = millis();
        checkBrakeTimes(speed);
    }
    if (speed == 0 && state == 2){
        // calculate brake time
        zeroSixtyBrakeTimes[3] = millis();
        zeroSixtyState = 0;
    }
}

void checkAccelTimes(int speed){
    if (speed == 10){ // If 10mph
        zeroSixtyAccelTimes[0] = millis(); // Set 10mph time in time array
    }
    if (speed == 30){ // If 30mph
        zeroSixtyAccelTimes[1] = millis(); // Set 30mph time in time array
    }
    if (speed == 60){ // If 60mph
        zeroSixtyAccelTimes[2] = millis(); // Set 60mph time in time array
    }
    if (speed == 100){ // If 100mph
        zeroSixtyAccelTimes[3] = millis(); // Set 100mph time in time array
    }
    if (speed == 120){ // If 100mph
        zeroSixtyAccelTimes[4] = millis(); // Set 120mph time in time array
    }
}

void checkBrakeTimes(int speed){
    if (speed == 60){ // If 60mph
        zeroSixtyBrakeTimes[0] = millis(); // Set 10mph time in time array
    }
    if (speed == 20){ // If 30mph
        zeroSixtyBrakeTimes[1] = millis(); // Set 30mph time in time array
    }
    if (speed == 10){ // If 10mph
        zeroSixtyBrakeTimes[2] = millis(); // Set 60mph time in time array
    }
    if (speed == 0){ // If 0mph
        zeroSixtyBrakeTimes[3] = millis(); // Set 100mph time in time array
    }
}

void drawGridlines(void){
    //DRAW GRIDLINES
    tft.drawLine(0, 65, 110, 65, ST77XX_AMBER);
    tft.drawLine(110, 0, 110, 135, ST77XX_AMBER);

    tft.drawLine(110, 29, 240, 29, ST77XX_AMBER);
    tft.drawLine(110, 61, 240, 61, ST77XX_AMBER);
    tft.drawLine(110, 95, 240, 95, ST77XX_AMBER);
}

void initFonts(){
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
}

void drawTimeBreaks(){
    // MEASUREMENT LOGO
    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.println("0-10");
    tft.drawBitmap(120,0, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("0-30");
    tft.drawBitmap(120,33.75, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("10-0");
    tft.drawBitmap(120,67.5, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    zeroSixtyCanvasD.setCursor(0,18);
    zeroSixtyCanvasD.print("0-60");
    tft.drawBitmap(120,101, zeroSixtyCanvasD.getBuffer(), zeroSixtyCanvasWidthD, zeroSixtyCanvasHeightD, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasD.fillScreen(ST77XX_BLACK);

    // MPH LOGO
    zeroSixtyCanvasB.setCursor(0,20);
    zeroSixtyCanvasB.println("mph");
    tft.drawBitmap(55,95, zeroSixtyCanvasB.getBuffer(), zeroSixtyCanvasWidthB, zeroSixtyCanvasHeightB, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    zeroSixtyCanvasB.fillScreen(ST77XX_BLACK);
}


const char* getState(int numericState){

    const char *charState[8] = {0}; 

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
