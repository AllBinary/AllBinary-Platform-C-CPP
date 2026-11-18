#ifndef ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
#define ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
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
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct FillAnimation FillAnimation;
struct FillAnimation {
    IndexedAnimation base;
    int32_t* pixelBuffer;
    int32_t width;
    int32_t height;
};


FillAnimation* FillAnimation_new(int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior);

void FillAnimation_init(FillAnimation* this, int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior);

void FillAnimation_setBasicColorP(FillAnimation* this, BasicColor* basicColor);

void FillAnimation_changeBasicColor(FillAnimation* this, BasicColor* basicColor);

void FillAnimation_setAlpha(FillAnimation* this, int32_t alpha);

void FillAnimation_setScale(FillAnimation* this, float scaleX, float scaleY);

void FillAnimation_setMaxScale(FillAnimation* this, float maxScaleX, float maxScaleY);


void FillAnimation_paint(FillAnimation* this, Graphics* g);
#define FillAnimation_new4 FillAnimation_new
#define FillAnimation_init4 FillAnimation_init
#ifndef FillAnimation_getAnimationBehavior
#define FillAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef FillAnimation_reset
#define FillAnimation_reset IndexedAnimation_reset
#endif
#ifndef FillAnimation_setFrame
#define FillAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef FillAnimation_getFrame
#define FillAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef FillAnimation_getAnimationSize
#define FillAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef FillAnimation_getSize
#define FillAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef FillAnimation_previousFrame
#define FillAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef FillAnimation_isLastFrame
#define FillAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef FillAnimation_setSequence
#define FillAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef FillAnimation_getSequence
#define FillAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef FillAnimation_setState
#define FillAnimation_setState IndexedAnimation_setState
#endif
#ifndef FillAnimation_getWidth
#define FillAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef FillAnimation_getHeight
#define FillAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef FillAnimation_nextFrame
#define FillAnimation_nextFrame Animation_nextFrame
#endif
#ifndef FillAnimation_paintXY
#define FillAnimation_paintXY Animation_paintXY
#endif
#ifndef FillAnimation_paintThreedXYZ
#define FillAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef FillAnimation_isThreed
#define FillAnimation_isThreed Animation_isThreed
#endif
#ifndef FillAnimation_getBasicColorP
#define FillAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef FillAnimation_setBackgroundBasicColorP
#define FillAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef FillAnimation_getChangeBasicColor
#define FillAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef FillAnimation_getChangeColor
#define FillAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef FillAnimation_getColor
#define FillAnimation_getColor Animation_getColor
#endif
#ifndef FillAnimation_set
#define FillAnimation_set Animation_set
#endif
#ifndef FillAnimation_setDx
#define FillAnimation_setDx Animation_setDx
#endif
#ifndef FillAnimation_getDx
#define FillAnimation_getDx Animation_getDx
#endif
#ifndef FillAnimation_setDy
#define FillAnimation_setDy Animation_setDy
#endif
#ifndef FillAnimation_getDy
#define FillAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FillAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FillAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
