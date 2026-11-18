#ifndef ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H
#define ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H
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
typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
typedef struct NoCompleteMotionGestureInputEventListener NoCompleteMotionGestureInputEventListener;
typedef struct AllBinarySensor AllBinarySensor;
typedef struct Orientation Orientation;
typedef struct PrimitiveFloatUtil PrimitiveFloatUtil;
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#endif
#include "org/allbinary/input/AllBinarySensor.h"

typedef struct AllBinaryOrientationSensor AllBinaryOrientationSensor;
struct AllBinaryOrientationSensor {
    AllBinarySensor base;
    float* sensorDataFloatArray;
    CompleteMotionGestureInputEventListenerInterface* listener;
};

extern AllBinaryOrientationSensor* AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR;

AllBinaryOrientationSensor* AllBinaryOrientationSensor_new(void);

void AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AllBinaryOrientationSensor* this, CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface);

void AllBinaryOrientationSensor_init(AllBinaryOrientationSensor* this);

Orientation* AllBinaryOrientationSensor_getOrientation(AllBinaryOrientationSensor* this);
#define AllBinaryOrientationSensor_new0 AllBinaryOrientationSensor_new
#define AllBinaryOrientationSensor_init0 AllBinaryOrientationSensor_init
#ifndef AllBinaryOrientationSensor_update
#define AllBinaryOrientationSensor_update AllBinarySensor_update
#endif
#ifndef AllBinaryOrientationSensor_setMax
#define AllBinaryOrientationSensor_setMax AllBinarySensor_setMax
#endif
#ifndef AllBinaryOrientationSensor_getMax
#define AllBinaryOrientationSensor_getMax AllBinarySensor_getMax
#endif
#ifndef AllBinaryOrientationSensor_getId
#define AllBinaryOrientationSensor_getId AllBinarySensor_getId
#endif
#ifndef AllBinaryOrientationSensor_shutdown
#define AllBinaryOrientationSensor_shutdown AllBinarySensor_shutdown
#endif
#ifndef AllBinaryOrientationSensor_onSensorChange
#define AllBinaryOrientationSensor_onSensorChange AllBinarySensor_onSensorChange
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryOrientationSensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryOrientationSensor_register(void);

#if __has_include("org/allbinary/logic/math/Orientation.h")
#include "org/allbinary/logic/math/Orientation.h"
#endif

#endif // ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H
