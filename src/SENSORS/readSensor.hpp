#ifndef READSENSOR_HPP
#define READSENSOR_HPP

#include <Arduino.h>

#define BOOSTPIN 20
#define OILPIN 19

class SensorClass {     // making a class that can be used for both of my sensors
  public:            
    int sensorPin;      // Pin assigned to sensor
    int myNum;          // Attribute (int variable)
    SensorClass() {}
    float getBoostPressValue(int sensorPin = BOOSTPIN);
    float getOilPressValue(int sensorPin = OILPIN);
  private:
    #define BUFFER 5 // Buffer size (number of readings to use in rolling Mean)
    int data[BUFFER]; // Make an array of appropriate size for Buffer

    void initAnalogSensor(int sensorPin){ }

    float readAnalogSensor(int sensorPin) {}
 
};
#endif