#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACE_H
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
typedef struct Graphics Graphics;
typedef struct LocationPaintableInterface LocationPaintableInterface;
#include "org/allbinary/graphics/paint/LocationPaintableInterface.h"

typedef struct AnimationInterface AnimationInterface;
struct AnimationInterface {
    void (*nextFrame)(void* this);
    void (*paintThreedXYZ)(void* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationInterface_staticInit(void);

static inline void AnimationInterface_nextFrame(void* this) {
    ((__typeof__(((AnimationInterface*) nullptr)->nextFrame)) java_method_of(this, "nextFrame"))(this);
}

static inline void AnimationInterface_paintThreedXYZ(void* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
    ((__typeof__(((AnimationInterface*) nullptr)->paintThreedXYZ)) java_method_of(this, "paintThreedXYZ"))(this, graphics, x, y, z);
}
#define AnimationInterface_paintXY LocationPaintableInterface_paintXY


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACE_H
