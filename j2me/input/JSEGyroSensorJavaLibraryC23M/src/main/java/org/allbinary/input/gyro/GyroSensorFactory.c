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

typedef struct GyroSensorFactory GyroSensorFactory;
struct GyroSensorFactory {
    char unused;
};

static AllBinaryOrientationSensor* GyroSensorFactory_allBinaryGyroSensor = nullptr;

GyroSensorFactory* GyroSensorFactory_new(void);
void GyroSensorFactory_init(void);
AllBinaryOrientationSensor* GyroSensorFactory_getInstance(void);

void GyroSensorFactory_init(GyroSensorFactory* this) {
}

GyroSensorFactory* GyroSensorFactory_new(void) {
    GyroSensorFactory* this = calloc(1, sizeof(GyroSensorFactory));
    GyroSensorFactory_init(this);
    return this;
}


// throws Exception
void GyroSensorFactory_init(void) {
        GyroSensorFactory_allBinaryGyroSensor = NoGyroSensor_new();
}


AllBinaryOrientationSensor* GyroSensorFactory_getInstance(void) {
        return GyroSensorFactory_allBinaryGyroSensor;
}

