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

static OrientationData* OrientationData_SINGLETON;

OrientationData* OrientationData_new(void);

void OrientationData_init(OrientationData* this);
OrientationData* OrientationData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OrientationData_staticInit(void) {
    OrientationData_SINGLETON = OrientationData_new();
}

static void OrientationData_initFields(OrientationData* this) {
    this->ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";
    this->ORIENTATION_TYPE = "Orientation Type";
}


void OrientationData_init(OrientationData* this) {
    OrientationData_initFields(this);
}

OrientationData* OrientationData_new(void) {
    OrientationData* this = calloc(1, sizeof(OrientationData));
    OrientationData_init(this);
    return this;
}


OrientationData* OrientationData_getInstance(void) {
        return OrientationData_SINGLETON;
}

