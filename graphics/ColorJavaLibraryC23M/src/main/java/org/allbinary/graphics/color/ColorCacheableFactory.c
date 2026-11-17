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
// package org.allbinary.graphics.color

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

typedef struct ColorCacheableFactory ColorCacheableFactory;
struct ColorCacheableFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


ColorCacheableFactory* ColorCacheableFactory_new(void);

void ColorCacheableFactory_init(ColorCacheableFactory* this);
CacheableInterface* ColorCacheableFactory_getInstance(ColorCacheableFactory* this, Any* key);


void ColorCacheableFactory_init(ColorCacheableFactory* this) {
}

ColorCacheableFactory* ColorCacheableFactory_new(void) {
    ColorCacheableFactory* this = calloc(1, sizeof(ColorCacheableFactory));
    ColorCacheableFactory_init(this);
    return this;
}


CacheableInterface* ColorCacheableFactory_getInstance(ColorCacheableFactory* this, Any* key) {
        return ColorCacheable_new(key);
}

