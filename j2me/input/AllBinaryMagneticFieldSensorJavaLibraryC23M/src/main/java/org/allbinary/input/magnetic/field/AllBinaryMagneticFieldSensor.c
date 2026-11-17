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
// package org.allbinary.input.magnetic.field

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/AllBinarySensor.h"

typedef struct AllBinaryMagneticFieldSensor AllBinaryMagneticFieldSensor;
struct AllBinaryMagneticFieldSensor {
    AllBinarySensor base;
};


AllBinaryMagneticFieldSensor* AllBinaryMagneticFieldSensor_new(void);

void AllBinaryMagneticFieldSensor_init(AllBinaryMagneticFieldSensor* this);


void AllBinaryMagneticFieldSensor_init(AllBinaryMagneticFieldSensor* this) {
    AllBinarySensor_init(&this->base);
}

AllBinaryMagneticFieldSensor* AllBinaryMagneticFieldSensor_new(void) {
    AllBinaryMagneticFieldSensor* this = calloc(1, sizeof(AllBinaryMagneticFieldSensor));
    AllBinaryMagneticFieldSensor_init(this);
    return this;
}

