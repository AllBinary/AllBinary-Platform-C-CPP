#ifndef ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_H
#define ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_H
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
typedef struct VectorAnimation VectorAnimation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct BasicColor BasicColor;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/animation/VectorAnimation.h"

typedef struct TimedVectorAnimation TimedVectorAnimation;
struct TimedVectorAnimation {
    VectorAnimation base;
    TimeDelayHelper* timeElapsedHelper;
};


TimedVectorAnimation* TimedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void TimedVectorAnimation_init(TimedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void TimedVectorAnimation_nextFrame(TimedVectorAnimation* this);
#define TimedVectorAnimation_new3 TimedVectorAnimation_new
#define TimedVectorAnimation_init3 TimedVectorAnimation_init
#ifndef TimedVectorAnimation_createVectorAnimation
#define TimedVectorAnimation_createVectorAnimation VectorAnimation_createVectorAnimation
#endif
#ifndef TimedVectorAnimation_setBasicColorP
#define TimedVectorAnimation_setBasicColorP VectorAnimation_setBasicColorP
#endif
#ifndef TimedVectorAnimation_changeBasicColor
#define TimedVectorAnimation_changeBasicColor VectorAnimation_changeBasicColor
#endif
#ifndef TimedVectorAnimation_setAlpha
#define TimedVectorAnimation_setAlpha VectorAnimation_setAlpha
#endif
#ifndef TimedVectorAnimation_setScale
#define TimedVectorAnimation_setScale VectorAnimation_setScale
#endif
#ifndef TimedVectorAnimation_setMaxScale
#define TimedVectorAnimation_setMaxScale VectorAnimation_setMaxScale
#endif
#ifndef TimedVectorAnimation_updateModifiers
#define TimedVectorAnimation_updateModifiers VectorAnimation_updateModifiers
#endif
#ifndef TimedVectorAnimation_getAnimationSize
#define TimedVectorAnimation_getAnimationSize VectorAnimation_getAnimationSize
#endif
#ifndef TimedVectorAnimation_getSize
#define TimedVectorAnimation_getSize VectorAnimation_getSize
#endif
#ifndef TimedVectorAnimation_setSequence
#define TimedVectorAnimation_setSequence VectorAnimation_setSequence
#endif
#ifndef TimedVectorAnimation_getSequence
#define TimedVectorAnimation_getSequence VectorAnimation_getSequence
#endif
#ifndef TimedVectorAnimation_previousFrame
#define TimedVectorAnimation_previousFrame VectorAnimation_previousFrame
#endif
#ifndef TimedVectorAnimation_paintVectors
#define TimedVectorAnimation_paintVectors VectorAnimation_paintVectors
#endif
#ifndef TimedVectorAnimation_paintXY
#define TimedVectorAnimation_paintXY VectorAnimation_paintXY
#endif
#ifndef TimedVectorAnimation_getFrame
#define TimedVectorAnimation_getFrame VectorAnimation_getFrame
#endif
#ifndef TimedVectorAnimation_setFrame
#define TimedVectorAnimation_setFrame VectorAnimation_setFrame
#endif
#ifndef TimedVectorAnimation_getPoints
#define TimedVectorAnimation_getPoints VectorAnimation_getPoints
#endif
#ifndef TimedVectorAnimation_setPoints
#define TimedVectorAnimation_setPoints VectorAnimation_setPoints
#endif
#ifndef TimedVectorAnimation_getBasicColorP
#define TimedVectorAnimation_getBasicColorP VectorAnimation_getBasicColorP
#endif
#ifndef TimedVectorAnimation_getAnimationBehavior
#define TimedVectorAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef TimedVectorAnimation_reset
#define TimedVectorAnimation_reset IndexedAnimation_reset
#endif
#ifndef TimedVectorAnimation_setFrame
#define TimedVectorAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef TimedVectorAnimation_getFrame
#define TimedVectorAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef TimedVectorAnimation_getAnimationSize
#define TimedVectorAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef TimedVectorAnimation_getSize
#define TimedVectorAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef TimedVectorAnimation_previousFrame
#define TimedVectorAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef TimedVectorAnimation_isLastFrame
#define TimedVectorAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef TimedVectorAnimation_setSequence
#define TimedVectorAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef TimedVectorAnimation_getSequence
#define TimedVectorAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef TimedVectorAnimation_setState
#define TimedVectorAnimation_setState IndexedAnimation_setState
#endif
#ifndef TimedVectorAnimation_getWidth
#define TimedVectorAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef TimedVectorAnimation_getHeight
#define TimedVectorAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef TimedVectorAnimation_setAlpha
#define TimedVectorAnimation_setAlpha Animation_setAlpha
#endif
#ifndef TimedVectorAnimation_paintXY
#define TimedVectorAnimation_paintXY Animation_paintXY
#endif
#ifndef TimedVectorAnimation_paintThreedXYZ
#define TimedVectorAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef TimedVectorAnimation_isThreed
#define TimedVectorAnimation_isThreed Animation_isThreed
#endif
#ifndef TimedVectorAnimation_getBasicColorP
#define TimedVectorAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef TimedVectorAnimation_setBasicColorP
#define TimedVectorAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef TimedVectorAnimation_setBackgroundBasicColorP
#define TimedVectorAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef TimedVectorAnimation_getChangeBasicColor
#define TimedVectorAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef TimedVectorAnimation_changeBasicColor
#define TimedVectorAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef TimedVectorAnimation_getChangeColor
#define TimedVectorAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef TimedVectorAnimation_getColor
#define TimedVectorAnimation_getColor Animation_getColor
#endif
#ifndef TimedVectorAnimation_setScale
#define TimedVectorAnimation_setScale Animation_setScale
#endif
#ifndef TimedVectorAnimation_setMaxScale
#define TimedVectorAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef TimedVectorAnimation_set
#define TimedVectorAnimation_set Animation_set
#endif
#ifndef TimedVectorAnimation_setDx
#define TimedVectorAnimation_setDx Animation_setDx
#endif
#ifndef TimedVectorAnimation_getDx
#define TimedVectorAnimation_getDx Animation_getDx
#endif
#ifndef TimedVectorAnimation_setDy
#define TimedVectorAnimation_setDy Animation_setDy
#endif
#ifndef TimedVectorAnimation_getDy
#define TimedVectorAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimedVectorAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimedVectorAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_H
