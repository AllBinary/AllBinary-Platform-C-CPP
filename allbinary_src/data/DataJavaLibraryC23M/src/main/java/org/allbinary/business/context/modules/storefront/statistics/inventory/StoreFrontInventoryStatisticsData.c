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
// package org.allbinary.business.context.modules.storefront.statistics.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontInventoryStatisticsData StoreFrontInventoryStatisticsData;
struct StoreFrontInventoryStatisticsData {
    const char* NAME;
    const char* NUMBEROFITEMS;
    const char* TOTALVALUE;
};

static StoreFrontInventoryStatisticsData* StoreFrontInventoryStatisticsData_instance;

StoreFrontInventoryStatisticsData* StoreFrontInventoryStatisticsData_new(void);
StoreFrontInventoryStatisticsData* StoreFrontInventoryStatisticsData_getInstance(void);

void StoreFrontInventoryStatisticsData_init(StoreFrontInventoryStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontInventoryStatisticsData_staticInit(void) {
    StoreFrontInventoryStatisticsData_instance = StoreFrontInventoryStatisticsData_new();
}

static void StoreFrontInventoryStatisticsData_initFields(StoreFrontInventoryStatisticsData* this) {
    this->NAME = "STOREFRONT_INVENTORY_STATISTICS_NAME";
    this->NUMBEROFITEMS = "STOREFRONT_INVENTORY_STATISTICS_NUMBER_OF_ITEMS";
    this->TOTALVALUE = "STOREFRONT_INVENTORY_STATISTICS_TOTAL_VALUE";
}


StoreFrontInventoryStatisticsData* StoreFrontInventoryStatisticsData_getInstance(void) {
        return StoreFrontInventoryStatisticsData_instance;
}


void StoreFrontInventoryStatisticsData_init(StoreFrontInventoryStatisticsData* this) {
    StoreFrontInventoryStatisticsData_initFields(this);
}

StoreFrontInventoryStatisticsData* StoreFrontInventoryStatisticsData_new(void) {
    StoreFrontInventoryStatisticsData* this = calloc(1, sizeof(StoreFrontInventoryStatisticsData));
    StoreFrontInventoryStatisticsData_init(this);
    return this;
}

