#ifndef ORG_ALLBINARY_INPUT_GYRO_GYROSENSORUPDATEPROCESSOR_H
#define ORG_ALLBINARY_INPUT_GYRO_GYROSENSORUPDATEPROCESSOR_H
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
typedef struct Processor Processor;
#include "org/allbinary/canvas/Processor.h"

typedef struct GyroSensorUpdateProcessor GyroSensorUpdateProcessor;
struct GyroSensorUpdateProcessor {
    Processor base;
};


GyroSensorUpdateProcessor* GyroSensorUpdateProcessor_new(void);
void GyroSensorUpdateProcessor_init(GyroSensorUpdateProcessor* this);

void GyroSensorUpdateProcessor_process(GyroSensorUpdateProcessor* this);
#ifndef GyroSensorUpdateProcessor_getInstance
#define GyroSensorUpdateProcessor_getInstance Processor_getInstance
#endif
#ifndef GyroSensorUpdateProcessor_processt
#define GyroSensorUpdateProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GyroSensorUpdateProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GyroSensorUpdateProcessor_register(void);


#endif // ORG_ALLBINARY_INPUT_GYRO_GYROSENSORUPDATEPROCESSOR_H
