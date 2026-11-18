#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_H
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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct BasicColor BasicColor;
typedef struct ColorCompositeInterface ColorCompositeInterface;
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"

typedef struct CircleFilledAnimation CircleFilledAnimation;
struct CircleFilledAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
};


CircleFilledAnimation* CircleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void CircleFilledAnimation_init(CircleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);

void CircleFilledAnimation_nextFrame(CircleFilledAnimation* this);

void CircleFilledAnimation_paintXY(CircleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y);

BasicColor* CircleFilledAnimation_getBasicColorP(CircleFilledAnimation* this);

void CircleFilledAnimation_setBasicColorP(CircleFilledAnimation* this, BasicColor* basicColor);
#define CircleFilledAnimation_new3 CircleFilledAnimation_new
#define CircleFilledAnimation_init3 CircleFilledAnimation_init
#ifndef CircleFilledAnimation_setAlpha
#define CircleFilledAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CircleFilledAnimation_paintThreedXYZ
#define CircleFilledAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef CircleFilledAnimation_isThreed
#define CircleFilledAnimation_isThreed Animation_isThreed
#endif
#ifndef CircleFilledAnimation_setBackgroundBasicColorP
#define CircleFilledAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CircleFilledAnimation_getChangeBasicColor
#define CircleFilledAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CircleFilledAnimation_changeBasicColor
#define CircleFilledAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CircleFilledAnimation_getChangeColor
#define CircleFilledAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CircleFilledAnimation_getColor
#define CircleFilledAnimation_getColor Animation_getColor
#endif
#ifndef CircleFilledAnimation_setScale
#define CircleFilledAnimation_setScale Animation_setScale
#endif
#ifndef CircleFilledAnimation_setMaxScale
#define CircleFilledAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CircleFilledAnimation_set
#define CircleFilledAnimation_set Animation_set
#endif
#ifndef CircleFilledAnimation_setDx
#define CircleFilledAnimation_setDx Animation_setDx
#endif
#ifndef CircleFilledAnimation_getDx
#define CircleFilledAnimation_getDx Animation_getDx
#endif
#ifndef CircleFilledAnimation_setDy
#define CircleFilledAnimation_setDy Animation_setDy
#endif
#ifndef CircleFilledAnimation_getDy
#define CircleFilledAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CircleFilledAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CircleFilledAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_H
