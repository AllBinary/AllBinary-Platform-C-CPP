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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/AllBinarySensor.h"

typedef struct NoAllBinarySensor NoAllBinarySensor;
struct NoAllBinarySensor {
    AllBinarySensor base;
};

static NoAllBinarySensor* NoAllBinarySensor_instance;

NoAllBinarySensor* NoAllBinarySensor_new(void);
NoAllBinarySensor* NoAllBinarySensor_getInstance(void);

void NoAllBinarySensor_init(NoAllBinarySensor* this);

// Static fields with runtime initializers: call this once at startup
void NoAllBinarySensor_staticInit(void) {
    NoAllBinarySensor_instance = NoAllBinarySensor_new();
}


NoAllBinarySensor* NoAllBinarySensor_getInstance(void) {
        return NoAllBinarySensor_instance;
}


void NoAllBinarySensor_init(NoAllBinarySensor* this) {
    AllBinarySensor_init(&this->base);
}

NoAllBinarySensor* NoAllBinarySensor_new(void) {
    NoAllBinarySensor* this = calloc(1, sizeof(NoAllBinarySensor));
    NoAllBinarySensor_init(this);
    return this;
}

