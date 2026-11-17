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
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/input/AllBinarySensor.h"
#include "org/allbinary/input/NoAllBinarySensor.h"
#include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"

typedef struct SensorGameUpdateProcessor SensorGameUpdateProcessor;
struct SensorGameUpdateProcessor {
    AllBinarySensor* inputSensor;
};


SensorGameUpdateProcessor* SensorGameUpdateProcessor_new(void);
void SensorGameUpdateProcessor_setInputSensor(SensorGameUpdateProcessor* this, AllBinarySensor* inputSensor);
AllBinarySensor* SensorGameUpdateProcessor_getInputSensor(SensorGameUpdateProcessor* this);
void SensorGameUpdateProcessor_process(SensorGameUpdateProcessor* this, Any* anyType);
void SensorGameUpdateProcessor_sendNotifications(SensorGameUpdateProcessor* this, Any* anyType);
bool SensorGameUpdateProcessor_isAnySensor(SensorGameUpdateProcessor* this);
void SensorGameUpdateProcessor_setNoSensors(SensorGameUpdateProcessor* this);

static void SensorGameUpdateProcessor_initFields(SensorGameUpdateProcessor* this) {
    this->inputSensor = nullptr;
}

void SensorGameUpdateProcessor_init(SensorGameUpdateProcessor* this) {
    SensorGameUpdateProcessor_initFields(this);
}

SensorGameUpdateProcessor* SensorGameUpdateProcessor_new(void) {
    SensorGameUpdateProcessor* this = calloc(1, sizeof(SensorGameUpdateProcessor));
    SensorGameUpdateProcessor_init(this);
    return this;
}


void SensorGameUpdateProcessor_setInputSensor(SensorGameUpdateProcessor* this, AllBinarySensor* inputSensor) {
        this->inputSensor = inputSensor;
}


AllBinarySensor* SensorGameUpdateProcessor_getInputSensor(SensorGameUpdateProcessor* this) {
        return this->inputSensor;
}


// throws Exception
void SensorGameUpdateProcessor_process(SensorGameUpdateProcessor* this, Any* anyType) {
}


// throws Exception
void SensorGameUpdateProcessor_sendNotifications(SensorGameUpdateProcessor* this, Any* anyType) {
}


bool SensorGameUpdateProcessor_isAnySensor(SensorGameUpdateProcessor* this) {
        if (this->inputSensor == NoAllBinarySensor_getInstance()) {
            return false;
        } else {
            return true;
        }
}


void SensorGameUpdateProcessor_setNoSensors(SensorGameUpdateProcessor* this) {
        GyroSensorFactory_setCompleteMotionGestureInputEventListener(GyroSensorFactory_getInstance(), NoCompleteMotionGestureInputEventListener_getInstance());
        AccelerometerSensorFactory_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), NoCompleteMotionGestureInputEventListener_getInstance());
        SensorGameUpdateProcessor_setInputSensor(this, NoAllBinarySensor_getInstance());
}

