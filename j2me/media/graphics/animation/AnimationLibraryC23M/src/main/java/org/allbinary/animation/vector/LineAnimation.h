#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
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
typedef struct PositionInterface PositionInterface;
typedef struct NullUtil NullUtil;
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/layer/PositionInterface.h"

typedef struct LineAnimation LineAnimation;
struct LineAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    PositionInterface PositionInterface_interface;
    int32_t** newLine;
    int32_t** tempLine;
    int32_t** line;
};


LineAnimation* LineAnimation_new(BasicColor* basicColor);

void LineAnimation_init(LineAnimation* this, BasicColor* basicColor);

void LineAnimation_initMethod(LineAnimation* this, int32_t x, int32_t y);

void LineAnimation_setPosition(LineAnimation* this, int32_t x, int32_t y, int32_t z);

void LineAnimation_paintXY(LineAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void LineAnimation_nextFrame(LineAnimation* this);

BasicColor* LineAnimation_getBasicColorP(LineAnimation* this);

void LineAnimation_setBasicColorP(LineAnimation* this, BasicColor* basicColor);
#define LineAnimation_new1 LineAnimation_new
#define LineAnimation_init1 LineAnimation_init
#ifndef LineAnimation_setAlpha
#define LineAnimation_setAlpha Animation_setAlpha
#endif
#ifndef LineAnimation_paintThreedXYZ
#define LineAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef LineAnimation_isThreed
#define LineAnimation_isThreed Animation_isThreed
#endif
#ifndef LineAnimation_setBackgroundBasicColorP
#define LineAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef LineAnimation_getChangeBasicColor
#define LineAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef LineAnimation_changeBasicColor
#define LineAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef LineAnimation_getChangeColor
#define LineAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef LineAnimation_getColor
#define LineAnimation_getColor Animation_getColor
#endif
#ifndef LineAnimation_setScale
#define LineAnimation_setScale Animation_setScale
#endif
#ifndef LineAnimation_setMaxScale
#define LineAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef LineAnimation_set
#define LineAnimation_set Animation_set
#endif
#ifndef LineAnimation_setDx
#define LineAnimation_setDx Animation_setDx
#endif
#ifndef LineAnimation_getDx
#define LineAnimation_getDx Animation_getDx
#endif
#ifndef LineAnimation_setDy
#define LineAnimation_setDy Animation_setDy
#endif
#ifndef LineAnimation_getDy
#define LineAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LineAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LineAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
