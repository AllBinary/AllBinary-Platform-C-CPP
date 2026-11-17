#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_ALLBINARYOBJECTFACTORYINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ALLBINARYOBJECTFACTORYINTERFACE_H
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

typedef struct AllBinaryObjectFactoryInterface AllBinaryObjectFactoryInterface;
struct AllBinaryObjectFactoryInterface {
    void* (*getInstance)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryObjectFactoryInterface_staticInit(void);

static inline void* AllBinaryObjectFactoryInterface_getInstance(void* this) {
    return ((__typeof__(((AllBinaryObjectFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_ALLBINARYOBJECTFACTORYINTERFACE_H
