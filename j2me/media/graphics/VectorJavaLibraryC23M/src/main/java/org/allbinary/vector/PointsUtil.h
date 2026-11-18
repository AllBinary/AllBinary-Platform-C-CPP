#ifndef ORG_ALLBINARY_VECTOR_POINTSUTIL_H
#define ORG_ALLBINARY_VECTOR_POINTSUTIL_H
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
// package org.allbinary.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PointsUtil PointsUtil;
struct PointsUtil {
    char unused;
};


PointsUtil* PointsUtil_new(void);
void PointsUtil_init(PointsUtil* this);

PointsUtil* PointsUtil_getInstance(void);

int32_t*** PointsUtil_adjustXY(PointsUtil* this, int32_t*** points, int32_t x, int32_t y);

int32_t** PointsUtil_adjust3(PointsUtil* this, int32_t** points, int32_t both);

int32_t** PointsUtil_adjust4(PointsUtil* this, int32_t** points, int32_t x, int32_t y);
#define PointsUtil_adjust(...) JAVA_OVERLOADED(PointsUtil_adjust, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PointsUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PointsUtil_register(void);


#endif // ORG_ALLBINARY_VECTOR_POINTSUTIL_H
