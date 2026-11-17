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
#include "org/allbinary/data/generator/OrderIdGenerator.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h"

typedef struct OrderProcessorUtil OrderProcessorUtil;
struct OrderProcessorUtil {
    const char* ORDER_PROCESSED;
};

static OrderProcessorUtil* OrderProcessorUtil_instance;

OrderProcessorUtil* OrderProcessorUtil_new(void);
OrderProcessorUtil* OrderProcessorUtil_getInstance(void);
const char* OrderProcessorUtil_process(OrderProcessorUtil* this, const char* userName, Order* order);

// Static fields with runtime initializers: call this once at startup
void OrderProcessorUtil_staticInit(void) {
    OrderProcessorUtil_instance = OrderProcessorUtil_new();
}

static void OrderProcessorUtil_initFields(OrderProcessorUtil* this) {
    this->ORDER_PROCESSED = "Order Processed";
}

void OrderProcessorUtil_init(OrderProcessorUtil* this) {
    OrderProcessorUtil_initFields(this);
}

OrderProcessorUtil* OrderProcessorUtil_new(void) {
    OrderProcessorUtil* this = calloc(1, sizeof(OrderProcessorUtil));
    OrderProcessorUtil_init(this);
    return this;
}


OrderProcessorUtil* OrderProcessorUtil_getInstance(void) {
        return OrderProcessorUtil_instance;
}


// throws Exception
const char* OrderProcessorUtil_process(OrderProcessorUtil* this, const char* userName, Order* order) {
        OrderItemsEntity* orderItems = OrderItemsEntity_new();
        OrderHistoryEntity* orderHistory = OrderHistoryEntity_new();
        Order_setId(order, OrderIdGenerator_getNext(OrderIdGenerator_new()));
        OrderItemsEntity_insert(orderItems, userName, order);
        OrderHistoryEntity_insert(orderHistory, userName, order);
        return this->ORDER_PROCESSED;
}

