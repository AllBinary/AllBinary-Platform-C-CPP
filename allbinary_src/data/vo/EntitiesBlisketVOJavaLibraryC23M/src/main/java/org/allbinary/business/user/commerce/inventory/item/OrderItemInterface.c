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
// package org.allbinary.business.user.commerce.inventory.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"

typedef struct OrderItemInterface OrderItemInterface;
struct OrderItemInterface {
    void (*setGroup)(void* this, const char* value);
    void (*setTax)(void* this, const char* value);
    void (*setShippingType)(void* this, const char* value);
    void (*setShippingCost)(void* this, const char* value);
    void (*setShippingAddress)(void* this, StreetAddress* value);
    void (*setSpecial)(void* this, const char* value);
    const char* (*getGroup)(void* this);
    const char* (*getTax)(void* this);
    const char* (*getShippingType)(void* this);
    const char* (*getShippingCost)(void* this);
    StreetAddress* (*getShippingAddress)(void* this);
    const char* (*getSpecial)(void* this);
};


