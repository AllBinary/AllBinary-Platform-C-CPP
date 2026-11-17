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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"

typedef struct BasicArrayListPool BasicArrayListPool;
struct BasicArrayListPool {
    AbstractArrayListPool base;
};


BasicArrayListPool* BasicArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListPool_init(BasicArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);
void BasicArrayListPool_clear(BasicArrayListPool* this);
CacheableInterface* BasicArrayListPool_remove(BasicArrayListPool* this, Any* key);
void BasicArrayListPool_addAll(BasicArrayListPool* this, BasicArrayList* usedList);
void BasicArrayListPool_releaseUsedBackToPool(BasicArrayListPool* this, BasicArrayList* usedList);


void BasicArrayListPool_init(BasicArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
        AbstractArrayListPool_init(&this->base, cacheableInterfaceFactoryInterface);
}

BasicArrayListPool* BasicArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListPool* this = calloc(1, sizeof(BasicArrayListPool));
    BasicArrayListPool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


void BasicArrayListPool_clear(BasicArrayListPool* this) {
        JAVA_CALL(this->buffers, clear);
}


// throws Exception
CacheableInterface* BasicArrayListPool_remove(BasicArrayListPool* this, Any* key) {
        int32_t size = JAVA_CALL(this->buffers, size);
        if (size > 0) {
            return ((CacheableInterface*) JAVA_CALL(this->buffers, removeAt, size - 1));
        } else {
            return CacheableInterfaceFactoryInterface_getInstance(this->cacheableInterfaceFactoryInterface, key);
        }
}


// throws Exception
void BasicArrayListPool_addAll(BasicArrayListPool* this, BasicArrayList* usedList) {
        for (int32_t index = BasicArrayList_size(usedList); --index >= 0; ) {
            CacheableInterface* anyType = ((CacheableInterface*) usedList->objectArray[index]);
            BasicArrayListPool_add(this, anyType);
        }
        BasicArrayList_clear(usedList);
}


// throws Exception
void BasicArrayListPool_releaseUsedBackToPool(BasicArrayListPool* this, BasicArrayList* usedList) {
        for (int32_t index = BasicArrayList_size(usedList); --index >= 0; ) {
            BasicArrayListCacheable* list = ((BasicArrayListCacheable*) usedList->objectArray[index]);
            if (BasicArrayListCacheable_size(list) == 0) {
                BasicArrayList_removeAt(usedList, index);
                BasicArrayListPool_add(this, list);
            }
        }
}

