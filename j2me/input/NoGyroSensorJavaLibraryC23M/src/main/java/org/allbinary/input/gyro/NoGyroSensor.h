#ifndef ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H
#define ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H
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
typedef struct AllBinaryOrientationSensor AllBinaryOrientationSensor;
typedef struct AllBinarySensorListener AllBinarySensorListener;
typedef struct Orientation Orientation;
#include "org/allbinary/input/AllBinarySensorListener.h"
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"

typedef struct NoGyroSensor NoGyroSensor;
struct NoGyroSensor {
    AllBinaryOrientationSensor base;
    AllBinarySensorListener AllBinarySensorListener_interface;
};


NoGyroSensor* NoGyroSensor_new(void);

void NoGyroSensor_init(NoGyroSensor* this);

Orientation* NoGyroSensor_getOrientation(NoGyroSensor* this);

void NoGyroSensor_onSensorChange(NoGyroSensor* this);
#define NoGyroSensor_new0 NoGyroSensor_new
#define NoGyroSensor_init0 NoGyroSensor_init
#ifndef NoGyroSensor_setCompleteMotionGestureInputEventListener
#define NoGyroSensor_setCompleteMotionGestureInputEventListener AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener
#endif
#ifndef NoGyroSensor_setListener
#define NoGyroSensor_setListener AllBinaryOrientationSensor_setListener
#endif
#ifndef NoGyroSensor_update
#define NoGyroSensor_update AllBinarySensor_update
#endif
#ifndef NoGyroSensor_setMax
#define NoGyroSensor_setMax AllBinarySensor_setMax
#endif
#ifndef NoGyroSensor_getMax
#define NoGyroSensor_getMax AllBinarySensor_getMax
#endif
#ifndef NoGyroSensor_getId
#define NoGyroSensor_getId AllBinarySensor_getId
#endif
#ifndef NoGyroSensor_shutdown
#define NoGyroSensor_shutdown AllBinarySensor_shutdown
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoGyroSensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoGyroSensor_register(void);

#if __has_include("org/allbinary/logic/math/Orientation.h")
#include "org/allbinary/logic/math/Orientation.h"
#endif

#endif // ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H
