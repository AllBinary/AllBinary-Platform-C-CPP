#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_H
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
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct SimultaneousCompoundIndexedAnimation SimultaneousCompoundIndexedAnimation;
struct SimultaneousCompoundIndexedAnimation {
    IndexedAnimation base;
    Animation** animationInterfaceArray;
};


SimultaneousCompoundIndexedAnimation* SimultaneousCompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexedAnimation_init(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexedAnimation_setFrame(SimultaneousCompoundIndexedAnimation* this, int32_t frameIndex);

int32_t SimultaneousCompoundIndexedAnimation_getFrame(SimultaneousCompoundIndexedAnimation* this);

int32_t SimultaneousCompoundIndexedAnimation_getSize(SimultaneousCompoundIndexedAnimation* this);

void SimultaneousCompoundIndexedAnimation_previousFrame(SimultaneousCompoundIndexedAnimation* this);

void SimultaneousCompoundIndexedAnimation_setSequence(SimultaneousCompoundIndexedAnimation* this, int32_t* sequence);

int32_t* SimultaneousCompoundIndexedAnimation_getSequence(SimultaneousCompoundIndexedAnimation* this);

void SimultaneousCompoundIndexedAnimation_nextFrame(SimultaneousCompoundIndexedAnimation* this);

void SimultaneousCompoundIndexedAnimation_paintXY(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void SimultaneousCompoundIndexedAnimation_paintThreedXYZ(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

Animation** SimultaneousCompoundIndexedAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this);

void SimultaneousCompoundIndexedAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray);
#define SimultaneousCompoundIndexedAnimation_new2 SimultaneousCompoundIndexedAnimation_new
#define SimultaneousCompoundIndexedAnimation_init2 SimultaneousCompoundIndexedAnimation_init
#ifndef SimultaneousCompoundIndexedAnimation_getAnimationBehavior
#define SimultaneousCompoundIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef SimultaneousCompoundIndexedAnimation_reset
#define SimultaneousCompoundIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getAnimationSize
#define SimultaneousCompoundIndexedAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef SimultaneousCompoundIndexedAnimation_isLastFrame
#define SimultaneousCompoundIndexedAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setState
#define SimultaneousCompoundIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getWidth
#define SimultaneousCompoundIndexedAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getHeight
#define SimultaneousCompoundIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setAlpha
#define SimultaneousCompoundIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef SimultaneousCompoundIndexedAnimation_isThreed
#define SimultaneousCompoundIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getBasicColorP
#define SimultaneousCompoundIndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setBasicColorP
#define SimultaneousCompoundIndexedAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setBackgroundBasicColorP
#define SimultaneousCompoundIndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getChangeBasicColor
#define SimultaneousCompoundIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef SimultaneousCompoundIndexedAnimation_changeBasicColor
#define SimultaneousCompoundIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getChangeColor
#define SimultaneousCompoundIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getColor
#define SimultaneousCompoundIndexedAnimation_getColor Animation_getColor
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setScale
#define SimultaneousCompoundIndexedAnimation_setScale Animation_setScale
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setMaxScale
#define SimultaneousCompoundIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef SimultaneousCompoundIndexedAnimation_set
#define SimultaneousCompoundIndexedAnimation_set Animation_set
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setDx
#define SimultaneousCompoundIndexedAnimation_setDx Animation_setDx
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getDx
#define SimultaneousCompoundIndexedAnimation_getDx Animation_getDx
#endif
#ifndef SimultaneousCompoundIndexedAnimation_setDy
#define SimultaneousCompoundIndexedAnimation_setDy Animation_setDy
#endif
#ifndef SimultaneousCompoundIndexedAnimation_getDy
#define SimultaneousCompoundIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimultaneousCompoundIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimultaneousCompoundIndexedAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_H
