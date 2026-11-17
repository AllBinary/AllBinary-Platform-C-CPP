#ifndef ORG_ALLBINARY_MATH_DISTANCEUTIL_H
#define ORG_ALLBINARY_MATH_DISTANCEUTIL_H
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
typedef struct MathUtil MathUtil;
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif

typedef struct DistanceUtil DistanceUtil;
struct DistanceUtil {
    MathUtil* mathUtil;
};


DistanceUtil* DistanceUtil_new(void);
void DistanceUtil_init(DistanceUtil* this);

DistanceUtil* DistanceUtil_getInstance(void);

int32_t DistanceUtil_getDistance(DistanceUtil* this, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DistanceUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DistanceUtil_register(void);


#endif // ORG_ALLBINARY_MATH_DISTANCEUTIL_H
