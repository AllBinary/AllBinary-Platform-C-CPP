#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H
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
typedef struct RectangleFilledAnimation RectangleFilledAnimation;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct ColorCompositeInterface ColorCompositeInterface;
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

typedef struct RectangleFilledAdjustedAnimation RectangleFilledAdjustedAnimation;
struct RectangleFilledAdjustedAnimation {
    RectangleFilledAnimation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t offsetX;
    int32_t offsetY;
};


RectangleFilledAdjustedAnimation* RectangleFilledAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleFilledAdjustedAnimation_init(RectangleFilledAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleFilledAdjustedAnimation_nextFrame(RectangleFilledAdjustedAnimation* this);

void RectangleFilledAdjustedAnimation_paintXY(RectangleFilledAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void RectangleFilledAdjustedAnimation_setOffsetX(RectangleFilledAdjustedAnimation* this, int32_t offsetX);

void RectangleFilledAdjustedAnimation_setOffsetY(RectangleFilledAdjustedAnimation* this, int32_t offsetY);

BasicColor* RectangleFilledAdjustedAnimation_getBasicColorP(RectangleFilledAdjustedAnimation* this);

void RectangleFilledAdjustedAnimation_setBasicColorP(RectangleFilledAdjustedAnimation* this, BasicColor* basicColor);
#define RectangleFilledAdjustedAnimation_new5 RectangleFilledAdjustedAnimation_new
#define RectangleFilledAdjustedAnimation_init5 RectangleFilledAdjustedAnimation_init
#ifndef RectangleFilledAdjustedAnimation_setWidth
#define RectangleFilledAdjustedAnimation_setWidth RectangleFilledAnimation_setWidth
#endif
#ifndef RectangleFilledAdjustedAnimation_setHeight
#define RectangleFilledAdjustedAnimation_setHeight RectangleFilledAnimation_setHeight
#endif
#ifndef RectangleFilledAdjustedAnimation_setAlpha
#define RectangleFilledAdjustedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RectangleFilledAdjustedAnimation_paintThreedXYZ
#define RectangleFilledAdjustedAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RectangleFilledAdjustedAnimation_isThreed
#define RectangleFilledAdjustedAnimation_isThreed Animation_isThreed
#endif
#ifndef RectangleFilledAdjustedAnimation_setBackgroundBasicColorP
#define RectangleFilledAdjustedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RectangleFilledAdjustedAnimation_getChangeBasicColor
#define RectangleFilledAdjustedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RectangleFilledAdjustedAnimation_changeBasicColor
#define RectangleFilledAdjustedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RectangleFilledAdjustedAnimation_getChangeColor
#define RectangleFilledAdjustedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RectangleFilledAdjustedAnimation_getColor
#define RectangleFilledAdjustedAnimation_getColor Animation_getColor
#endif
#ifndef RectangleFilledAdjustedAnimation_setScale
#define RectangleFilledAdjustedAnimation_setScale Animation_setScale
#endif
#ifndef RectangleFilledAdjustedAnimation_setMaxScale
#define RectangleFilledAdjustedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RectangleFilledAdjustedAnimation_set
#define RectangleFilledAdjustedAnimation_set Animation_set
#endif
#ifndef RectangleFilledAdjustedAnimation_setDx
#define RectangleFilledAdjustedAnimation_setDx Animation_setDx
#endif
#ifndef RectangleFilledAdjustedAnimation_getDx
#define RectangleFilledAdjustedAnimation_getDx Animation_getDx
#endif
#ifndef RectangleFilledAdjustedAnimation_setDy
#define RectangleFilledAdjustedAnimation_setDy Animation_setDy
#endif
#ifndef RectangleFilledAdjustedAnimation_getDy
#define RectangleFilledAdjustedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleFilledAdjustedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleFilledAdjustedAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_H
