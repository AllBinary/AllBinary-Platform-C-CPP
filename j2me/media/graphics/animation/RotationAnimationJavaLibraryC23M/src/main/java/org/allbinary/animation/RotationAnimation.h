#ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
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
typedef struct RotationAnimationInterface RotationAnimationInterface;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct Direction Direction;
typedef struct DirectionUtil DirectionUtil;
typedef struct StringMaker StringMaker;
typedef struct Angle Angle;
typedef struct AngleInfo AngleInfo;
typedef struct FrameUtil FrameUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/direction/DirectionUtil.h")
#include "org/allbinary/direction/DirectionUtil.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"

typedef struct RotationAnimation RotationAnimation;
struct RotationAnimation {
    IndexedAnimation base;
    RotationAnimationInterface RotationAnimationInterface_interface;
    FrameUtil* frameUtil;
    DirectionUtil* directionUtil;
    AngleInfo* angleInfo;
    CircularIndexUtil* circularIndexUtil;
};


RotationAnimation* RotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);

void RotationAnimation_init(RotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);

void RotationAnimation_nextRotationX(RotationAnimation* this);

void RotationAnimation_previousRotationX(RotationAnimation* this);

void RotationAnimation_nextRotation(RotationAnimation* this);

void RotationAnimation_previousRotation(RotationAnimation* this);

void RotationAnimation_nextRotationZ(RotationAnimation* this);

void RotationAnimation_previousRotationZ(RotationAnimation* this);

void RotationAnimation_setFrame(RotationAnimation* this, int32_t index);

void RotationAnimation_setFrameByDirection(RotationAnimation* this, Direction* direction);

void RotationAnimation_setFrameToAngle(RotationAnimation* this, Angle* angle);

void RotationAnimation_adjustFrameToAngle(RotationAnimation* this, Angle* angle);

void RotationAnimation_adjustFrame(RotationAnimation* this, int16_t angle);

int32_t RotationAnimation_getFrame(RotationAnimation* this);

int32_t RotationAnimation_getSize(RotationAnimation* this);

AngleInfo* RotationAnimation_getAngleInfoP(RotationAnimation* this);

const char* RotationAnimation_toString(RotationAnimation* this);
#define RotationAnimation_new3 RotationAnimation_new
#define RotationAnimation_init3 RotationAnimation_init
#ifndef RotationAnimation_getAnimationBehavior
#define RotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef RotationAnimation_reset
#define RotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef RotationAnimation_getAnimationSize
#define RotationAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef RotationAnimation_previousFrame
#define RotationAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef RotationAnimation_isLastFrame
#define RotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef RotationAnimation_setSequence
#define RotationAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef RotationAnimation_getSequence
#define RotationAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef RotationAnimation_setState
#define RotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef RotationAnimation_getWidth
#define RotationAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef RotationAnimation_getHeight
#define RotationAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef RotationAnimation_setAlpha
#define RotationAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RotationAnimation_nextFrame
#define RotationAnimation_nextFrame Animation_nextFrame
#endif
#ifndef RotationAnimation_paintXY
#define RotationAnimation_paintXY Animation_paintXY
#endif
#ifndef RotationAnimation_paintThreedXYZ
#define RotationAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RotationAnimation_isThreed
#define RotationAnimation_isThreed Animation_isThreed
#endif
#ifndef RotationAnimation_getBasicColorP
#define RotationAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef RotationAnimation_setBasicColorP
#define RotationAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef RotationAnimation_setBackgroundBasicColorP
#define RotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RotationAnimation_getChangeBasicColor
#define RotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RotationAnimation_changeBasicColor
#define RotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RotationAnimation_getChangeColor
#define RotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RotationAnimation_getColor
#define RotationAnimation_getColor Animation_getColor
#endif
#ifndef RotationAnimation_setScale
#define RotationAnimation_setScale Animation_setScale
#endif
#ifndef RotationAnimation_setMaxScale
#define RotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RotationAnimation_set
#define RotationAnimation_set Animation_set
#endif
#ifndef RotationAnimation_setDx
#define RotationAnimation_setDx Animation_setDx
#endif
#ifndef RotationAnimation_getDx
#define RotationAnimation_getDx Animation_getDx
#endif
#ifndef RotationAnimation_setDy
#define RotationAnimation_setDy Animation_setDy
#endif
#ifndef RotationAnimation_getDy
#define RotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RotationAnimation_register(void);

#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
