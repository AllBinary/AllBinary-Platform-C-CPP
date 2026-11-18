#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
typedef struct CacheType CacheType;
#if __has_include("org/allbinary/logic/util/cache/CacheType.h")
#include "org/allbinary/logic/util/cache/CacheType.h"
#endif

typedef struct PoolType PoolType;
struct PoolType {
    CacheType* cacheType;
};


PoolType* PoolType_new(CacheType* cacheType);

void PoolType_init(PoolType* this, CacheType* cacheType);

CacheType* PoolType_getCacheType(PoolType* this);

const char* PoolType_toString(PoolType* this);
#define PoolType_new1 PoolType_new
#define PoolType_init1 PoolType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PoolType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PoolType_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPE_H
