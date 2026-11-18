#ifndef ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
#define ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
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
typedef struct GPoint GPoint;
#include "org/allbinary/graphics/GPoint.h"

typedef struct CustomGPoint CustomGPoint;
struct CustomGPoint {
    GPoint base;
    int32_t cx;
    int32_t cy;
    int32_t cz;
};

extern CustomGPoint* CustomGPoint_NULL_CUSTOM_POINT;

CustomGPoint* CustomGPoint_new(int32_t x, int32_t y, int32_t z);

CustomGPoint* CustomGPoint_getInstance(GPoint* point);

CustomGPoint* CustomGPoint_getInstance3(int32_t x, int32_t y);

void CustomGPoint_init(CustomGPoint* this, int32_t x, int32_t y, int32_t z);

void CustomGPoint_setX(CustomGPoint* this, int32_t x);

int32_t CustomGPoint_getX(CustomGPoint* this);

void CustomGPoint_setY(CustomGPoint* this, int32_t y);

int32_t CustomGPoint_getY(CustomGPoint* this);

void CustomGPoint_setZ(CustomGPoint* this, int32_t z);

int32_t CustomGPoint_getZ(CustomGPoint* this);
#define CustomGPoint_new3 CustomGPoint_new
#define CustomGPoint_init3 CustomGPoint_init
#ifndef CustomGPoint_getRawX
#define CustomGPoint_getRawX GPoint_getRawX
#endif
#ifndef CustomGPoint_getRawY
#define CustomGPoint_getRawY GPoint_getRawY
#endif
#ifndef CustomGPoint_getRawZ
#define CustomGPoint_getRawZ GPoint_getRawZ
#endif
#ifndef CustomGPoint_toString
#define CustomGPoint_toString GPoint_toString
#endif
#ifndef CustomGPoint_toStringStatic
#define CustomGPoint_toStringStatic GPoint_toStringStatic
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomGPoint_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomGPoint_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
