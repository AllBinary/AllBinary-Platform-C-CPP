/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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

typedef struct PoolType PoolType;
struct PoolType {
    CacheType* cacheType;
};


PoolType* PoolType_new(CacheType* cacheType);

void PoolType_init(PoolType* this, CacheType* cacheType);
CacheType* PoolType_getCacheType(PoolType* this);
const char* PoolType_toString(PoolType* this);

static void PoolType_initFields(PoolType* this) {
    
}


void PoolType_init(PoolType* this, CacheType* cacheType) {
    PoolType_initFields(this);
        this->cacheType = cacheType;
}

PoolType* PoolType_new(CacheType* cacheType) {
    PoolType* this = calloc(1, sizeof(PoolType));
    PoolType_init(this, cacheType);
    return this;
}


CacheType* PoolType_getCacheType(PoolType* this) {
        return this->cacheType;
}


const char* PoolType_toString(PoolType* this) {
        const char* POOL_TYPE = "PoolType: ";
        return java_concat(POOL_TYPE, JAVA_CALL(PoolType_getCacheType(this), toString));
}

