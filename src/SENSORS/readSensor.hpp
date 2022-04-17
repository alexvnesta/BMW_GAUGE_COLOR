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
    int sensorPin;      // Pin assigned to sensor
    SensorClass(int sensorPin); // Defining the constructor
    void initAnalogSensor(int sensorPin);
    float readAnalogSensor(int sensorPin);
    float getBoostPressValue(int sensorPin = BOOSTPIN);
    float getOilPressValue(int sensorPin = OILPIN);
};

#endif