#ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H
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
typedef struct VectorAnimation VectorAnimation;
typedef struct BasicColor BasicColor;

typedef struct VectorAnimationFactoryInterface VectorAnimationFactoryInterface;
struct VectorAnimationFactoryInterface {
    VectorAnimation* (*getInstance)(void* this, int32_t*** points, BasicColor* basicColor);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorAnimationFactoryInterface_staticInit(void);

static inline VectorAnimation* VectorAnimationFactoryInterface_getInstance(void* this, int32_t*** points, BasicColor* basicColor) {
    return ((__typeof__(((VectorAnimationFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, points, basicColor);
}


#endif // ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H
