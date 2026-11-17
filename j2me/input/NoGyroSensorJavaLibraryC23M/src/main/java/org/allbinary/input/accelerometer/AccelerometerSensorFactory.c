/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.accelerometer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"

typedef struct AccelerometerSensorFactory AccelerometerSensorFactory;
struct AccelerometerSensorFactory {
    char unused;
};

static AllBinaryOrientationSensor* AccelerometerSensorFactory_allBinaryAccelerometerSensor;

AccelerometerSensorFactory* AccelerometerSensorFactory_new(void);
void AccelerometerSensorFactory_init(void);
AllBinaryOrientationSensor* AccelerometerSensorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AccelerometerSensorFactory_staticInit(void) {
    AccelerometerSensorFactory_allBinaryAccelerometerSensor = AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR;
}

void AccelerometerSensorFactory_init(AccelerometerSensorFactory* this) {
}

AccelerometerSensorFactory* AccelerometerSensorFactory_new(void) {
    AccelerometerSensorFactory* this = calloc(1, sizeof(AccelerometerSensorFactory));
    AccelerometerSensorFactory_init(this);
    return this;
}


// throws Exception
void AccelerometerSensorFactory_init(void) {
        Features* features = Features_getInstance();
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (Features_isFeature(features, sensorFeatureFactory->ORIENTATION_SENSORS)) {
            java_throw(java_exception_new("Exception", "No Orientation Sensors"));
        } else if (Features_isFeature(features, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            java_throw(java_exception_new("Exception", "No Simulation Sensors"));
        } else if (Features_isFeature(features, sensorFeatureFactory->NO_ORIENTATION)) {
            AccelerometerSensorFactory_allBinaryAccelerometerSensor = NoAccelerometerSensor_new();
        } else {
            java_throw(java_exception_new("Exception", "Not Such SensorFeature"));
        }
}


AllBinaryOrientationSensor* AccelerometerSensorFactory_getInstance(void) {
        return AccelerometerSensorFactory_allBinaryAccelerometerSensor;
}

