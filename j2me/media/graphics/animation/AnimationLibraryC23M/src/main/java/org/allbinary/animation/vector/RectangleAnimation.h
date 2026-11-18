#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_H
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

typedef struct RectangleAnimation RectangleAnimation;
struct RectangleAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
};


RectangleAnimation* RectangleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void RectangleAnimation_init(RectangleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);

void RectangleAnimation_nextFrame(RectangleAnimation* this);

void RectangleAnimation_paintXY(RectangleAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void RectangleAnimation_setWidth(RectangleAnimation* this, int32_t width);

void RectangleAnimation_setHeight(RectangleAnimation* this, int32_t height);

BasicColor* RectangleAnimation_getBasicColorP(RectangleAnimation* this);

void RectangleAnimation_setBasicColorP(RectangleAnimation* this, BasicColor* basicColor);
#define RectangleAnimation_new3 RectangleAnimation_new
#define RectangleAnimation_init3 RectangleAnimation_init
#ifndef RectangleAnimation_setAlpha
#define RectangleAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RectangleAnimation_paintThreedXYZ
#define RectangleAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RectangleAnimation_isThreed
#define RectangleAnimation_isThreed Animation_isThreed
#endif
#ifndef RectangleAnimation_setBackgroundBasicColorP
#define RectangleAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RectangleAnimation_getChangeBasicColor
#define RectangleAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RectangleAnimation_changeBasicColor
#define RectangleAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RectangleAnimation_getChangeColor
#define RectangleAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RectangleAnimation_getColor
#define RectangleAnimation_getColor Animation_getColor
#endif
#ifndef RectangleAnimation_setScale
#define RectangleAnimation_setScale Animation_setScale
#endif
#ifndef RectangleAnimation_setMaxScale
#define RectangleAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RectangleAnimation_set
#define RectangleAnimation_set Animation_set
#endif
#ifndef RectangleAnimation_setDx
#define RectangleAnimation_setDx Animation_setDx
#endif
#ifndef RectangleAnimation_getDx
#define RectangleAnimation_getDx Animation_getDx
#endif
#ifndef RectangleAnimation_setDy
#define RectangleAnimation_setDy Animation_setDy
#endif
#ifndef RectangleAnimation_getDy
#define RectangleAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_H
