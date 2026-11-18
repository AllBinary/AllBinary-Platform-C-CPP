#ifndef ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
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
typedef struct RotationAnimation RotationAnimation;
typedef struct VectorAnimationInterface VectorAnimationInterface;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct NullUtil NullUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleInfo AngleInfo;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"

typedef struct VectorBaseRotationAnimation VectorBaseRotationAnimation;
struct VectorBaseRotationAnimation {
    RotationAnimation base;
    VectorAnimationInterface VectorAnimationInterface_interface;
    int32_t*** currentPoints;
};


VectorBaseRotationAnimation* VectorBaseRotationAnimation_new(AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorBaseRotationAnimation_init(VectorBaseRotationAnimation* this, AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

int32_t VectorBaseRotationAnimation_getAnimationSize(VectorBaseRotationAnimation* this);

int32_t VectorBaseRotationAnimation_getFrame(VectorBaseRotationAnimation* this);

void VectorBaseRotationAnimation_setFrame(VectorBaseRotationAnimation* this, int32_t index);

void VectorBaseRotationAnimation_nextFrame(VectorBaseRotationAnimation* this);

void VectorBaseRotationAnimation_previousFrame(VectorBaseRotationAnimation* this);

int32_t VectorBaseRotationAnimation_getSize(VectorBaseRotationAnimation* this);

void VectorBaseRotationAnimation_setSequence(VectorBaseRotationAnimation* this, int32_t* sequence);

int32_t* VectorBaseRotationAnimation_getSequence(VectorBaseRotationAnimation* this);

void VectorBaseRotationAnimation_paintXY(VectorBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

int32_t** VectorBaseRotationAnimation_getPoints(VectorBaseRotationAnimation* this, int32_t frame);

void VectorBaseRotationAnimation_setPoints(VectorBaseRotationAnimation* this, int32_t*** currentPoints);

BasicColor* VectorBaseRotationAnimation_getBasicColorP(VectorBaseRotationAnimation* this);

void VectorBaseRotationAnimation_setBasicColorP(VectorBaseRotationAnimation* this, BasicColor* basicColor);
#define VectorBaseRotationAnimation_new4 VectorBaseRotationAnimation_new
#define VectorBaseRotationAnimation_init4 VectorBaseRotationAnimation_init
#ifndef VectorBaseRotationAnimation_nextRotationX
#define VectorBaseRotationAnimation_nextRotationX RotationAnimation_nextRotationX
#endif
#ifndef VectorBaseRotationAnimation_previousRotationX
#define VectorBaseRotationAnimation_previousRotationX RotationAnimation_previousRotationX
#endif
#ifndef VectorBaseRotationAnimation_nextRotation
#define VectorBaseRotationAnimation_nextRotation RotationAnimation_nextRotation
#endif
#ifndef VectorBaseRotationAnimation_previousRotation
#define VectorBaseRotationAnimation_previousRotation RotationAnimation_previousRotation
#endif
#ifndef VectorBaseRotationAnimation_nextRotationZ
#define VectorBaseRotationAnimation_nextRotationZ RotationAnimation_nextRotationZ
#endif
#ifndef VectorBaseRotationAnimation_previousRotationZ
#define VectorBaseRotationAnimation_previousRotationZ RotationAnimation_previousRotationZ
#endif
#ifndef VectorBaseRotationAnimation_setFrameByDirection
#define VectorBaseRotationAnimation_setFrameByDirection RotationAnimation_setFrameByDirection
#endif
#ifndef VectorBaseRotationAnimation_setFrameToAngle
#define VectorBaseRotationAnimation_setFrameToAngle RotationAnimation_setFrameToAngle
#endif
#ifndef VectorBaseRotationAnimation_adjustFrameToAngle
#define VectorBaseRotationAnimation_adjustFrameToAngle RotationAnimation_adjustFrameToAngle
#endif
#ifndef VectorBaseRotationAnimation_adjustFrame
#define VectorBaseRotationAnimation_adjustFrame RotationAnimation_adjustFrame
#endif
#ifndef VectorBaseRotationAnimation_getAngleInfoP
#define VectorBaseRotationAnimation_getAngleInfoP RotationAnimation_getAngleInfoP
#endif
#ifndef VectorBaseRotationAnimation_toString
#define VectorBaseRotationAnimation_toString RotationAnimation_toString
#endif
#ifndef VectorBaseRotationAnimation_getAnimationBehavior
#define VectorBaseRotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef VectorBaseRotationAnimation_reset
#define VectorBaseRotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef VectorBaseRotationAnimation_isLastFrame
#define VectorBaseRotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef VectorBaseRotationAnimation_setState
#define VectorBaseRotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef VectorBaseRotationAnimation_getWidth
#define VectorBaseRotationAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef VectorBaseRotationAnimation_getHeight
#define VectorBaseRotationAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef VectorBaseRotationAnimation_setAlpha
#define VectorBaseRotationAnimation_setAlpha Animation_setAlpha
#endif
#ifndef VectorBaseRotationAnimation_paintThreedXYZ
#define VectorBaseRotationAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef VectorBaseRotationAnimation_isThreed
#define VectorBaseRotationAnimation_isThreed Animation_isThreed
#endif
#ifndef VectorBaseRotationAnimation_setBackgroundBasicColorP
#define VectorBaseRotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef VectorBaseRotationAnimation_getChangeBasicColor
#define VectorBaseRotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef VectorBaseRotationAnimation_changeBasicColor
#define VectorBaseRotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef VectorBaseRotationAnimation_getChangeColor
#define VectorBaseRotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef VectorBaseRotationAnimation_getColor
#define VectorBaseRotationAnimation_getColor Animation_getColor
#endif
#ifndef VectorBaseRotationAnimation_setScale
#define VectorBaseRotationAnimation_setScale Animation_setScale
#endif
#ifndef VectorBaseRotationAnimation_setMaxScale
#define VectorBaseRotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef VectorBaseRotationAnimation_set
#define VectorBaseRotationAnimation_set Animation_set
#endif
#ifndef VectorBaseRotationAnimation_setDx
#define VectorBaseRotationAnimation_setDx Animation_setDx
#endif
#ifndef VectorBaseRotationAnimation_getDx
#define VectorBaseRotationAnimation_getDx Animation_getDx
#endif
#ifndef VectorBaseRotationAnimation_setDy
#define VectorBaseRotationAnimation_setDy Animation_setDy
#endif
#ifndef VectorBaseRotationAnimation_getDy
#define VectorBaseRotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorBaseRotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorBaseRotationAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
