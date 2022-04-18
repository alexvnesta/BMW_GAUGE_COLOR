#ifndef READSENSOR_HPP
#define READSENSOR_HPP

#include <Arduino.h>

#define BOOSTPIN 20
#define OILPIN 19

class SensorClass {     // making a class that can be used for both of my sensors
  private:
    #define BUFFER 5 // Buffer size (number of readings to use in rolling Mean)
    int data[BUFFER]; // Make an array of appropriate size for Buffer

  public:            
    uint8_t sensorPin;      // Pin assigned to sensor
    SensorClass(uint8_t sensorPin); // Defining the constructor
    void initAnalogSensor(uint8_t sensorPin);
    float readAnalogSensor(uint8_t sensorPin);
    float getBoostPressValue(uint8_t sensorPin = BOOSTPIN);
    float getOilPressValue(uint8_t sensorPin = OILPIN);
};

#endif