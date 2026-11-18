#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTRESETABLEPOOL_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTRESETABLEPOOL_H
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
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"

typedef struct BasicArrayListResetablePool BasicArrayListResetablePool;
struct BasicArrayListResetablePool {
    AbstractArrayListPool base;
};


BasicArrayListResetablePool* BasicArrayListResetablePool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListResetablePool_init(BasicArrayListResetablePool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void BasicArrayListResetablePool_clear(BasicArrayListResetablePool* this);

CacheableInterface* BasicArrayListResetablePool_remove(BasicArrayListResetablePool* this, void* key);
#define BasicArrayListResetablePool_new1 BasicArrayListResetablePool_new
#define BasicArrayListResetablePool_init1 BasicArrayListResetablePool_init
#ifndef BasicArrayListResetablePool_add
#define BasicArrayListResetablePool_add AbstractArrayListPool_add
#endif
#ifndef BasicArrayListResetablePool_addArray
#define BasicArrayListResetablePool_addArray AbstractArrayListPool_addArray
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListResetablePool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListResetablePool_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTRESETABLEPOOL_H
