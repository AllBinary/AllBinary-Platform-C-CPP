#ifndef ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
#define ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
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
typedef struct GPoint GPoint;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct MathUtil MathUtil;
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif

typedef struct LayerDistanceUtil LayerDistanceUtil;
struct LayerDistanceUtil {
    MathUtil* mathUtil;
};


LayerDistanceUtil* LayerDistanceUtil_new(void);
void LayerDistanceUtil_init(LayerDistanceUtil* this);

LayerDistanceUtil* LayerDistanceUtil_getInstance(void);

int32_t LayerDistanceUtil_getDistance(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);

int32_t LayerDistanceUtil_getDistance3D(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);

int32_t LayerDistanceUtil_getDistanceAt(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, GPoint* point);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerDistanceUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerDistanceUtil_register(void);


#endif // ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
