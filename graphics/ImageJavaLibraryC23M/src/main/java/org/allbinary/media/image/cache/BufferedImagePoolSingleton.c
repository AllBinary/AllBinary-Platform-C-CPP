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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/PoolInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/PoolTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BufferedImagePoolSingleton BufferedImagePoolSingleton;
struct BufferedImagePoolSingleton {
    char unused;
};

static PoolInterface* BufferedImagePoolSingleton_poolInterface = nullptr;

BufferedImagePoolSingleton* BufferedImagePoolSingleton_new(void);

void BufferedImagePoolSingleton_init(BufferedImagePoolSingleton* this);
PoolInterface* BufferedImagePoolSingleton_getInstance(void);


// Java static initializer: call this once at startup
void BufferedImagePoolSingleton_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        const char* instance = "BufferedImagePoolSingleton";
        JAVA_TRY {
            LogUtil_putF(logUtil, commonStrings->START, instance, STATIC_BLOCK);
            BufferedImagePoolSingleton_poolInterface = PoolInterfaceFactory_getInstance(BufferedImageCacheableFactory_new(), PoolTypeFactory_getInstance()->VECTOR_POOL, CachePolicyFactory_getInstance()->MAX_TIME_THOUSAND_MAX);
            LogUtil_putF(logUtil, commonStrings->END, instance, STATIC_BLOCK);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, instance, STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void BufferedImagePoolSingleton_init(BufferedImagePoolSingleton* this) {
}

BufferedImagePoolSingleton* BufferedImagePoolSingleton_new(void) {
    BufferedImagePoolSingleton* this = calloc(1, sizeof(BufferedImagePoolSingleton));
    BufferedImagePoolSingleton_init(this);
    return this;
}


PoolInterface* BufferedImagePoolSingleton_getInstance(void) {
        return BufferedImagePoolSingleton_poolInterface;
}

