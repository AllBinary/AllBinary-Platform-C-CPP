#ifndef ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H
#define ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct RectangleCollisionUtil RectangleCollisionUtil;
typedef struct GPoint GPoint;
typedef struct BasicArrayList BasicArrayList;

typedef struct RectangleCollisionPointUtil RectangleCollisionPointUtil;
struct RectangleCollisionPointUtil {
    char unused;
};


RectangleCollisionPointUtil* RectangleCollisionPointUtil_new(void);

void RectangleCollisionPointUtil_init(RectangleCollisionPointUtil* this);

bool RectangleCollisionPointUtil_allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list);

bool RectangleCollisionPointUtil_allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list, int32_t xCellSize, int32_t yCellSize);
#define RectangleCollisionPointUtil_new0 RectangleCollisionPointUtil_new
#define RectangleCollisionPointUtil_init0 RectangleCollisionPointUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleCollisionPointUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleCollisionPointUtil_register(void);


#endif // ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H
