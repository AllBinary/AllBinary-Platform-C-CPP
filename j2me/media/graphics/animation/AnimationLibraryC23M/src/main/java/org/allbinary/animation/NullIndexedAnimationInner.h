#ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONINNER_H
#define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONINNER_H
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
typedef struct NullIndexedAnimation NullIndexedAnimation;
typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
typedef struct Graphics Graphics;
#include "org/allbinary/animation/NullIndexedAnimation.h"

typedef struct NullIndexedAnimationInner NullIndexedAnimationInner;
struct NullIndexedAnimationInner {
    NullIndexedAnimation base;
};


NullIndexedAnimationInner* NullIndexedAnimationInner_new(void);

void NullIndexedAnimationInner_init(NullIndexedAnimationInner* this);

void NullIndexedAnimationInner_paintXY(NullIndexedAnimationInner* this, Graphics* graphics, int32_t x, int32_t y);
#define NullIndexedAnimationInner_new0 NullIndexedAnimationInner_new
#define NullIndexedAnimationInner_init0 NullIndexedAnimationInner_init
#ifndef NullIndexedAnimationInner_getAnimationSize
#define NullIndexedAnimationInner_getAnimationSize NullIndexedAnimation_getAnimationSize
#endif
#ifndef NullIndexedAnimationInner_getAnimationBehavior
#define NullIndexedAnimationInner_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef NullIndexedAnimationInner_reset
#define NullIndexedAnimationInner_reset IndexedAnimation_reset
#endif
#ifndef NullIndexedAnimationInner_setFrame
#define NullIndexedAnimationInner_setFrame IndexedAnimation_setFrame
#endif
#ifndef NullIndexedAnimationInner_getFrame
#define NullIndexedAnimationInner_getFrame IndexedAnimation_getFrame
#endif
#ifndef NullIndexedAnimationInner_getAnimationSize
#define NullIndexedAnimationInner_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef NullIndexedAnimationInner_getSize
#define NullIndexedAnimationInner_getSize IndexedAnimation_getSize
#endif
#ifndef NullIndexedAnimationInner_previousFrame
#define NullIndexedAnimationInner_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef NullIndexedAnimationInner_isLastFrame
#define NullIndexedAnimationInner_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef NullIndexedAnimationInner_setSequence
#define NullIndexedAnimationInner_setSequence IndexedAnimation_setSequence
#endif
#ifndef NullIndexedAnimationInner_getSequence
#define NullIndexedAnimationInner_getSequence IndexedAnimation_getSequence
#endif
#ifndef NullIndexedAnimationInner_setState
#define NullIndexedAnimationInner_setState IndexedAnimation_setState
#endif
#ifndef NullIndexedAnimationInner_getWidth
#define NullIndexedAnimationInner_getWidth IndexedAnimation_getWidth
#endif
#ifndef NullIndexedAnimationInner_getHeight
#define NullIndexedAnimationInner_getHeight IndexedAnimation_getHeight
#endif
#ifndef NullIndexedAnimationInner_setAlpha
#define NullIndexedAnimationInner_setAlpha Animation_setAlpha
#endif
#ifndef NullIndexedAnimationInner_nextFrame
#define NullIndexedAnimationInner_nextFrame Animation_nextFrame
#endif
#ifndef NullIndexedAnimationInner_paintThreedXYZ
#define NullIndexedAnimationInner_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef NullIndexedAnimationInner_isThreed
#define NullIndexedAnimationInner_isThreed Animation_isThreed
#endif
#ifndef NullIndexedAnimationInner_getBasicColorP
#define NullIndexedAnimationInner_getBasicColorP Animation_getBasicColorP
#endif
#ifndef NullIndexedAnimationInner_setBasicColorP
#define NullIndexedAnimationInner_setBasicColorP Animation_setBasicColorP
#endif
#ifndef NullIndexedAnimationInner_setBackgroundBasicColorP
#define NullIndexedAnimationInner_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef NullIndexedAnimationInner_getChangeBasicColor
#define NullIndexedAnimationInner_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef NullIndexedAnimationInner_changeBasicColor
#define NullIndexedAnimationInner_changeBasicColor Animation_changeBasicColor
#endif
#ifndef NullIndexedAnimationInner_getChangeColor
#define NullIndexedAnimationInner_getChangeColor Animation_getChangeColor
#endif
#ifndef NullIndexedAnimationInner_getColor
#define NullIndexedAnimationInner_getColor Animation_getColor
#endif
#ifndef NullIndexedAnimationInner_setScale
#define NullIndexedAnimationInner_setScale Animation_setScale
#endif
#ifndef NullIndexedAnimationInner_setMaxScale
#define NullIndexedAnimationInner_setMaxScale Animation_setMaxScale
#endif
#ifndef NullIndexedAnimationInner_set
#define NullIndexedAnimationInner_set Animation_set
#endif
#ifndef NullIndexedAnimationInner_setDx
#define NullIndexedAnimationInner_setDx Animation_setDx
#endif
#ifndef NullIndexedAnimationInner_getDx
#define NullIndexedAnimationInner_getDx Animation_getDx
#endif
#ifndef NullIndexedAnimationInner_setDy
#define NullIndexedAnimationInner_setDy Animation_setDy
#endif
#ifndef NullIndexedAnimationInner_getDy
#define NullIndexedAnimationInner_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullIndexedAnimationInner_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullIndexedAnimationInner_register(void);


#endif // ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONINNER_H
