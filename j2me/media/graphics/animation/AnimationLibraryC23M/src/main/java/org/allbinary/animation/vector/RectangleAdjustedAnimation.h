#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
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

typedef struct RectangleAdjustedAnimation RectangleAdjustedAnimation;
struct RectangleAdjustedAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
    int32_t offsetX;
    int32_t offsetY;
};


RectangleAdjustedAnimation* RectangleAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleAdjustedAnimation_init(RectangleAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleAdjustedAnimation_nextFrame(RectangleAdjustedAnimation* this);

void RectangleAdjustedAnimation_paintXY(RectangleAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void RectangleAdjustedAnimation_setWidth(RectangleAdjustedAnimation* this, int32_t width);

void RectangleAdjustedAnimation_setHeight(RectangleAdjustedAnimation* this, int32_t height);

void RectangleAdjustedAnimation_setOffsetX(RectangleAdjustedAnimation* this, int32_t offsetX);

void RectangleAdjustedAnimation_setOffsetY(RectangleAdjustedAnimation* this, int32_t offsetY);

BasicColor* RectangleAdjustedAnimation_getBasicColorP(RectangleAdjustedAnimation* this);

void RectangleAdjustedAnimation_setBasicColorP(RectangleAdjustedAnimation* this, BasicColor* basicColor);
#define RectangleAdjustedAnimation_new5 RectangleAdjustedAnimation_new
#define RectangleAdjustedAnimation_init5 RectangleAdjustedAnimation_init
#ifndef RectangleAdjustedAnimation_setAlpha
#define RectangleAdjustedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RectangleAdjustedAnimation_paintThreedXYZ
#define RectangleAdjustedAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RectangleAdjustedAnimation_isThreed
#define RectangleAdjustedAnimation_isThreed Animation_isThreed
#endif
#ifndef RectangleAdjustedAnimation_setBackgroundBasicColorP
#define RectangleAdjustedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RectangleAdjustedAnimation_getChangeBasicColor
#define RectangleAdjustedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RectangleAdjustedAnimation_changeBasicColor
#define RectangleAdjustedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RectangleAdjustedAnimation_getChangeColor
#define RectangleAdjustedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RectangleAdjustedAnimation_getColor
#define RectangleAdjustedAnimation_getColor Animation_getColor
#endif
#ifndef RectangleAdjustedAnimation_setScale
#define RectangleAdjustedAnimation_setScale Animation_setScale
#endif
#ifndef RectangleAdjustedAnimation_setMaxScale
#define RectangleAdjustedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RectangleAdjustedAnimation_set
#define RectangleAdjustedAnimation_set Animation_set
#endif
#ifndef RectangleAdjustedAnimation_setDx
#define RectangleAdjustedAnimation_setDx Animation_setDx
#endif
#ifndef RectangleAdjustedAnimation_getDx
#define RectangleAdjustedAnimation_getDx Animation_getDx
#endif
#ifndef RectangleAdjustedAnimation_setDy
#define RectangleAdjustedAnimation_setDy Animation_setDy
#endif
#ifndef RectangleAdjustedAnimation_getDy
#define RectangleAdjustedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleAdjustedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleAdjustedAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_H
