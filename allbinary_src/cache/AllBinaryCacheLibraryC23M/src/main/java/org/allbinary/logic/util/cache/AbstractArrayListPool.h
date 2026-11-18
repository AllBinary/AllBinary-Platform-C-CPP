#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
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
typedef struct PoolInterface PoolInterface;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct CacheableInterface CacheableInterface;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#if __has_include("org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#endif

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

CacheableInterface* AbstractArrayListPool_remove(AbstractArrayListPool* this, void* key);

void AbstractArrayListPool_add(AbstractArrayListPool* this, CacheableInterface* cacheableInterface);

void AbstractArrayListPool_addArray(AbstractArrayListPool* this, CacheableInterface** cacheableInterfaces);
#define AbstractArrayListPool_new1 AbstractArrayListPool_new
#define AbstractArrayListPool_init1 AbstractArrayListPool_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbstractArrayListPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbstractArrayListPool_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
