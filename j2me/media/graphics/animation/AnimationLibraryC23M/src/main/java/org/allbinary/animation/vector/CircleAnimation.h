#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H
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
typedef struct AngleFactory AngleFactory;
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"

typedef struct CircleAnimation CircleAnimation;
struct CircleAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t TOTAL_ANGLE;
    int32_t width;
    int32_t height;
};


CircleAnimation* CircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void CircleAnimation_init(CircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);

void CircleAnimation_nextFrame(CircleAnimation* this);

void CircleAnimation_paintXY(CircleAnimation* this, Graphics* graphics, int32_t x, int32_t y);

BasicColor* CircleAnimation_getBasicColorP(CircleAnimation* this);

void CircleAnimation_setBasicColorP(CircleAnimation* this, BasicColor* basicColor);
#define CircleAnimation_new3 CircleAnimation_new
#define CircleAnimation_init3 CircleAnimation_init
#ifndef CircleAnimation_setAlpha
#define CircleAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CircleAnimation_paintThreedXYZ
#define CircleAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef CircleAnimation_isThreed
#define CircleAnimation_isThreed Animation_isThreed
#endif
#ifndef CircleAnimation_setBackgroundBasicColorP
#define CircleAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CircleAnimation_getChangeBasicColor
#define CircleAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CircleAnimation_changeBasicColor
#define CircleAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CircleAnimation_getChangeColor
#define CircleAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CircleAnimation_getColor
#define CircleAnimation_getColor Animation_getColor
#endif
#ifndef CircleAnimation_setScale
#define CircleAnimation_setScale Animation_setScale
#endif
#ifndef CircleAnimation_setMaxScale
#define CircleAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CircleAnimation_set
#define CircleAnimation_set Animation_set
#endif
#ifndef CircleAnimation_setDx
#define CircleAnimation_setDx Animation_setDx
#endif
#ifndef CircleAnimation_getDx
#define CircleAnimation_getDx Animation_getDx
#endif
#ifndef CircleAnimation_setDy
#define CircleAnimation_setDy Animation_setDy
#endif
#ifndef CircleAnimation_getDy
#define CircleAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CircleAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CircleAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_H
