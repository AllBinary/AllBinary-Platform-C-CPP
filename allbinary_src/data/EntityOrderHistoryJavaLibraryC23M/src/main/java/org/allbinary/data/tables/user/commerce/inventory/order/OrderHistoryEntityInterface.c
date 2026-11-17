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
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct OrderHistoryEntityInterface OrderHistoryEntityInterface;
struct OrderHistoryEntityInterface {
    void (*insert)(void* this, const char* userName, Order* order);
    void (*setStatus)(void* this, const char* orderId, const char* status);
    void (*setPaymentMethod)(void* this, const char* orderId, const char* status);
    BasicArrayList* (*getStoreOrders)(void* this, StoreFrontInterface* storeFrontInterface);
    BasicArrayList* (*getOrders)(void* this, const char* userName);
    BasicArrayList* (*getOrders)(void* this, const char* status, const char* fromDate, const char* toDate);
    OrderHistory* (*getOrder)(void* this, const char* id);
    void (*update)(void* this, HashMap* whereHashMap, HashMap* orderHashMap);
};


