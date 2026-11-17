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
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"

typedef struct BasicArrayListResetablePool BasicArrayListResetablePool;
struct BasicArrayListResetablePool {
    AbstractArrayListPool base;
};


BasicArrayListResetablePool* BasicArrayListResetablePool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListResetablePool_init(BasicArrayListResetablePool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);
void BasicArrayListResetablePool_clear(BasicArrayListResetablePool* this);
CacheableInterface* BasicArrayListResetablePool_remove(BasicArrayListResetablePool* this, Any* key);


void BasicArrayListResetablePool_init(BasicArrayListResetablePool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
        AbstractArrayListPool_init(&this->base, cacheableInterfaceFactoryInterface);
}

BasicArrayListResetablePool* BasicArrayListResetablePool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListResetablePool* this = calloc(1, sizeof(BasicArrayListResetablePool));
    BasicArrayListResetablePool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


void BasicArrayListResetablePool_clear(BasicArrayListResetablePool* this) {
}


// throws Exception
CacheableInterface* BasicArrayListResetablePool_remove(BasicArrayListResetablePool* this, Any* key) {
        int32_t size = JAVA_CALL(this->buffers, size);
        if (size > 0) {
            return ((CacheableInterface*) JAVA_CALL(this->buffers, removeAt, size - 1));
        } else {
            return CacheableInterfaceFactoryInterface_getInstance(this->cacheableInterfaceFactoryInterface, key);
        }
}

