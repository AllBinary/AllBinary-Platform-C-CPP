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
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"

typedef struct UspsShippingModule UspsShippingModule;
struct UspsShippingModule {
    ShippingInterface ShippingInterface_interface;
    const char* name;
    const char* description;
};


UspsShippingModule* UspsShippingModule_new(void);

void UspsShippingModule_init(UspsShippingModule* this);
Money* UspsShippingModule_getCost(UspsShippingModule* this, OrderInterface* order);
const char* UspsShippingModule_getDescription(UspsShippingModule* this);
const char* UspsShippingModule_getName(UspsShippingModule* this);

static void UspsShippingModule_initFields(UspsShippingModule* this) {
    this->name = "USPS";
    this->description = "Snail Mail";
}


void UspsShippingModule_init(UspsShippingModule* this) {
    UspsShippingModule_initFields(this);
}

UspsShippingModule* UspsShippingModule_new(void) {
    UspsShippingModule* this = calloc(1, sizeof(UspsShippingModule));
    UspsShippingModule_init(this);
    return this;
}


Money* UspsShippingModule_getCost(UspsShippingModule* this, OrderInterface* order) {
        return Money_new();
}


const char* UspsShippingModule_getDescription(UspsShippingModule* this) {
        return this->description;
}


const char* UspsShippingModule_getName(UspsShippingModule* this) {
        return this->name;
}

