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
// package org.allbinary.business.context.modules.storefront.statistics.orders

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontOrdersStatisticsData StoreFrontOrdersStatisticsData;
struct StoreFrontOrdersStatisticsData {
    const char* NAME;
};

static StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData_instance;

StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData_new(void);
StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData_getInstance(void);

void StoreFrontOrdersStatisticsData_init(StoreFrontOrdersStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontOrdersStatisticsData_staticInit(void) {
    StoreFrontOrdersStatisticsData_instance = StoreFrontOrdersStatisticsData_new();
}

static void StoreFrontOrdersStatisticsData_initFields(StoreFrontOrdersStatisticsData* this) {
    this->NAME = "STOREFRONT_ORDERS_STATISTICS_NAME";
}


StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData_getInstance(void) {
        return StoreFrontOrdersStatisticsData_instance;
}


void StoreFrontOrdersStatisticsData_init(StoreFrontOrdersStatisticsData* this) {
    StoreFrontOrdersStatisticsData_initFields(this);
}

StoreFrontOrdersStatisticsData* StoreFrontOrdersStatisticsData_new(void) {
    StoreFrontOrdersStatisticsData* this = calloc(1, sizeof(StoreFrontOrdersStatisticsData));
    StoreFrontOrdersStatisticsData_init(this);
    return this;
}

