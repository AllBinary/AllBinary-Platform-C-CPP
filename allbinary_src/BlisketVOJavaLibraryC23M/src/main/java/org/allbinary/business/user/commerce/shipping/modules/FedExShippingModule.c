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

typedef struct FedExShippingModule FedExShippingModule;
struct FedExShippingModule {
    ShippingInterface ShippingInterface_interface;
    const char* name;
    const char* description;
};


FedExShippingModule* FedExShippingModule_new(void);

void FedExShippingModule_init(FedExShippingModule* this);
Money* FedExShippingModule_getCost(FedExShippingModule* this, OrderInterface* order);
const char* FedExShippingModule_getDescription(FedExShippingModule* this);
const char* FedExShippingModule_getName(FedExShippingModule* this);

static void FedExShippingModule_initFields(FedExShippingModule* this) {
    this->name = "FedEx";
    this->description = "Fast Mail";
}


void FedExShippingModule_init(FedExShippingModule* this) {
    FedExShippingModule_initFields(this);
}

FedExShippingModule* FedExShippingModule_new(void) {
    FedExShippingModule* this = calloc(1, sizeof(FedExShippingModule));
    FedExShippingModule_init(this);
    return this;
}


Money* FedExShippingModule_getCost(FedExShippingModule* this, OrderInterface* order) {
        return Money_new();
}


const char* FedExShippingModule_getDescription(FedExShippingModule* this) {
        return this->description;
}


const char* FedExShippingModule_getName(FedExShippingModule* this) {
        return this->name;
}

