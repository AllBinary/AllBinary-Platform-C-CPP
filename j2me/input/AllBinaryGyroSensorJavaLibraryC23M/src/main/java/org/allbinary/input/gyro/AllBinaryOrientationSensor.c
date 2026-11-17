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
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/input/AllBinarySensor.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/logic/math/PrimitiveFloatUtil.h"

typedef struct AllBinaryOrientationSensor AllBinaryOrientationSensor;
struct AllBinaryOrientationSensor {
    AllBinarySensor base;
    float* sensorDataFloatArray;
    CompleteMotionGestureInputEventListenerInterface* listener;
};

AllBinaryOrientationSensor* AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR;

AllBinaryOrientationSensor* AllBinaryOrientationSensor_new(void);
void AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AllBinaryOrientationSensor* this, CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface);

void AllBinaryOrientationSensor_init(AllBinaryOrientationSensor* this);
Orientation* AllBinaryOrientationSensor_getOrientation(AllBinaryOrientationSensor* this);

// Static fields with runtime initializers: call this once at startup
void AllBinaryOrientationSensor_staticInit(void) {
    AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR = AllBinaryOrientationSensor_new();
}

static void AllBinaryOrientationSensor_initFields(AllBinaryOrientationSensor* this) {
    this->sensorDataFloatArray = PrimitiveFloatUtil_getArrayInstance();
    this->listener = NoCompleteMotionGestureInputEventListener_getInstance();
}


void AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AllBinaryOrientationSensor* this, CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface) {
        this->listener = completeMotionGestureInputEventListenerInterface;
}


void AllBinaryOrientationSensor_init(AllBinaryOrientationSensor* this) {
    AllBinarySensor_init(&this->base);
    AllBinaryOrientationSensor_initFields(this);
}

AllBinaryOrientationSensor* AllBinaryOrientationSensor_new(void) {
    AllBinaryOrientationSensor* this = calloc(1, sizeof(AllBinaryOrientationSensor));
    AllBinaryOrientationSensor_init(this);
    return this;
}


// throws Exception
Orientation* AllBinaryOrientationSensor_getOrientation(AllBinaryOrientationSensor* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}

