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

typedef struct AutomaticCacheInterfaceFactory AutomaticCacheInterfaceFactory;
struct AutomaticCacheInterfaceFactory {
    char unused;
};


AutomaticCacheInterfaceFactory* AutomaticCacheInterfaceFactory_new(void);

void AutomaticCacheInterfaceFactory_init(AutomaticCacheInterfaceFactory* this);
AutomaticCacheInterface* AutomaticCacheInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, CacheType* cacheType, CachePolicy* cachePolicy);


void AutomaticCacheInterfaceFactory_init(AutomaticCacheInterfaceFactory* this) {
}

AutomaticCacheInterfaceFactory* AutomaticCacheInterfaceFactory_new(void) {
    AutomaticCacheInterfaceFactory* this = calloc(1, sizeof(AutomaticCacheInterfaceFactory));
    AutomaticCacheInterfaceFactory_init(this);
    return this;
}


// throws Exception
AutomaticCacheInterface* AutomaticCacheInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, CacheType* cacheType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No such ", CacheType_toString(cacheType))));
}

