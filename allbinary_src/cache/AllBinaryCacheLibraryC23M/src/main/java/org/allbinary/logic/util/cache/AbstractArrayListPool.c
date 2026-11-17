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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"

typedef struct AbstractArrayListPool AbstractArrayListPool;
struct AbstractArrayListPool {
    PoolInterface PoolInterface_interface;
    CommonStrings* commonStrings;
    BasicArrayList* buffers;
    CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface;
};


AbstractArrayListPool* AbstractArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void AbstractArrayListPool_init(AbstractArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);
void AbstractArrayListPool_clear(AbstractArrayListPool* this);
CacheableInterface* AbstractArrayListPool_remove(AbstractArrayListPool* this, Any* key);
void AbstractArrayListPool_add(AbstractArrayListPool* this, CacheableInterface* cacheableInterface);
void AbstractArrayListPool_addArray(AbstractArrayListPool* this, CacheableInterface** cacheableInterfaces);

static void AbstractArrayListPool_initFields(AbstractArrayListPool* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->buffers = BasicArrayListD_new();
    
}


void AbstractArrayListPool_init(AbstractArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    AbstractArrayListPool_initFields(this);
        this->cacheableInterfaceFactoryInterface = cacheableInterfaceFactoryInterface;
}

AbstractArrayListPool* AbstractArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    AbstractArrayListPool* this = calloc(1, sizeof(AbstractArrayListPool));
    AbstractArrayListPool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


// throws Exception
void AbstractArrayListPool_clear(AbstractArrayListPool* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
CacheableInterface* AbstractArrayListPool_remove(AbstractArrayListPool* this, Any* key) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void AbstractArrayListPool_add(AbstractArrayListPool* this, CacheableInterface* cacheableInterface) {
        BasicArrayList_add(this->buffers, cacheableInterface);
}


// throws Exception
void AbstractArrayListPool_addArray(AbstractArrayListPool* this, CacheableInterface** cacheableInterfaces) {
        for (int32_t index = 0; index < java_array_length(cacheableInterfaces); index++) {
            BasicArrayList_add(this->buffers, cacheableInterfaces[index]);
        }
}

