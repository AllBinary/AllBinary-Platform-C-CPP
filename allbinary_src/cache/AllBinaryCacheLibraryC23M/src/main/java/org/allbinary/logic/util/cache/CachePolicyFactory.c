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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CachePolicyFactory CachePolicyFactory;
struct CachePolicyFactory {
    const char* NAME;
    CachePolicy* MAX_TIME_THOUSAND_MAX;
    CachePolicy* THIRTY_MINUTES_TEN_THOUSAND_MAX;
    CachePolicy* THIRTY_MINUTES_FIFTY_THOUSAND_MAX;
    CachePolicy* ONE_MINUTE_FIVE_MAX;
    CachePolicy* ONE_MINUTE_TEN_MAX;
    CachePolicy* ONE_MINUTE_ONE_HUNDRED_MAX;
};

static CachePolicyFactory* CachePolicyFactory_instance;

CachePolicyFactory* CachePolicyFactory_new(void);
CachePolicyFactory* CachePolicyFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CachePolicyFactory_staticInit(void) {
    CachePolicyFactory_instance = CachePolicyFactory_new();
}

static void CachePolicyFactory_initFields(CachePolicyFactory* this) {
    this->NAME = "lru";
    this->MAX_TIME_THOUSAND_MAX = CachePolicy_new(this->NAME, Long_MAX_VALUE, 1000);
    this->THIRTY_MINUTES_TEN_THOUSAND_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 30, 10000);
    this->THIRTY_MINUTES_FIFTY_THOUSAND_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 30, 100000);
    this->ONE_MINUTE_FIVE_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 5);
    this->ONE_MINUTE_TEN_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 10);
    this->ONE_MINUTE_ONE_HUNDRED_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 100);
}

void CachePolicyFactory_init(CachePolicyFactory* this) {
    CachePolicyFactory_initFields(this);
}

CachePolicyFactory* CachePolicyFactory_new(void) {
    CachePolicyFactory* this = calloc(1, sizeof(CachePolicyFactory));
    CachePolicyFactory_init(this);
    return this;
}


CachePolicyFactory* CachePolicyFactory_getInstance(void) {
        return CachePolicyFactory_instance;
}

