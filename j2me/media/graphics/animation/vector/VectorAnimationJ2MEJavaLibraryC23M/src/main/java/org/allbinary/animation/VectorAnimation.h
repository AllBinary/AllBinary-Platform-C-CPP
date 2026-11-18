#ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
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
typedef struct IndexedAnimation IndexedAnimation;
typedef struct VectorAnimationInterface VectorAnimationInterface;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct NullUtil NullUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
// #include "javax/microedition/lcdui/NullImage.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"

typedef struct VectorAnimation VectorAnimation;
struct VectorAnimation {
    IndexedAnimation base;
    VectorAnimationInterface VectorAnimationInterface_interface;
    int32_t*** currentPoints;
    CircularIndexUtil* circularIndexUtil;
};


VectorAnimation* VectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

VectorAnimation* VectorAnimation_createVectorAnimation(int32_t** currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorAnimation_init(VectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorAnimation_setBasicColorP(VectorAnimation* this, BasicColor* basicColor);

void VectorAnimation_changeBasicColor(VectorAnimation* this, BasicColor* basicColor);

void VectorAnimation_setAlpha(VectorAnimation* this, int32_t alpha);

void VectorAnimation_setScale(VectorAnimation* this, float scaleX, float scaleY);

void VectorAnimation_setMaxScale(VectorAnimation* this, float maxScaleX, float maxScaleY);


int32_t VectorAnimation_getAnimationSize(VectorAnimation* this);

int32_t VectorAnimation_getSize(VectorAnimation* this);

void VectorAnimation_setSequence(VectorAnimation* this, int32_t* sequence);

int32_t* VectorAnimation_getSequence(VectorAnimation* this);

void VectorAnimation_nextFrame(VectorAnimation* this);

void VectorAnimation_previousFrame(VectorAnimation* this);

void VectorAnimation_paintVectors(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void VectorAnimation_paintXY(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);

int32_t VectorAnimation_getFrame(VectorAnimation* this);

void VectorAnimation_setFrame(VectorAnimation* this, int32_t index);

int32_t** VectorAnimation_getPoints(VectorAnimation* this, int32_t frame);

void VectorAnimation_setPoints(VectorAnimation* this, int32_t*** currentPoints);

BasicColor* VectorAnimation_getBasicColorP(VectorAnimation* this);
#define VectorAnimation_new3 VectorAnimation_new
#define VectorAnimation_init3 VectorAnimation_init
#ifndef VectorAnimation_getAnimationBehavior
#define VectorAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef VectorAnimation_reset
#define VectorAnimation_reset IndexedAnimation_reset
#endif
#ifndef VectorAnimation_isLastFrame
#define VectorAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef VectorAnimation_setState
#define VectorAnimation_setState IndexedAnimation_setState
#endif
#ifndef VectorAnimation_getWidth
#define VectorAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef VectorAnimation_getHeight
#define VectorAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef VectorAnimation_paintThreedXYZ
#define VectorAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef VectorAnimation_isThreed
#define VectorAnimation_isThreed Animation_isThreed
#endif
#ifndef VectorAnimation_setBackgroundBasicColorP
#define VectorAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef VectorAnimation_getChangeBasicColor
#define VectorAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef VectorAnimation_getChangeColor
#define VectorAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef VectorAnimation_getColor
#define VectorAnimation_getColor Animation_getColor
#endif
#ifndef VectorAnimation_set
#define VectorAnimation_set Animation_set
#endif
#ifndef VectorAnimation_setDx
#define VectorAnimation_setDx Animation_setDx
#endif
#ifndef VectorAnimation_getDx
#define VectorAnimation_getDx Animation_getDx
#endif
#ifndef VectorAnimation_setDy
#define VectorAnimation_setDy Animation_setDy
#endif
#ifndef VectorAnimation_getDy
#define VectorAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
