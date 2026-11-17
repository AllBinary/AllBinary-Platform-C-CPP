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
// package org.allbinary.business.context.modules.storefront.statistics.orders.history

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontOrdersHistoryStatisticsData StoreFrontOrdersHistoryStatisticsData;
struct StoreFrontOrdersHistoryStatisticsData {
    const char* NAME;
    const char* NUMBEROFORDERS;
    const char* SUBTOTAL;
    const char* SHIPPINGCOST;
    const char* TAXES;
    const char* TOTAL;
};

static StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData_instance;

StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData_new(void);
StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData_getInstance(void);

void StoreFrontOrdersHistoryStatisticsData_init(StoreFrontOrdersHistoryStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontOrdersHistoryStatisticsData_staticInit(void) {
    StoreFrontOrdersHistoryStatisticsData_instance = StoreFrontOrdersHistoryStatisticsData_new();
}

static void StoreFrontOrdersHistoryStatisticsData_initFields(StoreFrontOrdersHistoryStatisticsData* this) {
    this->NAME = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NAME";
    this->NUMBEROFORDERS = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NUMBER_OF_ORDERS";
    this->SUBTOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SUBTOTAL";
    this->SHIPPINGCOST = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SHIPPINGCOST";
    this->TAXES = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TAXES";
    this->TOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TOTAL";
}


StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData_getInstance(void) {
        return StoreFrontOrdersHistoryStatisticsData_instance;
}


void StoreFrontOrdersHistoryStatisticsData_init(StoreFrontOrdersHistoryStatisticsData* this) {
    StoreFrontOrdersHistoryStatisticsData_initFields(this);
}

StoreFrontOrdersHistoryStatisticsData* StoreFrontOrdersHistoryStatisticsData_new(void) {
    StoreFrontOrdersHistoryStatisticsData* this = calloc(1, sizeof(StoreFrontOrdersHistoryStatisticsData));
    StoreFrontOrdersHistoryStatisticsData_init(this);
    return this;
}

