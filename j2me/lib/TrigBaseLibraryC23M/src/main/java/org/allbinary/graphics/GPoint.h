#ifndef ORG_ALLBINARY_GRAPHICS_GPOINT_H
#define ORG_ALLBINARY_GRAPHICS_GPOINT_H
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;
typedef struct PositionStrings PositionStrings;
typedef struct CommonSeps CommonSeps;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"

typedef struct GPoint GPoint;
struct GPoint {
    int32_t x;
    int32_t y;
    int32_t z;
};


GPoint* GPoint_new(int32_t x, int32_t y, int32_t z);

GPoint* GPoint_getInstance(GPoint* point);

void GPoint_init(GPoint* this, int32_t x, int32_t y, int32_t z);

int32_t GPoint_getX(GPoint* this);

int32_t GPoint_getY(GPoint* this);

int32_t GPoint_getZ(GPoint* this);

int32_t GPoint_getRawX(GPoint* this);

int32_t GPoint_getRawY(GPoint* this);

int32_t GPoint_getRawZ(GPoint* this);

const char* GPoint_toString(GPoint* this);

const char* GPoint_toStringStatic(int32_t x, int32_t y, int32_t z);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GPoint_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GPoint_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_GPOINT_H
