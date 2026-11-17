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
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"

typedef struct BasicWeightShippingModule BasicWeightShippingModule;
struct BasicWeightShippingModule {
    ShippingInterface ShippingInterface_interface;
    CommonStrings* commonStrings;
    const char* name;
    const char* description;
};


BasicWeightShippingModule* BasicWeightShippingModule_new(void);

void BasicWeightShippingModule_init(BasicWeightShippingModule* this);
Money* BasicWeightShippingModule_getCost(BasicWeightShippingModule* this, OrderInterface* order);
const char* BasicWeightShippingModule_getDescription(BasicWeightShippingModule* this);
const char* BasicWeightShippingModule_getName(BasicWeightShippingModule* this);

static void BasicWeightShippingModule_initFields(BasicWeightShippingModule* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->name = "Basic Shipping (5 to 7 working days)";
    this->description = "We will soon provide a variety of shipping methods.";
}


void BasicWeightShippingModule_init(BasicWeightShippingModule* this) {
    BasicWeightShippingModule_initFields(this);
}

BasicWeightShippingModule* BasicWeightShippingModule_new(void) {
    BasicWeightShippingModule* this = calloc(1, sizeof(BasicWeightShippingModule));
    BasicWeightShippingModule_init(this);
    return this;
}


Money* BasicWeightShippingModule_getCost(BasicWeightShippingModule* this, OrderInterface* order) {
        BasketInterface* basket = OrderInterface_getBasket(order);
        Money* money = Money_new();
        Money_add(money, BasketInterface_getTotalWeight(basket));
        Money_multiply(money, 1);
        Money_add(money, "3.50");
        return money;
}


const char* BasicWeightShippingModule_getDescription(BasicWeightShippingModule* this) {
        return this->description;
}


const char* BasicWeightShippingModule_getName(BasicWeightShippingModule* this) {
        return this->name;
}

