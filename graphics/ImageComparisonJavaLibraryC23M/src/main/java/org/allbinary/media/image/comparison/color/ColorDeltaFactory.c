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
// package org.allbinary.media.image.comparison.color

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
#include "org/allbinary/logic/util/cache/CacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ColorDeltaFactory ColorDeltaFactory;
struct ColorDeltaFactory {
    LogUtil* logUtil;
};

static AutomaticCacheInterface* ColorDeltaFactory_cacheInterface = nullptr;

ColorDeltaFactory* ColorDeltaFactory_new(void);

void ColorDeltaFactory_init(ColorDeltaFactory* this);
ColorDelta* ColorDeltaFactory_getInstance(int32_t rgb1, int32_t rgb2);

static void ColorDeltaFactory_initFields(ColorDeltaFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


// Java static initializer: call this once at startup
void ColorDeltaFactory_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        const char* instance = "ColorDeltaFactory";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, instance, STATIC_BLOCK);
            ColorDeltaFactory_cacheInterface = ((AutomaticCacheInterface*) CacheInterfaceFactory_getInstance(CacheTypeFactory_getInstance()->CACHE, CachePolicyFactory_getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX));
            LogUtil_putF(logUtil, commonStrings->END, instance, STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, instance, STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void ColorDeltaFactory_init(ColorDeltaFactory* this) {
    ColorDeltaFactory_initFields(this);
}

ColorDeltaFactory* ColorDeltaFactory_new(void) {
    ColorDeltaFactory* this = calloc(1, sizeof(ColorDeltaFactory));
    ColorDeltaFactory_init(this);
    return this;
}


// throws Exception
ColorDelta* ColorDeltaFactory_getInstance(int32_t rgb1, int32_t rgb2) {
        ColorDelta* colorDelta = ((ColorDelta*) JAVA_CALL(ColorDeltaFactory_cacheInterface, get, ColorDelta_getKey(rgb1, rgb2)));
        if (colorDelta == nullptr) {
            colorDelta = ColorDelta_new(rgb1, rgb2);
        }
        return colorDelta;
}

