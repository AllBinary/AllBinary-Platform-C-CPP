#ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H
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
typedef struct Animation Animation;
typedef struct IndexedAnimationInterface IndexedAnimationInterface;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct LogUtil LogUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

typedef struct IndexedAnimation IndexedAnimation;
struct IndexedAnimation {
    Animation base;
    IndexedAnimationInterface IndexedAnimationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AnimationBehavior* animationBehaviorP;
};


IndexedAnimation* IndexedAnimation_new(AnimationBehavior* animationBehavior);

void IndexedAnimation_init(IndexedAnimation* this, AnimationBehavior* animationBehavior);

AnimationBehavior* IndexedAnimation_getAnimationBehavior(IndexedAnimation* this);

void IndexedAnimation_reset(IndexedAnimation* this);

void IndexedAnimation_setFrame(IndexedAnimation* this, int32_t index);

int32_t IndexedAnimation_getFrame(IndexedAnimation* this);

int32_t IndexedAnimation_getAnimationSize(IndexedAnimation* this);

int32_t IndexedAnimation_getSize(IndexedAnimation* this);

void IndexedAnimation_previousFrame(IndexedAnimation* this);

bool IndexedAnimation_isLastFrame(IndexedAnimation* this);

void IndexedAnimation_setSequence(IndexedAnimation* this, int32_t* sequence);

int32_t* IndexedAnimation_getSequence(IndexedAnimation* this);

void IndexedAnimation_setState(IndexedAnimation* this, IndexedAnimation* indexedAnimation);

int32_t IndexedAnimation_getWidth(IndexedAnimation* this);

int32_t IndexedAnimation_getHeight(IndexedAnimation* this);
#define IndexedAnimation_new1 IndexedAnimation_new
#define IndexedAnimation_init1 IndexedAnimation_init
#ifndef IndexedAnimation_setAlpha
#define IndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef IndexedAnimation_nextFrame
#define IndexedAnimation_nextFrame Animation_nextFrame
#endif
#ifndef IndexedAnimation_paintXY
#define IndexedAnimation_paintXY Animation_paintXY
#endif
#ifndef IndexedAnimation_paintThreedXYZ
#define IndexedAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef IndexedAnimation_isThreed
#define IndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef IndexedAnimation_getBasicColorP
#define IndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef IndexedAnimation_setBasicColorP
#define IndexedAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef IndexedAnimation_setBackgroundBasicColorP
#define IndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef IndexedAnimation_getChangeBasicColor
#define IndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef IndexedAnimation_changeBasicColor
#define IndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef IndexedAnimation_getChangeColor
#define IndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef IndexedAnimation_getColor
#define IndexedAnimation_getColor Animation_getColor
#endif
#ifndef IndexedAnimation_setScale
#define IndexedAnimation_setScale Animation_setScale
#endif
#ifndef IndexedAnimation_setMaxScale
#define IndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef IndexedAnimation_set
#define IndexedAnimation_set Animation_set
#endif
#ifndef IndexedAnimation_setDx
#define IndexedAnimation_setDx Animation_setDx
#endif
#ifndef IndexedAnimation_getDx
#define IndexedAnimation_getDx Animation_getDx
#endif
#ifndef IndexedAnimation_setDy
#define IndexedAnimation_setDy Animation_setDy
#endif
#ifndef IndexedAnimation_getDy
#define IndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IndexedAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H
