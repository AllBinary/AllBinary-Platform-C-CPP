#ifndef ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
#define ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct CircularIndexUtil CircularIndexUtil;
struct CircularIndexUtil {
    int32_t index;
    int32_t lastIndex;
    int32_t size;
};

extern CircularIndexUtil* CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL;

CircularIndexUtil* CircularIndexUtil_new(int32_t index, int32_t size);

void CircularIndexUtil_init(CircularIndexUtil* this, int32_t index, int32_t size);

int32_t CircularIndexUtil_next(CircularIndexUtil* this);

int32_t CircularIndexUtil_previous(CircularIndexUtil* this);

void CircularIndexUtil_setIndex(CircularIndexUtil* this, int32_t index);

int32_t CircularIndexUtil_getIndex(CircularIndexUtil* this);

CircularIndexUtil* CircularIndexUtil_createInstance(int32_t max);

CircularIndexUtil* CircularIndexUtil_createInstanceAt(int32_t index, int32_t max);

void CircularIndexUtil_setSize(CircularIndexUtil* this, int32_t size);

int32_t CircularIndexUtil_getSize(CircularIndexUtil* this);

const char* CircularIndexUtil_toString(CircularIndexUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CircularIndexUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CircularIndexUtil_register(void);


#endif // ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
