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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/logic/math/Orientation.h"

typedef struct OrientationToGameKeyEvent OrientationToGameKeyEvent;
struct OrientationToGameKeyEvent {
    AllBinaryOrientationSensor* allBinaryGyroSensor;
    int32_t MIN;
};


OrientationToGameKeyEvent* OrientationToGameKeyEvent_new(void);

void OrientationToGameKeyEvent_init(OrientationToGameKeyEvent* this);
void OrientationToGameKeyEvent_setAllBinaryGyroSensor(OrientationToGameKeyEvent* this, AllBinaryOrientationSensor* allBinaryGyroSensor);
AllBinaryOrientationSensor* OrientationToGameKeyEvent_getAllBinaryGyroSensor(OrientationToGameKeyEvent* this);
void OrientationToGameKeyEvent_process(OrientationToGameKeyEvent* this);
static void OrientationToGameKeyEvent_updateGameKeyEvents(OrientationToGameKeyEvent* this, Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll);

static void OrientationToGameKeyEvent_initFields(OrientationToGameKeyEvent* this) {
    this->allBinaryGyroSensor = nullptr;
    this->MIN = 15;
}


void OrientationToGameKeyEvent_init(OrientationToGameKeyEvent* this) {
    OrientationToGameKeyEvent_initFields(this);
        if (Features_isFeature(Features_getInstance(), SensorFeatureFactory_getInstance()->NO_ORIENTATION)) {
            this->allBinaryGyroSensor = NoGyroSensor_new();
        } else {
            java_throw(java_exception_new("Exception", "Not Such Feature"));
        }
}

OrientationToGameKeyEvent* OrientationToGameKeyEvent_new(void) {
    OrientationToGameKeyEvent* this = calloc(1, sizeof(OrientationToGameKeyEvent));
    OrientationToGameKeyEvent_init(this);
    return this;
}


void OrientationToGameKeyEvent_setAllBinaryGyroSensor(OrientationToGameKeyEvent* this, AllBinaryOrientationSensor* allBinaryGyroSensor) {
        this->allBinaryGyroSensor = allBinaryGyroSensor;
}


AllBinaryOrientationSensor* OrientationToGameKeyEvent_getAllBinaryGyroSensor(OrientationToGameKeyEvent* this) {
        return this->allBinaryGyroSensor;
}


// throws Exception
void OrientationToGameKeyEvent_process(OrientationToGameKeyEvent* this) {
}


// throws Exception
static void OrientationToGameKeyEvent_updateGameKeyEvents(OrientationToGameKeyEvent* this, Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll) {
}

