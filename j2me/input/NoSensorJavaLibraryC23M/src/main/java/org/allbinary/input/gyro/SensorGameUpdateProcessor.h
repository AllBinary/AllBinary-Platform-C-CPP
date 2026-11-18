#ifndef ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H
#define ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H
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
typedef struct AllBinarySensor AllBinarySensor;
typedef struct NoAllBinarySensor NoAllBinarySensor;
#if __has_include("org/allbinary/input/AllBinarySensor.h")
#include "org/allbinary/input/AllBinarySensor.h"
#endif

typedef struct SensorGameUpdateProcessor SensorGameUpdateProcessor;
struct SensorGameUpdateProcessor {
    AllBinarySensor* inputSensor;
};


SensorGameUpdateProcessor* SensorGameUpdateProcessor_new(void);
void SensorGameUpdateProcessor_init(SensorGameUpdateProcessor* this);

void SensorGameUpdateProcessor_setInputSensor(SensorGameUpdateProcessor* this, AllBinarySensor* inputSensor);

AllBinarySensor* SensorGameUpdateProcessor_getInputSensor(SensorGameUpdateProcessor* this);

void SensorGameUpdateProcessor_process(SensorGameUpdateProcessor* this, void* anyType);

void SensorGameUpdateProcessor_sendNotifications(SensorGameUpdateProcessor* this, void* anyType);

bool SensorGameUpdateProcessor_isAnySensor(SensorGameUpdateProcessor* this);

void SensorGameUpdateProcessor_setNoSensors(SensorGameUpdateProcessor* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SensorGameUpdateProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SensorGameUpdateProcessor_register(void);

#if __has_include("org/allbinary/input/AllBinarySensor.h")
#include "org/allbinary/input/AllBinarySensor.h"
#endif

#endif // ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H
