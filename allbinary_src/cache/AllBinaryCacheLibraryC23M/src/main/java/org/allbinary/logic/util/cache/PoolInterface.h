#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACE_H
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

typedef struct PoolInterface PoolInterface;
struct PoolInterface {
    CacheableInterface* (*remove)(void* this, void* key);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PoolInterface_staticInit(void);

static inline CacheableInterface* PoolInterface_remove(void* this, void* key) {
    return ((__typeof__(((PoolInterface*) nullptr)->remove)) java_method_of(this, "remove"))(this, key);
}
#define PoolInterface_add CacheInterface_add
#define PoolInterface_addArray CacheInterface_addArray
#define PoolInterface_clear CacheInterface_clear


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACE_H
