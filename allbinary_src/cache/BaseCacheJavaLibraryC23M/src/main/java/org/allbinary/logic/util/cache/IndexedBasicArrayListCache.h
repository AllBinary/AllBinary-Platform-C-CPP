#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H
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
typedef struct BaseBasicArrayListCache BaseBasicArrayListCache;
typedef struct CacheInterface CacheInterface;
typedef struct CacheableInterface CacheableInterface;
typedef struct CommonStrings CommonStrings;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"

typedef struct IndexedBasicArrayListCache IndexedBasicArrayListCache;
struct IndexedBasicArrayListCache {
    BaseBasicArrayListCache base;
    CacheInterface CacheInterface_interface;
    CommonStrings* commonStrings;
    int32_t size;
    int32_t index;
};


IndexedBasicArrayListCache* IndexedBasicArrayListCache_new(void);

IndexedBasicArrayListCache* IndexedBasicArrayListCache_createCache(int32_t size);

void IndexedBasicArrayListCache_init(IndexedBasicArrayListCache* this);

void IndexedBasicArrayListCache_initMethod(IndexedBasicArrayListCache* this, int32_t size);

void* IndexedBasicArrayListCache_getAt(IndexedBasicArrayListCache* this, int32_t index);

void IndexedBasicArrayListCache_addDefault(IndexedBasicArrayListCache* this);

void IndexedBasicArrayListCache_addObject(IndexedBasicArrayListCache* this, void* anyType);

void IndexedBasicArrayListCache_add(IndexedBasicArrayListCache* this, CacheableInterface* cacheableInterface);

void IndexedBasicArrayListCache_addArray(IndexedBasicArrayListCache* this, CacheableInterface** cacheableInterfaces);

void IndexedBasicArrayListCache_clear(IndexedBasicArrayListCache* this);
#define IndexedBasicArrayListCache_new0 IndexedBasicArrayListCache_new
#define IndexedBasicArrayListCache_init0 IndexedBasicArrayListCache_init
#ifndef IndexedBasicArrayListCache_log
#define IndexedBasicArrayListCache_log BaseBasicArrayListCache_log
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndexedBasicArrayListCache_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IndexedBasicArrayListCache_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_INDEXEDBASICARRAYLISTCACHE_H
