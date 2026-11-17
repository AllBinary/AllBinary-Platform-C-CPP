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
// package org.allbinary.business.context.modules.storefront.statistics.advertisements

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontAdvertisementsStatisticsData StoreFrontAdvertisementsStatisticsData;
struct StoreFrontAdvertisementsStatisticsData {
    const char* NAME;
};

static StoreFrontAdvertisementsStatisticsData* StoreFrontAdvertisementsStatisticsData_instance;

StoreFrontAdvertisementsStatisticsData* StoreFrontAdvertisementsStatisticsData_new(void);
StoreFrontAdvertisementsStatisticsData* StoreFrontAdvertisementsStatisticsData_getInstance(void);

void StoreFrontAdvertisementsStatisticsData_init(StoreFrontAdvertisementsStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontAdvertisementsStatisticsData_staticInit(void) {
    StoreFrontAdvertisementsStatisticsData_instance = StoreFrontAdvertisementsStatisticsData_new();
}

static void StoreFrontAdvertisementsStatisticsData_initFields(StoreFrontAdvertisementsStatisticsData* this) {
    this->NAME = "STOREFRONT_ADVERTISEMENTS_STATISTICS_NAME";
}


StoreFrontAdvertisementsStatisticsData* StoreFrontAdvertisementsStatisticsData_getInstance(void) {
        return StoreFrontAdvertisementsStatisticsData_instance;
}


void StoreFrontAdvertisementsStatisticsData_init(StoreFrontAdvertisementsStatisticsData* this) {
    StoreFrontAdvertisementsStatisticsData_initFields(this);
}

StoreFrontAdvertisementsStatisticsData* StoreFrontAdvertisementsStatisticsData_new(void) {
    StoreFrontAdvertisementsStatisticsData* this = calloc(1, sizeof(StoreFrontAdvertisementsStatisticsData));
    StoreFrontAdvertisementsStatisticsData_init(this);
    return this;
}

