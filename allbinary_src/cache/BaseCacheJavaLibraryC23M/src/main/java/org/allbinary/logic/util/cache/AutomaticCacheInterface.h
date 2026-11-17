#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACE_H
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
typedef struct CacheInterface CacheInterface;
typedef struct CacheableInterface CacheableInterface;
#include "org/allbinary/logic/util/cache/CacheInterface.h"

typedef struct AutomaticCacheInterface AutomaticCacheInterface;
struct AutomaticCacheInterface {
    CacheableInterface* (*get)(void* this, void* key);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AutomaticCacheInterface_staticInit(void);

static inline CacheableInterface* AutomaticCacheInterface_get(void* this, void* key) {
    return ((__typeof__(((AutomaticCacheInterface*) nullptr)->get)) java_method_of(this, "get"))(this, key);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACE_H
