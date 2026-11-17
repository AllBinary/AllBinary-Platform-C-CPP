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
// package org.allbinary.business.context.modules.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontStatisticsData StoreFrontStatisticsData;
struct StoreFrontStatisticsData {
    const char* NAME;
};

static StoreFrontStatisticsData* StoreFrontStatisticsData_instance;

StoreFrontStatisticsData* StoreFrontStatisticsData_new(void);
StoreFrontStatisticsData* StoreFrontStatisticsData_getInstance(void);

void StoreFrontStatisticsData_init(StoreFrontStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontStatisticsData_staticInit(void) {
    StoreFrontStatisticsData_instance = StoreFrontStatisticsData_new();
}

static void StoreFrontStatisticsData_initFields(StoreFrontStatisticsData* this) {
    this->NAME = "STOREFRONT_STATISTICS_NAME";
}


StoreFrontStatisticsData* StoreFrontStatisticsData_getInstance(void) {
        return StoreFrontStatisticsData_instance;
}


void StoreFrontStatisticsData_init(StoreFrontStatisticsData* this) {
    StoreFrontStatisticsData_initFields(this);
}

StoreFrontStatisticsData* StoreFrontStatisticsData_new(void) {
    StoreFrontStatisticsData* this = calloc(1, sizeof(StoreFrontStatisticsData));
    StoreFrontStatisticsData_init(this);
    return this;
}

