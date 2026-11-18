#ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H
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
typedef struct AnimationBehavior AnimationBehavior;
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct NullIndexedAnimation NullIndexedAnimation;
struct NullIndexedAnimation {
    IndexedAnimation base;
};


NullIndexedAnimation* NullIndexedAnimation_new(AnimationBehavior* animationBehavior);

void NullIndexedAnimation_init(NullIndexedAnimation* this, AnimationBehavior* animationBehavior);

int32_t NullIndexedAnimation_getAnimationSize(NullIndexedAnimation* this);
#define NullIndexedAnimation_new1 NullIndexedAnimation_new
#define NullIndexedAnimation_init1 NullIndexedAnimation_init
#ifndef NullIndexedAnimation_getAnimationBehavior
#define NullIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef NullIndexedAnimation_reset
#define NullIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef NullIndexedAnimation_setFrame
#define NullIndexedAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef NullIndexedAnimation_getFrame
#define NullIndexedAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef NullIndexedAnimation_getSize
#define NullIndexedAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef NullIndexedAnimation_previousFrame
#define NullIndexedAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef NullIndexedAnimation_isLastFrame
#define NullIndexedAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef NullIndexedAnimation_setSequence
#define NullIndexedAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef NullIndexedAnimation_getSequence
#define NullIndexedAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef NullIndexedAnimation_setState
#define NullIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef NullIndexedAnimation_getWidth
#define NullIndexedAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef NullIndexedAnimation_getHeight
#define NullIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef NullIndexedAnimation_setAlpha
#define NullIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef NullIndexedAnimation_nextFrame
#define NullIndexedAnimation_nextFrame Animation_nextFrame
#endif
#ifndef NullIndexedAnimation_paintXY
#define NullIndexedAnimation_paintXY Animation_paintXY
#endif
#ifndef NullIndexedAnimation_paintThreedXYZ
#define NullIndexedAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef NullIndexedAnimation_isThreed
#define NullIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef NullIndexedAnimation_getBasicColorP
#define NullIndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef NullIndexedAnimation_setBasicColorP
#define NullIndexedAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef NullIndexedAnimation_setBackgroundBasicColorP
#define NullIndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef NullIndexedAnimation_getChangeBasicColor
#define NullIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef NullIndexedAnimation_changeBasicColor
#define NullIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef NullIndexedAnimation_getChangeColor
#define NullIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef NullIndexedAnimation_getColor
#define NullIndexedAnimation_getColor Animation_getColor
#endif
#ifndef NullIndexedAnimation_setScale
#define NullIndexedAnimation_setScale Animation_setScale
#endif
#ifndef NullIndexedAnimation_setMaxScale
#define NullIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef NullIndexedAnimation_set
#define NullIndexedAnimation_set Animation_set
#endif
#ifndef NullIndexedAnimation_setDx
#define NullIndexedAnimation_setDx Animation_setDx
#endif
#ifndef NullIndexedAnimation_getDx
#define NullIndexedAnimation_getDx Animation_getDx
#endif
#ifndef NullIndexedAnimation_setDy
#define NullIndexedAnimation_setDy Animation_setDy
#endif
#ifndef NullIndexedAnimation_getDy
#define NullIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullIndexedAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H
