#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H
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
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"

typedef struct CompoundIndexedAnimation CompoundIndexedAnimation;
struct CompoundIndexedAnimation {
    IndexedAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    CircularIndexUtil* circularIndexUtil;
    Animation** animationInterfaceArray;
};


CompoundIndexedAnimation* CompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundIndexedAnimation_init(CompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundIndexedAnimation_setFrame(CompoundIndexedAnimation* this, int32_t index);

int32_t CompoundIndexedAnimation_getFrame(CompoundIndexedAnimation* this);

int32_t CompoundIndexedAnimation_getSize(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_previousFrame(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_setSequence(CompoundIndexedAnimation* this, int32_t* sequence);

int32_t* CompoundIndexedAnimation_getSequence(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_nextFrame(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_paintXY(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CompoundIndexedAnimation_paintThreedXYZ(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

IndexedAnimation* CompoundIndexedAnimation_getCurrentAnimation(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_nextAnimation(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_previousAnimation(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_setAnimation(CompoundIndexedAnimation* this, int32_t index);

Animation** CompoundIndexedAnimation_getAnimationInterfaceArray(CompoundIndexedAnimation* this);

void CompoundIndexedAnimation_setAnimationInterfaceArray(CompoundIndexedAnimation* this, Animation** animationInterfaceArray);

void CompoundIndexedAnimation_set(CompoundIndexedAnimation* this, GL* gl);
#define CompoundIndexedAnimation_new2 CompoundIndexedAnimation_new
#define CompoundIndexedAnimation_init2 CompoundIndexedAnimation_init
#ifndef CompoundIndexedAnimation_getAnimationBehavior
#define CompoundIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef CompoundIndexedAnimation_reset
#define CompoundIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef CompoundIndexedAnimation_getAnimationSize
#define CompoundIndexedAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef CompoundIndexedAnimation_isLastFrame
#define CompoundIndexedAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef CompoundIndexedAnimation_setState
#define CompoundIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef CompoundIndexedAnimation_getWidth
#define CompoundIndexedAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef CompoundIndexedAnimation_getHeight
#define CompoundIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef CompoundIndexedAnimation_setAlpha
#define CompoundIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CompoundIndexedAnimation_isThreed
#define CompoundIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef CompoundIndexedAnimation_getBasicColorP
#define CompoundIndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CompoundIndexedAnimation_setBasicColorP
#define CompoundIndexedAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CompoundIndexedAnimation_setBackgroundBasicColorP
#define CompoundIndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CompoundIndexedAnimation_getChangeBasicColor
#define CompoundIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CompoundIndexedAnimation_changeBasicColor
#define CompoundIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CompoundIndexedAnimation_getChangeColor
#define CompoundIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CompoundIndexedAnimation_getColor
#define CompoundIndexedAnimation_getColor Animation_getColor
#endif
#ifndef CompoundIndexedAnimation_setScale
#define CompoundIndexedAnimation_setScale Animation_setScale
#endif
#ifndef CompoundIndexedAnimation_setMaxScale
#define CompoundIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CompoundIndexedAnimation_setDx
#define CompoundIndexedAnimation_setDx Animation_setDx
#endif
#ifndef CompoundIndexedAnimation_getDx
#define CompoundIndexedAnimation_getDx Animation_getDx
#endif
#ifndef CompoundIndexedAnimation_setDy
#define CompoundIndexedAnimation_setDy Animation_setDy
#endif
#ifndef CompoundIndexedAnimation_getDy
#define CompoundIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompoundIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompoundIndexedAnimation_register(void);

#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H
