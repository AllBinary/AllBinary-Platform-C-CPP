#ifndef ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
#define ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
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
typedef struct SensorGameUpdateProcessor SensorGameUpdateProcessor;
typedef struct AccelerometerSensorUpdateProcessor AccelerometerSensorUpdateProcessor;
typedef struct GyroSensorUpdateProcessor GyroSensorUpdateProcessor;
typedef struct Processor Processor;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"

typedef struct SingleSensorGameUpdateProcessor SingleSensorGameUpdateProcessor;
struct SingleSensorGameUpdateProcessor {
    SensorGameUpdateProcessor base;
    Processor* accelerometerSensorUpdateProcessor;
    Processor* gyroSensorUpdateProcessor;
};


SingleSensorGameUpdateProcessor* SingleSensorGameUpdateProcessor_new(void);
void SingleSensorGameUpdateProcessor_init(SingleSensorGameUpdateProcessor* this);

void SingleSensorGameUpdateProcessor_process(SingleSensorGameUpdateProcessor* this, void* anyType);

void SingleSensorGameUpdateProcessor_sendNotifications(SingleSensorGameUpdateProcessor* this, void* anyType);
#ifndef SingleSensorGameUpdateProcessor_setInputSensor
#define SingleSensorGameUpdateProcessor_setInputSensor SensorGameUpdateProcessor_setInputSensor
#endif
#ifndef SingleSensorGameUpdateProcessor_getInputSensor
#define SingleSensorGameUpdateProcessor_getInputSensor SensorGameUpdateProcessor_getInputSensor
#endif
#ifndef SingleSensorGameUpdateProcessor_isAnySensor
#define SingleSensorGameUpdateProcessor_isAnySensor SensorGameUpdateProcessor_isAnySensor
#endif
#ifndef SingleSensorGameUpdateProcessor_setNoSensors
#define SingleSensorGameUpdateProcessor_setNoSensors SensorGameUpdateProcessor_setNoSensors
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingleSensorGameUpdateProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingleSensorGameUpdateProcessor_register(void);


#endif // ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
