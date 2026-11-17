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

typedef struct PoolInterfaceFactory PoolInterfaceFactory;
struct PoolInterfaceFactory {
    char unused;
};


PoolInterfaceFactory* PoolInterfaceFactory_new(void);

void PoolInterfaceFactory_init(PoolInterfaceFactory* this);
PoolInterface* PoolInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy);


void PoolInterfaceFactory_init(PoolInterfaceFactory* this) {
}

PoolInterfaceFactory* PoolInterfaceFactory_new(void) {
    PoolInterfaceFactory* this = calloc(1, sizeof(PoolInterfaceFactory));
    PoolInterfaceFactory_init(this);
    return this;
}


// throws Exception
PoolInterface* PoolInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No Such PoolType: ", PoolType_toString(poolType))));
}

