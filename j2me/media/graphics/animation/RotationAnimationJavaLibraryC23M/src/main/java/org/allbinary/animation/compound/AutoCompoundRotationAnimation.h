#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
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

typedef struct AutoCompoundRotationAnimation AutoCompoundRotationAnimation;
struct AutoCompoundRotationAnimation {
    RotationAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    RotationAnimation** animationInterfaceArray;
};


AutoCompoundRotationAnimation* AutoCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void AutoCompoundRotationAnimation_init(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void AutoCompoundRotationAnimation_setFrame(AutoCompoundRotationAnimation* this, int32_t index);

int32_t AutoCompoundRotationAnimation_getFrame(AutoCompoundRotationAnimation* this);

int32_t AutoCompoundRotationAnimation_getAnimationSize(AutoCompoundRotationAnimation* this);

int32_t AutoCompoundRotationAnimation_getSize(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_previousFrame(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_nextFrame(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_previousRotation(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_nextRotation(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_setSequence(AutoCompoundRotationAnimation* this, int32_t* sequence);

int32_t* AutoCompoundRotationAnimation_getSequence(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_paintXY(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void AutoCompoundRotationAnimation_paintThreedXYZ(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

IndexedAnimation* AutoCompoundRotationAnimation_getCurrentAnimation(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_nextAnimation(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_previousAnimation(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_setAnimation(AutoCompoundRotationAnimation* this, int32_t index);

void AutoCompoundRotationAnimation_setFrameByDirection(AutoCompoundRotationAnimation* this, Direction* direction);

void AutoCompoundRotationAnimation_setFrameToAngle(AutoCompoundRotationAnimation* this, Angle* angle);

void AutoCompoundRotationAnimation_adjustFrameToAngle(AutoCompoundRotationAnimation* this, Angle* newAngle);

void AutoCompoundRotationAnimation_adjustFrame(AutoCompoundRotationAnimation* this, int16_t angle);

AngleInfo* AutoCompoundRotationAnimation_getAngleInfoP(AutoCompoundRotationAnimation* this);

RotationAnimation** AutoCompoundRotationAnimation_getAnimationInterfaceArray(AutoCompoundRotationAnimation* this);

void AutoCompoundRotationAnimation_setAnimationInterfaceArray(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray);

void AutoCompoundRotationAnimation_set(AutoCompoundRotationAnimation* this, GL* gl);
#define AutoCompoundRotationAnimation_new2 AutoCompoundRotationAnimation_new
#define AutoCompoundRotationAnimation_init2 AutoCompoundRotationAnimation_init
#ifndef AutoCompoundRotationAnimation_nextRotationX
#define AutoCompoundRotationAnimation_nextRotationX RotationAnimation_nextRotationX
#endif
#ifndef AutoCompoundRotationAnimation_previousRotationX
#define AutoCompoundRotationAnimation_previousRotationX RotationAnimation_previousRotationX
#endif
#ifndef AutoCompoundRotationAnimation_nextRotationZ
#define AutoCompoundRotationAnimation_nextRotationZ RotationAnimation_nextRotationZ
#endif
#ifndef AutoCompoundRotationAnimation_previousRotationZ
#define AutoCompoundRotationAnimation_previousRotationZ RotationAnimation_previousRotationZ
#endif
#ifndef AutoCompoundRotationAnimation_toString
#define AutoCompoundRotationAnimation_toString RotationAnimation_toString
#endif
#ifndef AutoCompoundRotationAnimation_getAnimationBehavior
#define AutoCompoundRotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef AutoCompoundRotationAnimation_reset
#define AutoCompoundRotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef AutoCompoundRotationAnimation_isLastFrame
#define AutoCompoundRotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef AutoCompoundRotationAnimation_setState
#define AutoCompoundRotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef AutoCompoundRotationAnimation_getWidth
#define AutoCompoundRotationAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef AutoCompoundRotationAnimation_getHeight
#define AutoCompoundRotationAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef AutoCompoundRotationAnimation_setAlpha
#define AutoCompoundRotationAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AutoCompoundRotationAnimation_isThreed
#define AutoCompoundRotationAnimation_isThreed Animation_isThreed
#endif
#ifndef AutoCompoundRotationAnimation_getBasicColorP
#define AutoCompoundRotationAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AutoCompoundRotationAnimation_setBasicColorP
#define AutoCompoundRotationAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AutoCompoundRotationAnimation_setBackgroundBasicColorP
#define AutoCompoundRotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AutoCompoundRotationAnimation_getChangeBasicColor
#define AutoCompoundRotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AutoCompoundRotationAnimation_changeBasicColor
#define AutoCompoundRotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AutoCompoundRotationAnimation_getChangeColor
#define AutoCompoundRotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AutoCompoundRotationAnimation_getColor
#define AutoCompoundRotationAnimation_getColor Animation_getColor
#endif
#ifndef AutoCompoundRotationAnimation_setScale
#define AutoCompoundRotationAnimation_setScale Animation_setScale
#endif
#ifndef AutoCompoundRotationAnimation_setMaxScale
#define AutoCompoundRotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AutoCompoundRotationAnimation_setDx
#define AutoCompoundRotationAnimation_setDx Animation_setDx
#endif
#ifndef AutoCompoundRotationAnimation_getDx
#define AutoCompoundRotationAnimation_getDx Animation_getDx
#endif
#ifndef AutoCompoundRotationAnimation_setDy
#define AutoCompoundRotationAnimation_setDy Animation_setDy
#endif
#ifndef AutoCompoundRotationAnimation_getDy
#define AutoCompoundRotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AutoCompoundRotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AutoCompoundRotationAnimation_register(void);

#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
