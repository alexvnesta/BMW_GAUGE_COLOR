#include "canParse.hpp"
#include "canInit.hpp"

// base10 values for device IDs
static uint32_t BATTERY_ID = 948; //3B4 HEX
static uint32_t SPEED_ID = 436; //1B4 HEX
static uint32_t TORQUE_ID = 168; //0A8
static uint32_t RPM_ID = 170; //0AA
static uint32_t COOLANT_ID = 464; //1D0
static uint32_t DASHLIGHT_ID = 514; //202
static uint32_t IGNITION_ID = 304; //130

// Initialize variables as volatile
double voltage = 0;
float canSpeed = 0;
float torquenm = 0;
float torquelbf = 0;
float rpm = 0; 
float coolantC = 0;
float coolantF = 0;
int dimmer = 254; 
int ignition_status = 0;

void parseCanMessage(uint32_t id, const uint8_t message[], uint8_t messageLength){
  if (id == BATTERY_ID){
    
    voltage = (((((float)message[1] - 240)*256) + (float)message[0])/68); // BECAUSE THE VALUE IS UINT 8 T, ANY MATH AUTOMATICALLY DROPS THE DECIMAL. WTF.

    //Serial.print("Voltage:***************************");
    //Serial.print(message[0]);
    //Serial.print("****");
    //Serial.print(message[1]);
    //Serial.print("****");
    Serial.println(voltage,2);
  }
  else if (id == SPEED_ID){
    canSpeed = (((message[1]-208)*256)+message[0])/16;
    Serial.print("Speed: ");
    Serial.println(canSpeed);
  }
  else if (id == TORQUE_ID){
    torquenm = (((float)message[2]*256)+(float)message[1]) / 32;
    torquelbf = (torquenm*0.73756214728);
    if (torquelbf > 800) torquelbf = 0;
    Serial.print("Torque: ");
    Serial.println(torquenm);
  }
  else if (id == RPM_ID){
    rpm = ((message[5] * 256) + message[4] ) / 4;
    Serial.print("RPM: ");
    Serial.println(rpm);
  }
  else if (id == COOLANT_ID){
    coolantC = message[0] - 48;
    coolantF = (coolantC*1.8)+32;
    Serial.print("Coolant C: ");
    Serial.println(coolantC);
  }
  else if (id == IGNITION_ID){
    ignition_status = message[0];
    Serial.print("Engine Status: ");
    Serial.println(ignition_status);
  }
  else if (id == DASHLIGHT_ID){
    /*
    Dimmer value = 0, Byte 0 = 0
    Dimmer value = 1, Byte 0 = 28
    Dimmer value = 2, Byte 0 = 56
    Dimmer value = 3, Byte 0 = 84
    Dimmer value = 4, Byte 0 = 112
    Dimmer value = 5, Byte 0 = 141
    Dimmer value = 6, Byte 0 = 169
    Dimmer value = 7, Byte 0 = 197
    Dimmer value = 8, Byte 0 = 225
    Dimmer value = 9, Byte 0 = 253
    When the lights are off, Byte 0 = 254
    */

    int dimmermsg = message[0];
    /*
    if (dimmermsg == 0) dimmer = 0;
    else if (dimmermsg == 28) dimmer = 1;
    else if (dimmermsg == 56) dimmer = 2;
    else if (dimmermsg == 84) dimmer = 3;
    else if (dimmermsg == 112) dimmer = 4;
    else if (dimmermsg == 141) dimmer = 5;
    else if (dimmermsg == 169) dimmer = 6;
    else if (dimmermsg == 197) dimmer = 7;
    else if (dimmermsg == 225) dimmer = 8;
    else if (dimmermsg == 253) dimmer = 9;
    else if (dimmermsg == 254) dimmer = 10;
    */

    //dimmer = (254 - dimmermsg);
    dimmer = dimmermsg;
    Serial.print("Dimmer: ");
    Serial.println(dimmer);
  }
}