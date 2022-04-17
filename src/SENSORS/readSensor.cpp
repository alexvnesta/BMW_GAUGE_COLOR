#include "readSensor.hpp"

SensorClass::SensorClass(int sensorPin) {     // making a class that can be used for both of my sensors
      Serial.println("Initializing sensor...");
      initAnalogSensor(sensorPin);
      Serial.println("Init Done.");
}

//    float getBoostPressValue(int sensorPin = BOOSTPIN);
//    float getOilPressValue(int sensorPin = OILPIN);

void SensorClass::initAnalogSensor(int sensorPin){
    pinMode(sensorPin, INPUT);
    // Fill buffer with initial data
    int n = 0;
    while (n < BUFFER) {
        data[n] = analogRead(sensorPin);
        n++;
    }
}

float SensorClass::readAnalogSensor(int sensorPin) {
    // Read new sensor reading, append to buffer and delete oldest reading
    for (int n = (BUFFER - 1); n > 0; n--) {
        data[n] = data[n - 1];    
    }
    data[0] = analogRead(sensorPin);

    // Calculate Raw Mean & SD
    float datasum = 0;
    float diffsum = 0;
    for (int n = 0; n < BUFFER; n++) {
        datasum += data[n];
    }
    float mean = float(datasum / BUFFER);
    for (int n = 0; n < BUFFER; n++) {
        diffsum += ((data[n] - mean) * (data[n] - mean));
    }
    float sd = sqrt(diffsum / (BUFFER - 1));

    // Recalculate Corrected Mean only using data within range +/- 1SD of Raw Mean
    if (sd != 0) {      // Avoid divide by zero error if sd = 0
        float newSum = 0; // Sum of readings within acceptable range
        float newLen = 0; // Number of readings within acceptable range
        int n = 0;

        while (n < BUFFER) { //While the current element is in the buffer
            if ((data[n] < (mean + sd)) and (data[n] > (mean - sd))) { // if the current element is within the standard deviation
                newSum += data[n]; // add the data to the new sum
                newLen ++; // repeat for the next element
            }
        n++; // repeat for the next element
        }
    mean = newSum / newLen; // Corrected Mean
    }

    return mean;
}


float SensorClass::getOilPressValue(int sensorPin) {
    float meanSensorValue = readAnalogSensor(sensorPin);
/*
    Scale the sensor reading into range
    m = measurement to be scaled
    rmin = minimum of the range of the measurement
    rmax = maximum of the range of the measurement
    tmin = minimum of the range of the desired target scaling
    tmax = maximum of the range of the desired target scaling
    normalisedValue = ((m − rmin) / (rmax − rmin)) * (tmax − tmin) + tmin
    https://stats.stackexchange.com/a/281164
*/

/*
    Sensor voltage ranges from 0.5v to 4.5v, converted to analogRead values (0 min, 1023 max) that's 102 to 921
    rmin = 102
    rmax = 921
    Sensor reads from 0 to 140psi
    tmin = 0
    tmax = 14000
    normalisedValue = ((m − 102) / (921 − 102)) * (14000 − 0) + 0
    normalisedValue = ((m − 102) / 819) * 14000
    normalisedValue = (m − 102) / 0.0585
*/

//m - 160 / 921-160 * 14000

    Serial.print ("Oil RAW:");
    Serial.println (meanSensorValue);

    //return ((mOil - 102) / 0.0819);
    //return ((mOil - 150) / ((1500 - 150) / (10000)));
    return ((meanSensorValue - 191) / .131);
}

float SensorClass::getBoostPressValue(int sensorPin) {
    float meanSensorValue = readAnalogSensor(sensorPin);

    /*
        Scale the sensor reading into range
        m = measurement to be scaled
        rmin = minimum of the range of the measurement
        rmax = maximum of the range of the measurement
        tmin = minimum of the range of the desired target scaling
        tmax = maximum of the range of the desired target scaling
        normalisedValue = ((m − rmin) / (rmax − rmin)) * (tmax − tmin) + tmin
        https://stats.stackexchange.com/a/281164
    */

    /*
        Sensor voltage ranges from 0.5v to 4.5v, converted to analogRead values (0 min, 1023 max) that's 102 to 921
        rmin = 102
        rmax = 921
        Sensor reads from 0 to 50psi
        tmin = 0
        tmax = 3000
        
        normalisedValue = ((m − 102) / (921 − 102)) * (3000 − 0) + 0
        normalisedValue = ((m − 102) / 819) * 3000
        normalisedValue = (m − 102) / 0.273
    */

    Serial.print("Boost RAW: ");
    Serial.println(meanSensorValue);

    //return ((boostnumberraw - 102) / 0.1356);
    //return ((boostnumberraw - 150) / ((1600 - 150) / (6000)));
    return ((meanSensorValue - 160) / .241);
}