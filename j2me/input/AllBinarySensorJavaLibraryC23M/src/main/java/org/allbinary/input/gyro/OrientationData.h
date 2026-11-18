#ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H
#define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H
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

typedef struct OrientationData OrientationData;
struct OrientationData {
    const char* ORIENTATION_SENSOR_INPUT;
    const char* ORIENTATION_TYPE;
};


OrientationData* OrientationData_new(void);

void OrientationData_init(OrientationData* this);

OrientationData* OrientationData_getInstance(void);
#define OrientationData_new0 OrientationData_new
#define OrientationData_init0 OrientationData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OrientationData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OrientationData_register(void);


#endif // ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H
