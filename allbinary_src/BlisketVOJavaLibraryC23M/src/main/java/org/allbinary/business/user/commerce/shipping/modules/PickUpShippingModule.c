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

typedef struct PickUpShippingModule PickUpShippingModule;
struct PickUpShippingModule {
    ShippingInterface ShippingInterface_interface;
    CommonStrings* commonStrings;
    const char* name;
    const char* description;
};


PickUpShippingModule* PickUpShippingModule_new(void);

void PickUpShippingModule_init(PickUpShippingModule* this);
Money* PickUpShippingModule_getCost(PickUpShippingModule* this, OrderInterface* order);
const char* PickUpShippingModule_getDescription(PickUpShippingModule* this);
const char* PickUpShippingModule_getName(PickUpShippingModule* this);

static void PickUpShippingModule_initFields(PickUpShippingModule* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->name = "No Shipping (For Pickup Orders Only)";
    this->description = "This shipping method is for pickup orders only.";
}


void PickUpShippingModule_init(PickUpShippingModule* this) {
    PickUpShippingModule_initFields(this);
}

PickUpShippingModule* PickUpShippingModule_new(void) {
    PickUpShippingModule* this = calloc(1, sizeof(PickUpShippingModule));
    PickUpShippingModule_init(this);
    return this;
}


Money* PickUpShippingModule_getCost(PickUpShippingModule* this, OrderInterface* order) {
        return Money_new();
}


const char* PickUpShippingModule_getDescription(PickUpShippingModule* this) {
        return this->description;
}


const char* PickUpShippingModule_getName(PickUpShippingModule* this) {
        return this->name;
}

