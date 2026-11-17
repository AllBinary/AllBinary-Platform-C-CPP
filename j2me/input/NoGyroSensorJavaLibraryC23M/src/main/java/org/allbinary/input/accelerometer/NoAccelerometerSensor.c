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
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/logic/math/Orientation.h"

typedef struct NoAccelerometerSensor NoAccelerometerSensor;
struct NoAccelerometerSensor {
    AllBinaryOrientationSensor base;
};


NoAccelerometerSensor* NoAccelerometerSensor_new(void);

void NoAccelerometerSensor_init(NoAccelerometerSensor* this);
Orientation* NoAccelerometerSensor_getOrientation(NoAccelerometerSensor* this);
void NoAccelerometerSensor_onSensorChange(NoAccelerometerSensor* this);


void NoAccelerometerSensor_init(NoAccelerometerSensor* this) {
    AllBinaryOrientationSensor_init(&this->base);
}

NoAccelerometerSensor* NoAccelerometerSensor_new(void) {
    NoAccelerometerSensor* this = calloc(1, sizeof(NoAccelerometerSensor));
    NoAccelerometerSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoAccelerometerSensor_getOrientation(NoAccelerometerSensor* this) {
        return Orientation_NONE;
}


void NoAccelerometerSensor_onSensorChange(NoAccelerometerSensor* this) {
}

