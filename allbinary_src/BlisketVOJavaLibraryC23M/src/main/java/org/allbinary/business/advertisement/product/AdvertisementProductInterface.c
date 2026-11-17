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
// package org.allbinary.business.advertisement.product

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"

typedef struct AdvertisementProductInterface AdvertisementProductInterface;
struct AdvertisementProductInterface {
    const char* (*getType)(void* this);
    const char* (*getLink)(void* this);
    int32_t (*getNumber)(void* this);
    TwoDimensionalConstraintInterface* (*getTwoDimensionalConstraint)(void* this);
};


