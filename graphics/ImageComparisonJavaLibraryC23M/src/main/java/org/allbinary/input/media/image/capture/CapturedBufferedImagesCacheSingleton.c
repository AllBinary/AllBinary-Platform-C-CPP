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
// package org.allbinary.input.media.image.capture

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
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CapturedBufferedImagesCacheSingleton CapturedBufferedImagesCacheSingleton;
struct CapturedBufferedImagesCacheSingleton {
    LogUtil* logUtil;
};

static AutomaticCacheInterface* CapturedBufferedImagesCacheSingleton_cacheInterface = nullptr;

CapturedBufferedImagesCacheSingleton* CapturedBufferedImagesCacheSingleton_new(void);

void CapturedBufferedImagesCacheSingleton_init(CapturedBufferedImagesCacheSingleton* this);
CacheInterface* CapturedBufferedImagesCacheSingleton_getInstance(void);

static void CapturedBufferedImagesCacheSingleton_initFields(CapturedBufferedImagesCacheSingleton* this) {
    this->logUtil = LogUtil_getInstance();
}


void CapturedBufferedImagesCacheSingleton_init(CapturedBufferedImagesCacheSingleton* this) {
    CapturedBufferedImagesCacheSingleton_initFields(this);
}

CapturedBufferedImagesCacheSingleton* CapturedBufferedImagesCacheSingleton_new(void) {
    CapturedBufferedImagesCacheSingleton* this = calloc(1, sizeof(CapturedBufferedImagesCacheSingleton));
    CapturedBufferedImagesCacheSingleton_init(this);
    return this;
}


CacheInterface* CapturedBufferedImagesCacheSingleton_getInstance(void) {
        return CapturedBufferedImagesCacheSingleton_cacheInterface;
}


// Java static initializer: call this once at startup
void CapturedBufferedImagesCacheSingleton_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        const char* instance = "CapturedBufferedImagesCacheSingleton";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, instance, STATIC_BLOCK);
            CapturedBufferedImagesCacheSingleton_cacheInterface = ((AutomaticCacheInterface*) CacheInterfaceFactory_getInstance((CacheTypeFactory_getInstance()->SET), (CachePolicyFactory_getInstance()->ONE_MINUTE_FIVE_MAX)));
            LogUtil_putF(logUtil, commonStrings->END, instance, STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, instance, STATIC_BLOCK, e);
        } JAVA_END_TRY;
}

