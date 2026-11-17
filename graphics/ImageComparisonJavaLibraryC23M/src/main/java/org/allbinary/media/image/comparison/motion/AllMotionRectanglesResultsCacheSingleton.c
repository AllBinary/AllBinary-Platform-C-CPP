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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AllMotionRectanglesResultsCacheSingleton AllMotionRectanglesResultsCacheSingleton;
struct AllMotionRectanglesResultsCacheSingleton {
    LogUtil* logUtil;
};

static CacheInterface* AllMotionRectanglesResultsCacheSingleton_cacheInterface = nullptr;

AllMotionRectanglesResultsCacheSingleton* AllMotionRectanglesResultsCacheSingleton_new(void);

void AllMotionRectanglesResultsCacheSingleton_init(AllMotionRectanglesResultsCacheSingleton* this);
CacheInterface* AllMotionRectanglesResultsCacheSingleton_getInstance(void);

static void AllMotionRectanglesResultsCacheSingleton_initFields(AllMotionRectanglesResultsCacheSingleton* this) {
    this->logUtil = LogUtil_getInstance();
}


// Java static initializer: call this once at startup
void AllMotionRectanglesResultsCacheSingleton_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        const char* instance = "MotionRectanglesResultsCacheSingleton";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, instance, STATIC_BLOCK);
            AllMotionRectanglesResultsCacheSingleton_cacheInterface = CacheInterfaceFactory_getInstance(CacheTypeFactory_getInstance()->CACHE, CachePolicyFactory_getInstance()->ONE_MINUTE_FIVE_MAX);
            LogUtil_putF(logUtil, commonStrings->END, instance, STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, instance, STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void AllMotionRectanglesResultsCacheSingleton_init(AllMotionRectanglesResultsCacheSingleton* this) {
    AllMotionRectanglesResultsCacheSingleton_initFields(this);
}

AllMotionRectanglesResultsCacheSingleton* AllMotionRectanglesResultsCacheSingleton_new(void) {
    AllMotionRectanglesResultsCacheSingleton* this = calloc(1, sizeof(AllMotionRectanglesResultsCacheSingleton));
    AllMotionRectanglesResultsCacheSingleton_init(this);
    return this;
}


CacheInterface* AllMotionRectanglesResultsCacheSingleton_getInstance(void) {
        return AllMotionRectanglesResultsCacheSingleton_cacheInterface;
}

