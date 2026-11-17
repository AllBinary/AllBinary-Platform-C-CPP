#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
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
typedef struct IndexedBasicArrayListCache IndexedBasicArrayListCache;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"

typedef struct KeylessBasicArrayListCache KeylessBasicArrayListCache;
struct KeylessBasicArrayListCache {
    IndexedBasicArrayListCache base;
    LogUtil* logUtil;
    BasicArrayListUtil* basicArrayListUtil;
};


KeylessBasicArrayListCache* KeylessBasicArrayListCache_new(void);

void KeylessBasicArrayListCache_init(KeylessBasicArrayListCache* this);

BasicArrayList* KeylessBasicArrayListCache_get(KeylessBasicArrayListCache* this);

void KeylessBasicArrayListCache_clear(KeylessBasicArrayListCache* this);

const char* KeylessBasicArrayListCache_log(KeylessBasicArrayListCache* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeylessBasicArrayListCache_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeylessBasicArrayListCache_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
