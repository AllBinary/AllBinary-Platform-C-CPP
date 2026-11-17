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
// package org.allbinary.media.image.comparison.pixel

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/media/image/comparison/color/ColorDelta.h"
#include "org/allbinary/media/image/comparison/color/ColorDeltaFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PixelDeltaFactory PixelDeltaFactory;
struct PixelDeltaFactory {
    LogUtil* logUtil;
};

static AutomaticCacheInterface* PixelDeltaFactory_cacheInterface = nullptr;

PixelDeltaFactory* PixelDeltaFactory_new(void);

void PixelDeltaFactory_init(PixelDeltaFactory* this);
PixelDelta* PixelDeltaFactory_getInstance(int32_t x, int32_t y, int32_t rgb1, int32_t rgb2);

static void PixelDeltaFactory_initFields(PixelDeltaFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


// Java static initializer: call this once at startup
void PixelDeltaFactory_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        const char* instance = "PixelDeltaFactory";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, instance, STATIC_BLOCK);
            PixelDeltaFactory_cacheInterface = ((AutomaticCacheInterface*) CacheInterfaceFactory_getInstance(CacheTypeFactory_getInstance()->CACHE, CachePolicyFactory_getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX));
            LogUtil_putF(logUtil, commonStrings->END, instance, STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, instance, STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void PixelDeltaFactory_init(PixelDeltaFactory* this) {
    PixelDeltaFactory_initFields(this);
}

PixelDeltaFactory* PixelDeltaFactory_new(void) {
    PixelDeltaFactory* this = calloc(1, sizeof(PixelDeltaFactory));
    PixelDeltaFactory_init(this);
    return this;
}


// throws Exception
PixelDelta* PixelDeltaFactory_getInstance(int32_t x, int32_t y, int32_t rgb1, int32_t rgb2) {
        GPoint* point = PointFactory_createXY(PointFactory_getInstance(), x, y);
        ColorDelta* colorDelta = ColorDeltaFactory_getInstance(rgb1, rgb2);
        PixelDelta* pixelDelta = ((PixelDelta*) JAVA_CALL(PixelDeltaFactory_cacheInterface, get, PixelDelta_getKey(point, colorDelta)));
        if (pixelDelta == nullptr) {
            pixelDelta = PixelDelta_new(point, colorDelta);
        }
        return pixelDelta;
}

