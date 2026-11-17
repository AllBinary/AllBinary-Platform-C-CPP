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
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct BasicArrayListCacheableInterfaceFactory BasicArrayListCacheableInterfaceFactory;
struct BasicArrayListCacheableInterfaceFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


BasicArrayListCacheableInterfaceFactory* BasicArrayListCacheableInterfaceFactory_new(void);
CacheableInterface* BasicArrayListCacheableInterfaceFactory_getInstance(BasicArrayListCacheableInterfaceFactory* this, Any* key);

void BasicArrayListCacheableInterfaceFactory_init(BasicArrayListCacheableInterfaceFactory* this) {
}

BasicArrayListCacheableInterfaceFactory* BasicArrayListCacheableInterfaceFactory_new(void) {
    BasicArrayListCacheableInterfaceFactory* this = calloc(1, sizeof(BasicArrayListCacheableInterfaceFactory));
    BasicArrayListCacheableInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* BasicArrayListCacheableInterfaceFactory_getInstance(BasicArrayListCacheableInterfaceFactory* this, Any* key) {
        return BasicArrayListCacheable_new();
}

