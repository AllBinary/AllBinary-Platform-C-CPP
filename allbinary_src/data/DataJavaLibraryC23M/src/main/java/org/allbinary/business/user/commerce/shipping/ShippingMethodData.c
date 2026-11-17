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
// package org.allbinary.business.user.commerce.shipping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ShippingMethodData ShippingMethodData;
struct ShippingMethodData {
    char unused;
};

const char* ShippingMethodData_DESCRIPTION = "SHIPPINGMETHOD_DESCRIPTION";
const char* ShippingMethodData_DEFAULT = "SHIPPINGMETHOD_DEFAULT";
const char* ShippingMethodData_NAME = "SHIPPINGMETHOD_NAME";
const char* ShippingMethodData_GROUP = "SHIPPINGMETHOD_GROUP";
const char* ShippingMethodData_COST = "SHIPPINGMETHOD_COST";

ShippingMethodData* ShippingMethodData_new(void);

void ShippingMethodData_init(ShippingMethodData* this);


void ShippingMethodData_init(ShippingMethodData* this) {
}

ShippingMethodData* ShippingMethodData_new(void) {
    ShippingMethodData* this = calloc(1, sizeof(ShippingMethodData));
    ShippingMethodData_init(this);
    return this;
}

