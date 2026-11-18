#ifndef ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_H
#define ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_H
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
typedef struct AllBinaryOrientationSensor AllBinaryOrientationSensor;
typedef struct Orientation Orientation;
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"

typedef struct NoAccelerometerSensor NoAccelerometerSensor;
struct NoAccelerometerSensor {
    AllBinaryOrientationSensor base;
};


NoAccelerometerSensor* NoAccelerometerSensor_new(void);

void NoAccelerometerSensor_init(NoAccelerometerSensor* this);

Orientation* NoAccelerometerSensor_getOrientation(NoAccelerometerSensor* this);

void NoAccelerometerSensor_onSensorChange(NoAccelerometerSensor* this);
#define NoAccelerometerSensor_new0 NoAccelerometerSensor_new
#define NoAccelerometerSensor_init0 NoAccelerometerSensor_init
#ifndef NoAccelerometerSensor_setCompleteMotionGestureInputEventListener
#define NoAccelerometerSensor_setCompleteMotionGestureInputEventListener AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener
#endif
#ifndef NoAccelerometerSensor_setListener
#define NoAccelerometerSensor_setListener AllBinaryOrientationSensor_setListener
#endif
#ifndef NoAccelerometerSensor_update
#define NoAccelerometerSensor_update AllBinarySensor_update
#endif
#ifndef NoAccelerometerSensor_setMax
#define NoAccelerometerSensor_setMax AllBinarySensor_setMax
#endif
#ifndef NoAccelerometerSensor_getMax
#define NoAccelerometerSensor_getMax AllBinarySensor_getMax
#endif
#ifndef NoAccelerometerSensor_getId
#define NoAccelerometerSensor_getId AllBinarySensor_getId
#endif
#ifndef NoAccelerometerSensor_shutdown
#define NoAccelerometerSensor_shutdown AllBinarySensor_shutdown
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoAccelerometerSensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoAccelerometerSensor_register(void);

#if __has_include("org/allbinary/logic/math/Orientation.h")
#include "org/allbinary/logic/math/Orientation.h"
#endif

#endif // ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_H
