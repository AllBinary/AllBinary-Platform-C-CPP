#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEABLEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEABLEINTERFACE_H
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
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"

typedef struct CacheableInterface CacheableInterface;
struct CacheableInterface {
    void* (*getKey)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CacheableInterface_staticInit(void);

static inline void* CacheableInterface_getKey(void* this) {
    return ((__typeof__(((CacheableInterface*) nullptr)->getKey)) java_method_of(this, "getKey"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEABLEINTERFACE_H
