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
// package org.allbinary.media.image.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct IIOImageCacheableFactory IIOImageCacheableFactory;
struct IIOImageCacheableFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


IIOImageCacheableFactory* IIOImageCacheableFactory_new(void);

void IIOImageCacheableFactory_init(IIOImageCacheableFactory* this);
CacheableInterface* IIOImageCacheableFactory_getInstance(IIOImageCacheableFactory* this, Any* key);


void IIOImageCacheableFactory_init(IIOImageCacheableFactory* this) {
}

IIOImageCacheableFactory* IIOImageCacheableFactory_new(void) {
    IIOImageCacheableFactory* this = calloc(1, sizeof(IIOImageCacheableFactory));
    IIOImageCacheableFactory_init(this);
    return this;
}


CacheableInterface* IIOImageCacheableFactory_getInstance(IIOImageCacheableFactory* this, Any* key) {
        return IIOImageCacheable_new(((const char*) key));
}

