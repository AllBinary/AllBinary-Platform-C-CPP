#ifndef ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H
#define ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H
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
typedef struct NoAccelerometerSensor NoAccelerometerSensor;
typedef struct Features Features;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct AllBinaryOrientationSensor AllBinaryOrientationSensor;
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif

typedef struct AccelerometerSensorFactory AccelerometerSensorFactory;
struct AccelerometerSensorFactory {
    char unused;
};


AccelerometerSensorFactory* AccelerometerSensorFactory_new(void);
void AccelerometerSensorFactory_init(AccelerometerSensorFactory* this);

void AccelerometerSensorFactory_initMethod(void);

AllBinaryOrientationSensor* AccelerometerSensorFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AccelerometerSensorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AccelerometerSensorFactory_register(void);

#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif

#endif // ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H
