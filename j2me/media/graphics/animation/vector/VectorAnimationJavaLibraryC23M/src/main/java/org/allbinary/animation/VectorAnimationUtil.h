#ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H
#define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
typedef struct BasicArrayList BasicArrayList;

typedef struct VectorAnimationUtil VectorAnimationUtil;
struct VectorAnimationUtil {
    char unused;
};


VectorAnimationUtil* VectorAnimationUtil_new(void);

VectorAnimationUtil* VectorAnimationUtil_getInstance(void);

void VectorAnimationUtil_init(VectorAnimationUtil* this);

int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointListWithPointsPerFrame(VectorAnimationUtil* this, BasicArrayList* vector, int32_t pointsPerFrame);

int32_t*** VectorAnimationUtil_toAnimationArrayFromListOfPointList(VectorAnimationUtil* this, BasicArrayList* vector);

int32_t** VectorAnimationUtil_toFrameArrayFromPointBasicArrayList(VectorAnimationUtil* this, BasicArrayList* list);
#define VectorAnimationUtil_new0 VectorAnimationUtil_new
#define VectorAnimationUtil_init0 VectorAnimationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorAnimationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorAnimationUtil_register(void);


#endif // ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H
