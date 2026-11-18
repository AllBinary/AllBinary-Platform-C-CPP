#ifndef ORG_ALLBINARY_GRAPHICS_GPOINTCIRCULARPOOL_H
#define ORG_ALLBINARY_GRAPHICS_GPOINTCIRCULARPOOL_H
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
typedef struct CustomGPoint CustomGPoint;
typedef struct BaseCircularPool BaseCircularPool;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/logic/util/cache/BaseCircularPool.h"

typedef struct GPointCircularPool GPointCircularPool;
struct GPointCircularPool {
    BaseCircularPool base;
};


GPointCircularPool* GPointCircularPool_new(int32_t size);

void GPointCircularPool_init(GPointCircularPool* this, int32_t size);
#define GPointCircularPool_new1 GPointCircularPool_new
#define GPointCircularPool_init1 GPointCircularPool_init
#ifndef GPointCircularPool_getNextInstance
#define GPointCircularPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef GPointCircularPool_getInstance
#define GPointCircularPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GPointCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GPointCircularPool_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_GPOINTCIRCULARPOOL_H
