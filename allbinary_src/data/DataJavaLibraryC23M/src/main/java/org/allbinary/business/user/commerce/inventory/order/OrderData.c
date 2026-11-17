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

typedef struct OrderData OrderData;
struct OrderData {
    char unused;
};

const char* OrderData_ORDERS = "ORDERS";
const char* OrderData_ORDER = "ORDER";
const char* OrderData_ID = "ORDER_ID";
const char* OrderData_CUSTOMERCOMMENT = "ORDER_CUSTOMER_COMMENT";
const char* OrderData_CUSTOMERCANCELCOMMENT = "ORDER_CUSTOMER_CANCEL_COMMENT";
const char* OrderData_STORECOMMENT = "ORDER_STORE_COMMENT";
const char* OrderData_STORECANCELCOMMENT = "ORDER_STORE_CANCEL_COMMENT";

OrderData* OrderData_new(void);

void OrderData_init(OrderData* this) {
}

OrderData* OrderData_new(void) {
    OrderData* this = calloc(1, sizeof(OrderData));
    OrderData_init(this);
    return this;
}

