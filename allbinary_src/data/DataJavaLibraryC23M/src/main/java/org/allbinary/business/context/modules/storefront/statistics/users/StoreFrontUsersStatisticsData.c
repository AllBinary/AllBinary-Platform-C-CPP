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
// package org.allbinary.business.context.modules.storefront.statistics.users

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontUsersStatisticsData StoreFrontUsersStatisticsData;
struct StoreFrontUsersStatisticsData {
    const char* NAME;
    const char* NUMBEROFUSERS;
};

static StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData_instance;

StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData_new(void);

void StoreFrontUsersStatisticsData_init(StoreFrontUsersStatisticsData* this);
StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void StoreFrontUsersStatisticsData_staticInit(void) {
    StoreFrontUsersStatisticsData_instance = StoreFrontUsersStatisticsData_new();
}

static void StoreFrontUsersStatisticsData_initFields(StoreFrontUsersStatisticsData* this) {
    this->NAME = "STOREFRONT_USERS_STATISTICS_NAME";
    this->NUMBEROFUSERS = "STOREFRONT_USERS_STATISTICS_NUMBER_OF_USERS";
}


void StoreFrontUsersStatisticsData_init(StoreFrontUsersStatisticsData* this) {
    StoreFrontUsersStatisticsData_initFields(this);
}

StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData_new(void) {
    StoreFrontUsersStatisticsData* this = calloc(1, sizeof(StoreFrontUsersStatisticsData));
    StoreFrontUsersStatisticsData_init(this);
    return this;
}


StoreFrontUsersStatisticsData* StoreFrontUsersStatisticsData_getInstance(void) {
        return StoreFrontUsersStatisticsData_instance;
}

