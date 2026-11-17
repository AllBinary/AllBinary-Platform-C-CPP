#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
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
typedef struct AllBinaryObjectFactoryInterface AllBinaryObjectFactoryInterface;
typedef struct NullUtil NullUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct BaseCircularPool BaseCircularPool;
struct BaseCircularPool {
    CircularIndexUtil* circularIndexUtil;
    void** OBJECT_ARRAY;
};


BaseCircularPool* BaseCircularPool_new(void);
void BaseCircularPool_init(BaseCircularPool* this);

void* BaseCircularPool_getNextInstance(BaseCircularPool* this);

void BaseCircularPool_initMethod(BaseCircularPool* this, AllBinaryObjectFactoryInterface* allBinaryObjectFactoryInterface);

void* BaseCircularPool_getInstance(BaseCircularPool* this, int32_t index);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseCircularPool_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
