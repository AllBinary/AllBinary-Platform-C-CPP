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

typedef struct OrderHistoryData OrderHistoryData;
struct OrderHistoryData {
    char unused;
};

int32_t OrderHistoryData_MAXIDLEN = 19;
const char* OrderHistoryData_DATEDELTA = "DATE_DELTA";
const char* OrderHistoryData_DATETYPE = "DATE_TYPE";
const char* OrderHistoryData_TYPELONG = "TYPE_LONG";
const char* OrderHistoryData_TYPECAESAR = "TYPE_CAESAR";
const char* OrderHistoryData_TODATE = "TO_DATE";
const char* OrderHistoryData_FROMHOUR = "FROM_HOUR";
const char* OrderHistoryData_FROMDAY = "FROM_DAY";
const char* OrderHistoryData_FROMMONTH = "FROM_MONTH";
const char* OrderHistoryData_FROMYEAR = "FROM_YEAR";
const char* OrderHistoryData_TOHOUR = "TO_HOUR";
const char* OrderHistoryData_TODAY = "TO_DAY";
const char* OrderHistoryData_TOMONTH = "TO_MONTH";
const char* OrderHistoryData_TOYEAR = "TO_YEAR";
const char* OrderHistoryData_ORDERHISTORY = "ORDERHISTORY";
const char* OrderHistoryData_SHIPPEDDATE = "ORDERHISTORY_SHIPPED_DATE";
const char* OrderHistoryData_ORDERDATE = "ORDERHISTORY_ORDER_DATE";
const char* OrderHistoryData_TRANSDATE = "ORDERHISTORY_TRANS_DATE";
const char* OrderHistoryData_CANCELDATE = "ORDERHISTORY_CANCEL_DATE";
const char* OrderHistoryData_SHIPPEDDATEFORMATTED = "ORDERHISTORY_SHIPPED_DATE_FORMATTED";
const char* OrderHistoryData_ORDERDATEFORMATTED = "ORDERHISTORY_ORDER_DATE_FORMATTED";
const char* OrderHistoryData_TRANSDATEFORMATTED = "ORDERHISTORY_TRANS_DATE_FORMATTED";
const char* OrderHistoryData_CANCELDATEFORMATTED = "ORDERHISTORY_CANCEL_DATE_FORMATTED";
const char* OrderHistoryData_SUBTOTAL = "ORDERHISTORY_SUB_TOTAL";
const char* OrderHistoryData_SHIPPINGCOST = "ORDERHISTORY_SHIPPING_COST";
const char* OrderHistoryData_TAX = "ORDERHISTORY_TAX";
const char* OrderHistoryData_TOTAL = "ORDERHISTORY_TOTAL";
const char* OrderHistoryData_CANCELINFO = "ORDERHISTORY_CANCEL_INFO";
const char* OrderHistoryData_CANCELTYPE = "ORDERHISTORY_CANCEL_TYPE";
const char* OrderHistoryData_STATUS = "ORDERHISTORY_STATUS";
const char* OrderHistoryData_PREPROCESSINGNAME = "PREPROCESSING";
const char* OrderHistoryData_PROCESSINGNAME = "PROCESSING";
const char* OrderHistoryData_CANCELLEDNAME = "CANCELLED";
const char* OrderHistoryData_PARTIALLYSHIPPEDNAME = "PARTIALLYSHIPPED";
const char* OrderHistoryData_SHIPPEDNAME = "SHIPPED";
const char* OrderHistoryData_PREPROCESSING = "Order Preprocessing";
const char* OrderHistoryData_PROCESSING = "Order Processing";
const char* OrderHistoryData_CANCELLED = "Order Cancelled";
const char* OrderHistoryData_PARTIALLYSHIPPED = "Order Partially Shipped";
const char* OrderHistoryData_SHIPPED = "Order Shipped";
const char* OrderHistoryData_SETSTATUS = "Set Status";

OrderHistoryData* OrderHistoryData_new(void);

void OrderHistoryData_init(OrderHistoryData* this) {
}

OrderHistoryData* OrderHistoryData_new(void) {
    OrderHistoryData* this = calloc(1, sizeof(OrderHistoryData));
    OrderHistoryData_init(this);
    return this;
}

