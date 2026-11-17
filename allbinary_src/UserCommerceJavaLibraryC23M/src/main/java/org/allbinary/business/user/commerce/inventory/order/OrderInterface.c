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
// package org.allbinary.business.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"

typedef struct OrderInterface OrderInterface;
struct OrderInterface {
    void (*setShippingMethod)(void* this, const char* shippingType);
    void (*setPaymentMethod)(void* this, const char* value);
    void (*setSpecial)(void* this, const char* special);
    void (*setStoreName)(void* this, const char* value);
    void (*setUserComments)(void* this, const char* value);
    void (*setUserCancelComments)(void* this, const char* value);
    void (*setStoreComments)(void* this, const char* value);
    void (*setStoreCancelComments)(void* this, const char* value);
    BasketInterface* (*getBasket)(void* this);
    const char* (*getShippingMethod)(void* this);
    const char* (*getPaymentMethod)(void* this);
    const char* (*getSpecial)(void* this);
    const char* (*getId)(void* this);
    const char* (*getStoreName)(void* this);
    const char* (*getUserComments)(void* this);
    const char* (*getUserCancelComments)(void* this);
    const char* (*getStoreComments)(void* this);
    const char* (*getStoreCancelComments)(void* this);
};


