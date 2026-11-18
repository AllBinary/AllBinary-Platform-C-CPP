#ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
#define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
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
// package org.allbinary.animation.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SpecialAnimationInterface SpecialAnimationInterface;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"

typedef struct SpecialAnimation SpecialAnimation;
struct SpecialAnimation {
    IndexedAnimation base;
    SpecialAnimationInterface SpecialAnimationInterface_interface;
};


SpecialAnimation* SpecialAnimation_new(AnimationBehavior* animationBehavior);

SpecialAnimation* SpecialAnimation_getInstance(void);

void SpecialAnimation_init(SpecialAnimation* this, AnimationBehavior* animationBehavior);

void SpecialAnimation_nextFrame(SpecialAnimation* this);

void SpecialAnimation_setLastFrame(SpecialAnimation* this);

bool SpecialAnimation_isComplete(SpecialAnimation* this);

void SpecialAnimation_open(SpecialAnimation* this);

void SpecialAnimation_close(SpecialAnimation* this);

void SpecialAnimation_process(SpecialAnimation* this);
#define SpecialAnimation_new1 SpecialAnimation_new
#define SpecialAnimation_init1 SpecialAnimation_init
#ifndef SpecialAnimation_getAnimationBehavior
#define SpecialAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef SpecialAnimation_reset
#define SpecialAnimation_reset IndexedAnimation_reset
#endif
#ifndef SpecialAnimation_setFrame
#define SpecialAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef SpecialAnimation_getFrame
#define SpecialAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef SpecialAnimation_getAnimationSize
#define SpecialAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef SpecialAnimation_getSize
#define SpecialAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef SpecialAnimation_previousFrame
#define SpecialAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef SpecialAnimation_isLastFrame
#define SpecialAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef SpecialAnimation_setSequence
#define SpecialAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef SpecialAnimation_getSequence
#define SpecialAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef SpecialAnimation_setState
#define SpecialAnimation_setState IndexedAnimation_setState
#endif
#ifndef SpecialAnimation_getWidth
#define SpecialAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef SpecialAnimation_getHeight
#define SpecialAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef SpecialAnimation_setAlpha
#define SpecialAnimation_setAlpha Animation_setAlpha
#endif
#ifndef SpecialAnimation_paintXY
#define SpecialAnimation_paintXY Animation_paintXY
#endif
#ifndef SpecialAnimation_paintThreedXYZ
#define SpecialAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef SpecialAnimation_isThreed
#define SpecialAnimation_isThreed Animation_isThreed
#endif
#ifndef SpecialAnimation_getBasicColorP
#define SpecialAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef SpecialAnimation_setBasicColorP
#define SpecialAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef SpecialAnimation_setBackgroundBasicColorP
#define SpecialAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef SpecialAnimation_getChangeBasicColor
#define SpecialAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef SpecialAnimation_changeBasicColor
#define SpecialAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef SpecialAnimation_getChangeColor
#define SpecialAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef SpecialAnimation_getColor
#define SpecialAnimation_getColor Animation_getColor
#endif
#ifndef SpecialAnimation_setScale
#define SpecialAnimation_setScale Animation_setScale
#endif
#ifndef SpecialAnimation_setMaxScale
#define SpecialAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef SpecialAnimation_set
#define SpecialAnimation_set Animation_set
#endif
#ifndef SpecialAnimation_setDx
#define SpecialAnimation_setDx Animation_setDx
#endif
#ifndef SpecialAnimation_getDx
#define SpecialAnimation_getDx Animation_getDx
#endif
#ifndef SpecialAnimation_setDy
#define SpecialAnimation_setDy Animation_setDy
#endif
#ifndef SpecialAnimation_getDy
#define SpecialAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
