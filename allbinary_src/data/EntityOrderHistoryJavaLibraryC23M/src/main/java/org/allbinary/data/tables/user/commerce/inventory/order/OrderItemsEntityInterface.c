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
// package org.allbinary.data.tables.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketReview.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct OrderItemsEntityInterface OrderItemsEntityInterface;
struct OrderItemsEntityInterface {
    void (*setStatus)(void* this, const char* orderId, const char* groupId, const char* status);
    bool (*isEverythingShipped)(void* this, const char* orderId);
    BasketReview* (*getBasketReview)(void* this, const char* orderId);
    void (*insert)(void* this, const char* userName, OrderInterface* order);
    void (*insert)(void* this, BasicArrayList* values);
};


