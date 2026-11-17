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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ColorCacheFactory ColorCacheFactory;
struct ColorCacheFactory {
    char unused;
};

static AutomaticCacheInterface* ColorCacheFactory_cacheInterface = nullptr;

ColorCacheFactory* ColorCacheFactory_new(void);

void ColorCacheFactory_init(ColorCacheFactory* this);
AutomaticCacheInterface* ColorCacheFactory_getInstance(void);


// Java static initializer: call this once at startup
void ColorCacheFactory_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, "ColorCacheFactory", STATIC_BLOCK);
            ColorCacheFactory_cacheInterface = AutomaticCacheInterfaceFactory_getInstance(ColorCacheableFactory_new(), CacheTypeFactory_getInstance()->CACHE, CachePolicyFactory_getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX);
            LogUtil_putF(logUtil, commonStrings->END, "ColorCacheFactory", STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, "ColorCacheFactory", STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void ColorCacheFactory_init(ColorCacheFactory* this) {
}

ColorCacheFactory* ColorCacheFactory_new(void) {
    ColorCacheFactory* this = calloc(1, sizeof(ColorCacheFactory));
    ColorCacheFactory_init(this);
    return this;
}


AutomaticCacheInterface* ColorCacheFactory_getInstance(void) {
        return ColorCacheFactory_cacheInterface;
}

