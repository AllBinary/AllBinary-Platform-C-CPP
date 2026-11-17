#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
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
typedef struct CacheableInterface CacheableInterface;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"

typedef struct CacheInterface CacheInterface;
struct CacheInterface {
    void (*add)(void* this, CacheableInterface* cacheableInterface);
    void (*addArray)(void* this, CacheableInterface** cacheableInterfaces);
    void (*clear)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CacheInterface_staticInit(void);

static inline void CacheInterface_add(void* this, CacheableInterface* cacheableInterface) {
    ((__typeof__(((CacheInterface*) nullptr)->add)) java_method_of(this, "add"))(this, cacheableInterface);
}

static inline void CacheInterface_addArray(void* this, CacheableInterface** cacheableInterfaces) {
    ((__typeof__(((CacheInterface*) nullptr)->addArray)) java_method_of(this, "addArray"))(this, cacheableInterfaces);
}

static inline void CacheInterface_clear(void* this) {
    ((__typeof__(((CacheInterface*) nullptr)->clear)) java_method_of(this, "clear"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
