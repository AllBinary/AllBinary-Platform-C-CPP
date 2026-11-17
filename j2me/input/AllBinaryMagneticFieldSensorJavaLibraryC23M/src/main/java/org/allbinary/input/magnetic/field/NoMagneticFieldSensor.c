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
#include "org/allbinary/input/AllBinarySensorListener.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/input/magnetic/field/AllBinaryMagneticFieldSensor.h"

typedef struct NoMagneticFieldSensor NoMagneticFieldSensor;
struct NoMagneticFieldSensor {
    AllBinaryMagneticFieldSensor base;
    AllBinarySensorListener AllBinarySensorListener_interface;
};


NoMagneticFieldSensor* NoMagneticFieldSensor_new(void);
Orientation* NoMagneticFieldSensor_getOrientation(NoMagneticFieldSensor* this);
void NoMagneticFieldSensor_onSensorChange(NoMagneticFieldSensor* this);

void NoMagneticFieldSensor_init(NoMagneticFieldSensor* this) {
    AllBinaryMagneticFieldSensor_init(&this->base);
}

NoMagneticFieldSensor* NoMagneticFieldSensor_new(void) {
    NoMagneticFieldSensor* this = calloc(1, sizeof(NoMagneticFieldSensor));
    NoMagneticFieldSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoMagneticFieldSensor_getOrientation(NoMagneticFieldSensor* this) {
        return Orientation_NONE;
}


void NoMagneticFieldSensor_onSensorChange(NoMagneticFieldSensor* this) {
}

