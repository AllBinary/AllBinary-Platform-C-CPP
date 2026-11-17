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

typedef struct UpsShippingModule UpsShippingModule;
struct UpsShippingModule {
    ShippingInterface ShippingInterface_interface;
    const char* name;
    const char* description;
};


UpsShippingModule* UpsShippingModule_new(void);

void UpsShippingModule_init(UpsShippingModule* this);
Money* UpsShippingModule_getCost(UpsShippingModule* this, OrderInterface* order);
const char* UpsShippingModule_getDescription(UpsShippingModule* this);
const char* UpsShippingModule_getName(UpsShippingModule* this);

static void UpsShippingModule_initFields(UpsShippingModule* this) {
    this->name = "UPS";
    this->description = "Brown Mail";
}


void UpsShippingModule_init(UpsShippingModule* this) {
    UpsShippingModule_initFields(this);
}

UpsShippingModule* UpsShippingModule_new(void) {
    UpsShippingModule* this = calloc(1, sizeof(UpsShippingModule));
    UpsShippingModule_init(this);
    return this;
}


Money* UpsShippingModule_getCost(UpsShippingModule* this, OrderInterface* order) {
        return Money_new();
}


const char* UpsShippingModule_getDescription(UpsShippingModule* this) {
        return this->description;
}


const char* UpsShippingModule_getName(UpsShippingModule* this) {
        return this->name;
}

