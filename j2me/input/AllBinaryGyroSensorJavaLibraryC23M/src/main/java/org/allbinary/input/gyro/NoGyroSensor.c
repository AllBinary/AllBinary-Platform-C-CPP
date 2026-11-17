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
#include "org/allbinary/input/AllBinarySensorListener.h"
#include "org/allbinary/logic/math/Orientation.h"
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


void NoGyroSensor_init(NoGyroSensor* this) {
    AllBinaryOrientationSensor_init(&this->base);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
}

NoGyroSensor* NoGyroSensor_new(void) {
    NoGyroSensor* this = calloc(1, sizeof(NoGyroSensor));
    NoGyroSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoGyroSensor_getOrientation(NoGyroSensor* this) {
        return Orientation_NONE;
}


void NoGyroSensor_onSensorChange(NoGyroSensor* this) {
}

