#ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H
#define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H
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
typedef struct NoGyroSensor NoGyroSensor;
typedef struct Features Features;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct Orientation Orientation;
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif

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

#define OrientationToGameKeyEvent_new0 OrientationToGameKeyEvent_new
#define OrientationToGameKeyEvent_init0 OrientationToGameKeyEvent_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OrientationToGameKeyEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OrientationToGameKeyEvent_register(void);


#endif // ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H
