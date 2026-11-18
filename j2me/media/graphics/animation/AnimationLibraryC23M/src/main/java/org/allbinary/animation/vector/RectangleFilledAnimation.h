#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H
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

typedef struct RectangleFilledAnimation RectangleFilledAnimation;
struct RectangleFilledAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t widthP;
    int32_t heightP;
};


RectangleFilledAnimation* RectangleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void RectangleFilledAnimation_init(RectangleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);

void RectangleFilledAnimation_nextFrame(RectangleFilledAnimation* this);

void RectangleFilledAnimation_paintXY(RectangleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void RectangleFilledAnimation_setWidth(RectangleFilledAnimation* this, int32_t width);

void RectangleFilledAnimation_setHeight(RectangleFilledAnimation* this, int32_t height);

BasicColor* RectangleFilledAnimation_getBasicColorP(RectangleFilledAnimation* this);

void RectangleFilledAnimation_setBasicColorP(RectangleFilledAnimation* this, BasicColor* basicColor);
#define RectangleFilledAnimation_new3 RectangleFilledAnimation_new
#define RectangleFilledAnimation_init3 RectangleFilledAnimation_init
#ifndef RectangleFilledAnimation_setAlpha
#define RectangleFilledAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RectangleFilledAnimation_paintThreedXYZ
#define RectangleFilledAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RectangleFilledAnimation_isThreed
#define RectangleFilledAnimation_isThreed Animation_isThreed
#endif
#ifndef RectangleFilledAnimation_setBackgroundBasicColorP
#define RectangleFilledAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RectangleFilledAnimation_getChangeBasicColor
#define RectangleFilledAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RectangleFilledAnimation_changeBasicColor
#define RectangleFilledAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RectangleFilledAnimation_getChangeColor
#define RectangleFilledAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RectangleFilledAnimation_getColor
#define RectangleFilledAnimation_getColor Animation_getColor
#endif
#ifndef RectangleFilledAnimation_setScale
#define RectangleFilledAnimation_setScale Animation_setScale
#endif
#ifndef RectangleFilledAnimation_setMaxScale
#define RectangleFilledAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RectangleFilledAnimation_set
#define RectangleFilledAnimation_set Animation_set
#endif
#ifndef RectangleFilledAnimation_setDx
#define RectangleFilledAnimation_setDx Animation_setDx
#endif
#ifndef RectangleFilledAnimation_getDx
#define RectangleFilledAnimation_getDx Animation_getDx
#endif
#ifndef RectangleFilledAnimation_setDy
#define RectangleFilledAnimation_setDy Animation_setDy
#endif
#ifndef RectangleFilledAnimation_getDy
#define RectangleFilledAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleFilledAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleFilledAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDANIMATION_H
