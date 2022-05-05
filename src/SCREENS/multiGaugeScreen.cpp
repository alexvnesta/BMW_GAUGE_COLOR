#include "multiGaugeScreen.hpp"


#define multiGaugeCanvasHeight 55
#define multiGaugeCanvasWidth 60
GFXcanvas1 multiGaugeCanvas(multiGaugeCanvasWidth, multiGaugeCanvasHeight);

u_int32_t flashTimer[4] = {millis(),millis(),millis(),millis()};
u_int32_t flashTimerMax[4] = {millis(),millis(),millis(),millis()};

bool flashState[4] = {false,false,false,false};
bool shouldFlash[4] = {false,false,false,false};

///// ARRAY DEFS
// 0 - boost
// 1 - torque
// 2 - oilPress
// 3 - CoolantF

float boostMax = 0;
float torqueMax = 0;


void displayMultiGaugeScreen(void){
    tft.setCursor(0,0);
    tft.drawBitmap(0,0, gauge_logo_bitmap_4, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(120,0, gauge_logo_bitmap_1, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(0,66, gauge_logo_bitmap_2, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    tft.drawBitmap(120,66, gauge_logo_bitmap_3, gauge_logo_bitmap_width, gauge_logo_bitmap_height, ST77XX_AMBER);
    
    multiGaugeCanvas.setTextSize(1);
    multiGaugeCanvas.setFont(&Slimlines_MMKJ20pt7b);
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    boostPressure = boostSensor.getBoostPressValue();
    oilPressure = oilSensor.getOilPressValue();

    // MAX BOOST LOGIC
    if (boostPressure > boostMax){
        boostMax = boostPressure;
    }

    if (torquelbf > torqueMax){
        torqueMax = torquelbf;
    }


    // SHOULD FLASH LOGIC
    if (boostPressure > 12){
        shouldFlash[0] = true;
        flashTimerMax[0] = millis();
    }
    else if (boostPressure <= 12 && (millis() - flashTimerMax[0] > 5000)){
        boostMax = 0;
        shouldFlash[0] = false;
    }

    if (torquelbf > 170){
        shouldFlash[1] = true;
        flashTimerMax[1] = millis();

    }
    else if (torquelbf <= 170 && (millis() - flashTimerMax[1] > 5000)){
        torqueMax = 0;
        shouldFlash[1] = false;
    }

    if (oilPressure < 22){
        // SET OIL TO FLASH
        shouldFlash[2] = true;
    }
    else if (oilPressure >= 22){
        shouldFlash[2] = false;
    }

    if (coolantF > 220){
        // SET COOLANT TO FLASH
        shouldFlash[3] = true;
    }
    else if (coolantF <= 220){
        shouldFlash[3] = false;
    }
    


    // FLASH TIMER LOGIC
    if (millis() - flashTimer[0] > 500){
        flashState[0] = false;
        flashTimer[0] = millis();
    }
    else if (millis() - flashTimer[0] < 500){
        flashState[0] = true;
    }
    if (millis() - flashTimer[1] > 500){
        flashState[1] = false;
        flashTimer[1] = millis();
    }    
    else if (millis() - flashTimer[1] < 500){
        flashState[1] = true;
    }
    if (millis() - flashTimer[2] > 500){
        flashState[2] = false;
        flashTimer[2] = millis();
    }    
    else if (millis() - flashTimer[2] < 500){
        flashState[2] = true;
    }
    if (millis() - flashTimer[3] > 500){
        flashState[3] = false;
        flashTimer[3] = millis();
    }
    else if (millis() - flashTimer[3] < 500){
        flashState[3] = true;
    }



    // BOOST TEXT
    multiGaugeCanvas.setCursor(0,40);
    if (shouldFlash[0] == true){
        if (flashState[0] == true){
            multiGaugeCanvas.print(boostMax,1); // Set decimal precision to 1 to prevent issues
        }
    }
    else if (shouldFlash[0] == false){
        multiGaugeCanvas.print(boostPressure,1); // Set decimal precision to 1 to prevent issues
    }
    tft.drawBitmap(65,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);
    
    // TORQUE TEXT
    multiGaugeCanvas.setCursor(0,40);
    if (shouldFlash[1] == true){
        if (flashState[1] == true){
            multiGaugeCanvas.print(torqueMax);
        }
    }
    else if (shouldFlash[1] == false){
        multiGaugeCanvas.print(torquelbf);
    }
    tft.drawBitmap(180,0, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // OIL PRESS TEXT
    multiGaugeCanvas.setCursor(10,40);
    if (shouldFlash[2] == true){
        if (flashState[2] == true){
        multiGaugeCanvas.print(oilPressure);
        }
    }
    else if (shouldFlash[2] == false){
        multiGaugeCanvas.print(oilPressure);
    }
    tft.drawBitmap(62,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

    // COOLANT TEMP TEXT
    multiGaugeCanvas.setCursor(0,40);
    if (shouldFlash[3] == true){
        if (flashState[3] == true){
        multiGaugeCanvas.print(coolantF);
        }
    }
    else if (shouldFlash[3] == false){
        multiGaugeCanvas.print(coolantF);
    }
    tft.drawBitmap(180,65, multiGaugeCanvas.getBuffer(), multiGaugeCanvasWidth, multiGaugeCanvasHeight, ST77XX_AMBER, ST77XX_BLKAMBER); // Copy to screen
    multiGaugeCanvas.fillScreen(ST77XX_BLACK);

}
