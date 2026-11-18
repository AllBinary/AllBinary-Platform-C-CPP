#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
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
typedef struct AbstractArrayListPool AbstractArrayListPool;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct CacheableInterface CacheableInterface;
typedef struct BasicArrayListCacheable BasicArrayListCacheable;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"

typedef struct BasicArrayListPool BasicArrayListPool;
struct BasicArrayListPool {
    AbstractArrayListPool base;
};


BasicArrayListPool* BasicArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListPool_init(BasicArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListPool_clear(BasicArrayListPool* this);

CacheableInterface* BasicArrayListPool_remove(BasicArrayListPool* this, void* key);

void BasicArrayListPool_addAll(BasicArrayListPool* this, BasicArrayList* usedList);

void BasicArrayListPool_releaseUsedBackToPool(BasicArrayListPool* this, BasicArrayList* usedList);
#define BasicArrayListPool_new1 BasicArrayListPool_new
#define BasicArrayListPool_init1 BasicArrayListPool_init
#ifndef BasicArrayListPool_add
#define BasicArrayListPool_add AbstractArrayListPool_add
#endif
#ifndef BasicArrayListPool_addArray
#define BasicArrayListPool_addArray AbstractArrayListPool_addArray
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListPool_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
