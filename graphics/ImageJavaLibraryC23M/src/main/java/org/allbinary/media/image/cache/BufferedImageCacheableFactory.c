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
// package org.allbinary.media.image.cache

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

typedef struct BufferedImageCacheableFactory BufferedImageCacheableFactory;
struct BufferedImageCacheableFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


BufferedImageCacheableFactory* BufferedImageCacheableFactory_new(void);

void BufferedImageCacheableFactory_init(BufferedImageCacheableFactory* this);
CacheableInterface* BufferedImageCacheableFactory_getInstance(BufferedImageCacheableFactory* this, Any* key);


void BufferedImageCacheableFactory_init(BufferedImageCacheableFactory* this) {
}

BufferedImageCacheableFactory* BufferedImageCacheableFactory_new(void) {
    BufferedImageCacheableFactory* this = calloc(1, sizeof(BufferedImageCacheableFactory));
    BufferedImageCacheableFactory_init(this);
    return this;
}


CacheableInterface* BufferedImageCacheableFactory_getInstance(BufferedImageCacheableFactory* this, Any* key) {
        return BufferedImageCacheable_new(((BufferedImageInfo*) key));
}

