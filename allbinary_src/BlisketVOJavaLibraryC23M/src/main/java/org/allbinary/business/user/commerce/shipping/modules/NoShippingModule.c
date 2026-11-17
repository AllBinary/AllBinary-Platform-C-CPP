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
// package org.allbinary.business.user.commerce.shipping.modules

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"

typedef struct NoShippingModule NoShippingModule;
struct NoShippingModule {
    ShippingInterface ShippingInterface_interface;
    CommonStrings* commonStrings;
    const char* name;
    const char* description;
};


NoShippingModule* NoShippingModule_new(void);

void NoShippingModule_init(NoShippingModule* this);
Money* NoShippingModule_getCost(NoShippingModule* this, OrderInterface* order);
const char* NoShippingModule_getDescription(NoShippingModule* this);
const char* NoShippingModule_getName(NoShippingModule* this);

static void NoShippingModule_initFields(NoShippingModule* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->name = "No Shipping";
    this->description = "This shipping method is for items that are not shipped.";
}


void NoShippingModule_init(NoShippingModule* this) {
    NoShippingModule_initFields(this);
}

NoShippingModule* NoShippingModule_new(void) {
    NoShippingModule* this = calloc(1, sizeof(NoShippingModule));
    NoShippingModule_init(this);
    return this;
}


Money* NoShippingModule_getCost(NoShippingModule* this, OrderInterface* order) {
        return Money_new();
}


const char* NoShippingModule_getDescription(NoShippingModule* this) {
        return this->description;
}


const char* NoShippingModule_getName(NoShippingModule* this) {
        return this->name;
}

