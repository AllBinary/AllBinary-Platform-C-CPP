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
// package org.allbinary.input.gyro

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"

typedef struct AccelerometerSensorUpdateProcessor AccelerometerSensorUpdateProcessor;
struct AccelerometerSensorUpdateProcessor {
    Processor base;
};


AccelerometerSensorUpdateProcessor* AccelerometerSensorUpdateProcessor_new(void);
void AccelerometerSensorUpdateProcessor_process(AccelerometerSensorUpdateProcessor* this);

void AccelerometerSensorUpdateProcessor_init(AccelerometerSensorUpdateProcessor* this) {
    Processor_init(&this->base);
}

AccelerometerSensorUpdateProcessor* AccelerometerSensorUpdateProcessor_new(void) {
    AccelerometerSensorUpdateProcessor* this = calloc(1, sizeof(AccelerometerSensorUpdateProcessor));
    AccelerometerSensorUpdateProcessor_init(this);
    return this;
}


// throws Exception
void AccelerometerSensorUpdateProcessor_process(AccelerometerSensorUpdateProcessor* this) {
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->ORIENTATION_SENSORS)) {
            AccelerometerSensorFactory_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), SingleKeyPressGameKeyFromMotionGestureEventListener_new());
        } else if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            AccelerometerSensorFactory_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), SingleKeyPressGameKeyFromMotionGestureEventListener_new());
        } else if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->NO_ORIENTATION)) {
            AccelerometerSensorFactory_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), NoCompleteMotionGestureInputEventListener_getInstance());
        } else {
            java_throw(java_exception_new("Exception", "Sensor Feature Not Set"));
        }
}

