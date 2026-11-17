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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontsData StoreFrontsData;
struct StoreFrontsData {
    const char* TYPE;
    const char* RETAIL;
    const char* SUBSCRIPTION;
    const char* AUCTION;
    const char* NEWS;
    const char* BLOG;
    const char* FORUM;
};

static StoreFrontsData* StoreFrontsData_instance;

StoreFrontsData* StoreFrontsData_new(void);
StoreFrontsData* StoreFrontsData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void StoreFrontsData_staticInit(void) {
    StoreFrontsData_instance = StoreFrontsData_new();
}

static void StoreFrontsData_initFields(StoreFrontsData* this) {
    this->TYPE = "STOREFRONTS_TYPE";
    this->RETAIL = "STOREFRONTS_RETAIL";
    this->SUBSCRIPTION = "STOREFRONTS_SUBSCRIPTION";
    this->AUCTION = "STOREFRONTS_AUCTION";
    this->NEWS = "STOREFRONTS_NEWS";
    this->BLOG = "STOREFRONTS_BLOG";
    this->FORUM = "STOREFRONTS_FORUM";
}

void StoreFrontsData_init(StoreFrontsData* this) {
    StoreFrontsData_initFields(this);
}

StoreFrontsData* StoreFrontsData_new(void) {
    StoreFrontsData* this = calloc(1, sizeof(StoreFrontsData));
    StoreFrontsData_init(this);
    return this;
}


StoreFrontsData* StoreFrontsData_getInstance(void) {
        return StoreFrontsData_instance;
}

