#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_H
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
// package org.allbinary.animation.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CompoundAnimationInterface CompoundAnimationInterface;
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct RotationAnimation RotationAnimation;
typedef struct Direction Direction;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct Angle Angle;
typedef struct AngleFactory AngleFactory;
typedef struct AngleInfo AngleInfo;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"

typedef struct CompoundRotationAnimation CompoundRotationAnimation;
struct CompoundRotationAnimation {
    RotationAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    RotationAnimation** animationInterfaceArray;
};


CompoundRotationAnimation* CompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundRotationAnimation_init(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundRotationAnimation_setFrame(CompoundRotationAnimation* this, int32_t index);

int32_t CompoundRotationAnimation_getFrame(CompoundRotationAnimation* this);

int32_t CompoundRotationAnimation_getAnimationSize(CompoundRotationAnimation* this);

int32_t CompoundRotationAnimation_getSize(CompoundRotationAnimation* this);

void CompoundRotationAnimation_previousFrame(CompoundRotationAnimation* this);

void CompoundRotationAnimation_nextFrame(CompoundRotationAnimation* this);

void CompoundRotationAnimation_previousRotation(CompoundRotationAnimation* this);

void CompoundRotationAnimation_nextRotation(CompoundRotationAnimation* this);

void CompoundRotationAnimation_setSequence(CompoundRotationAnimation* this, int32_t* sequence);

int32_t* CompoundRotationAnimation_getSequence(CompoundRotationAnimation* this);

void CompoundRotationAnimation_paintXY(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CompoundRotationAnimation_paintThreedXYZ(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

IndexedAnimation* CompoundRotationAnimation_getCurrentAnimation(CompoundRotationAnimation* this);

void CompoundRotationAnimation_nextAnimation(CompoundRotationAnimation* this);

void CompoundRotationAnimation_previousAnimation(CompoundRotationAnimation* this);

void CompoundRotationAnimation_setAnimation(CompoundRotationAnimation* this, int32_t index);

void CompoundRotationAnimation_setFrameByDirection(CompoundRotationAnimation* this, Direction* direction);

void CompoundRotationAnimation_setFrameToAngle(CompoundRotationAnimation* this, Angle* angle);

void CompoundRotationAnimation_adjustFrameToAngle(CompoundRotationAnimation* this, Angle* newAngle);

void CompoundRotationAnimation_adjustFrame(CompoundRotationAnimation* this, int16_t angle);

AngleInfo* CompoundRotationAnimation_getAngleInfoP(CompoundRotationAnimation* this);

RotationAnimation** CompoundRotationAnimation_getAnimationInterfaceArray(CompoundRotationAnimation* this);

void CompoundRotationAnimation_setAnimationInterfaceArray(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray);

void CompoundRotationAnimation_set(CompoundRotationAnimation* this, GL* gl);
#define CompoundRotationAnimation_new2 CompoundRotationAnimation_new
#define CompoundRotationAnimation_init2 CompoundRotationAnimation_init
#ifndef CompoundRotationAnimation_nextRotationX
#define CompoundRotationAnimation_nextRotationX RotationAnimation_nextRotationX
#endif
#ifndef CompoundRotationAnimation_previousRotationX
#define CompoundRotationAnimation_previousRotationX RotationAnimation_previousRotationX
#endif
#ifndef CompoundRotationAnimation_nextRotationZ
#define CompoundRotationAnimation_nextRotationZ RotationAnimation_nextRotationZ
#endif
#ifndef CompoundRotationAnimation_previousRotationZ
#define CompoundRotationAnimation_previousRotationZ RotationAnimation_previousRotationZ
#endif
#ifndef CompoundRotationAnimation_toString
#define CompoundRotationAnimation_toString RotationAnimation_toString
#endif
#ifndef CompoundRotationAnimation_getAnimationBehavior
#define CompoundRotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef CompoundRotationAnimation_reset
#define CompoundRotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef CompoundRotationAnimation_isLastFrame
#define CompoundRotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef CompoundRotationAnimation_setState
#define CompoundRotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef CompoundRotationAnimation_getWidth
#define CompoundRotationAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef CompoundRotationAnimation_getHeight
#define CompoundRotationAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef CompoundRotationAnimation_setAlpha
#define CompoundRotationAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CompoundRotationAnimation_isThreed
#define CompoundRotationAnimation_isThreed Animation_isThreed
#endif
#ifndef CompoundRotationAnimation_getBasicColorP
#define CompoundRotationAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CompoundRotationAnimation_setBasicColorP
#define CompoundRotationAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CompoundRotationAnimation_setBackgroundBasicColorP
#define CompoundRotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CompoundRotationAnimation_getChangeBasicColor
#define CompoundRotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CompoundRotationAnimation_changeBasicColor
#define CompoundRotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CompoundRotationAnimation_getChangeColor
#define CompoundRotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CompoundRotationAnimation_getColor
#define CompoundRotationAnimation_getColor Animation_getColor
#endif
#ifndef CompoundRotationAnimation_setScale
#define CompoundRotationAnimation_setScale Animation_setScale
#endif
#ifndef CompoundRotationAnimation_setMaxScale
#define CompoundRotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CompoundRotationAnimation_setDx
#define CompoundRotationAnimation_setDx Animation_setDx
#endif
#ifndef CompoundRotationAnimation_getDx
#define CompoundRotationAnimation_getDx Animation_getDx
#endif
#ifndef CompoundRotationAnimation_setDy
#define CompoundRotationAnimation_setDy Animation_setDy
#endif
#ifndef CompoundRotationAnimation_getDy
#define CompoundRotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompoundRotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompoundRotationAnimation_register(void);

#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATION_H
