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

typedef struct ShippingMethodsData ShippingMethodsData;
struct ShippingMethodsData {
    char unused;
};

const char* ShippingMethodsData_SHIPPINGMETHODSORDERSUMMARIES = "SHIPPINGMETHODS_ORDERSUMMARIES";
const char* ShippingMethodsData_SHIPPINGMETHODORDERSUMMARY = "SHIPPINGMETHOD_ORDERSUMMARY";
const char* ShippingMethodsData_SHIPPINGMETHODS = "SHIPPINGMETHODS";
const char* ShippingMethodsData_NAME = "SHIPPINGMETHODS_NAME";
const char* ShippingMethodsData_SHIPPINGCOST = "SHIPPINGMETHOD_SHIPPINGCOST";
const char* ShippingMethodsData_TAXRATE = "SHIPPINGMETHOD_TAXRATE";
const char* ShippingMethodsData_SUBTOTAL = "SHIPPINGMETHOD_SUBTOTAL";
const char* ShippingMethodsData_TAX = "SHIPPINGMETHOD_TAX";
const char* ShippingMethodsData_TOTAL = "SHIPPINGMETHOD_TOTAL";

ShippingMethodsData* ShippingMethodsData_new(void);

void ShippingMethodsData_init(ShippingMethodsData* this) {
}

ShippingMethodsData* ShippingMethodsData_new(void) {
    ShippingMethodsData* this = calloc(1, sizeof(ShippingMethodsData));
    ShippingMethodsData_init(this);
    return this;
}

