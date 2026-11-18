#ifndef ORG_ALLBINARY_ANIMATION_ANIMATION_H
#define ORG_ALLBINARY_ANIMATION_ANIMATION_H
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
typedef struct AnimationInterface AnimationInterface;
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/animation/AnimationInterface.h"

typedef struct Animation Animation;
struct Animation {
    AnimationInterface AnimationInterface_interface;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* basicColor;
    int32_t colorP;
    BasicColor* changeBasicColorP;
    int32_t changeColorP;
    int32_t alphaP;
};


Animation* Animation_new(void);

void Animation_init(Animation* this);

void Animation_setAlpha(Animation* this, int32_t alpha);

void Animation_nextFrame(Animation* this);

void Animation_paintXY(Animation* this, Graphics* graphics, int32_t x, int32_t y);

void Animation_paintThreedXYZ(Animation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

bool Animation_isThreed(Animation* this);

BasicColor* Animation_getBasicColorP(Animation* this);

void Animation_setBasicColorP(Animation* this, BasicColor* basicColor);

void Animation_setBackgroundBasicColorP(Animation* this, BasicColor* basicColor);

BasicColor* Animation_getChangeBasicColor(Animation* this);

void Animation_changeBasicColor(Animation* this, BasicColor* basicColor);

int32_t Animation_getChangeColor(Animation* this);

int32_t Animation_getColor(Animation* this);

void Animation_setScale(Animation* this, float scaleX, float scaleY);

void Animation_setMaxScale(Animation* this, float maxScaleX, float maxScaleY);

void Animation_set(Animation* this, GL* gl);

void Animation_setDx(Animation* this, int32_t dx);

int32_t Animation_getDx(Animation* this);

void Animation_setDy(Animation* this, int32_t dy);

int32_t Animation_getDy(Animation* this);
#define Animation_new0 Animation_new
#define Animation_init0 Animation_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Animation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Animation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_ANIMATION_H
