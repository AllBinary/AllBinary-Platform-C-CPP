#ifndef ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
#define ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
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
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
#include "org/allbinary/animation/VectorAnimation.h"

typedef struct AdjustedVectorAnimation AdjustedVectorAnimation;
struct AdjustedVectorAnimation {
    VectorAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedVectorAnimation* AdjustedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedVectorAnimation_init(AdjustedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedVectorAnimation_paintXY(AdjustedVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define AdjustedVectorAnimation_new5 AdjustedVectorAnimation_new
#define AdjustedVectorAnimation_init5 AdjustedVectorAnimation_init
#ifndef AdjustedVectorAnimation_createVectorAnimation
#define AdjustedVectorAnimation_createVectorAnimation VectorAnimation_createVectorAnimation
#endif
#ifndef AdjustedVectorAnimation_setBasicColorP
#define AdjustedVectorAnimation_setBasicColorP VectorAnimation_setBasicColorP
#endif
#ifndef AdjustedVectorAnimation_changeBasicColor
#define AdjustedVectorAnimation_changeBasicColor VectorAnimation_changeBasicColor
#endif
#ifndef AdjustedVectorAnimation_setAlpha
#define AdjustedVectorAnimation_setAlpha VectorAnimation_setAlpha
#endif
#ifndef AdjustedVectorAnimation_setScale
#define AdjustedVectorAnimation_setScale VectorAnimation_setScale
#endif
#ifndef AdjustedVectorAnimation_setMaxScale
#define AdjustedVectorAnimation_setMaxScale VectorAnimation_setMaxScale
#endif
#ifndef AdjustedVectorAnimation_updateModifiers
#define AdjustedVectorAnimation_updateModifiers VectorAnimation_updateModifiers
#endif
#ifndef AdjustedVectorAnimation_getAnimationSize
#define AdjustedVectorAnimation_getAnimationSize VectorAnimation_getAnimationSize
#endif
#ifndef AdjustedVectorAnimation_getSize
#define AdjustedVectorAnimation_getSize VectorAnimation_getSize
#endif
#ifndef AdjustedVectorAnimation_setSequence
#define AdjustedVectorAnimation_setSequence VectorAnimation_setSequence
#endif
#ifndef AdjustedVectorAnimation_getSequence
#define AdjustedVectorAnimation_getSequence VectorAnimation_getSequence
#endif
#ifndef AdjustedVectorAnimation_nextFrame
#define AdjustedVectorAnimation_nextFrame VectorAnimation_nextFrame
#endif
#ifndef AdjustedVectorAnimation_previousFrame
#define AdjustedVectorAnimation_previousFrame VectorAnimation_previousFrame
#endif
#ifndef AdjustedVectorAnimation_paintVectors
#define AdjustedVectorAnimation_paintVectors VectorAnimation_paintVectors
#endif
#ifndef AdjustedVectorAnimation_getFrame
#define AdjustedVectorAnimation_getFrame VectorAnimation_getFrame
#endif
#ifndef AdjustedVectorAnimation_setFrame
#define AdjustedVectorAnimation_setFrame VectorAnimation_setFrame
#endif
#ifndef AdjustedVectorAnimation_getPoints
#define AdjustedVectorAnimation_getPoints VectorAnimation_getPoints
#endif
#ifndef AdjustedVectorAnimation_setPoints
#define AdjustedVectorAnimation_setPoints VectorAnimation_setPoints
#endif
#ifndef AdjustedVectorAnimation_getBasicColorP
#define AdjustedVectorAnimation_getBasicColorP VectorAnimation_getBasicColorP
#endif
#ifndef AdjustedVectorAnimation_getAnimationBehavior
#define AdjustedVectorAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef AdjustedVectorAnimation_reset
#define AdjustedVectorAnimation_reset IndexedAnimation_reset
#endif
#ifndef AdjustedVectorAnimation_setFrame
#define AdjustedVectorAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef AdjustedVectorAnimation_getFrame
#define AdjustedVectorAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef AdjustedVectorAnimation_getAnimationSize
#define AdjustedVectorAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef AdjustedVectorAnimation_getSize
#define AdjustedVectorAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef AdjustedVectorAnimation_previousFrame
#define AdjustedVectorAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef AdjustedVectorAnimation_isLastFrame
#define AdjustedVectorAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef AdjustedVectorAnimation_setSequence
#define AdjustedVectorAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef AdjustedVectorAnimation_getSequence
#define AdjustedVectorAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef AdjustedVectorAnimation_setState
#define AdjustedVectorAnimation_setState IndexedAnimation_setState
#endif
#ifndef AdjustedVectorAnimation_getWidth
#define AdjustedVectorAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef AdjustedVectorAnimation_getHeight
#define AdjustedVectorAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef AdjustedVectorAnimation_setAlpha
#define AdjustedVectorAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AdjustedVectorAnimation_nextFrame
#define AdjustedVectorAnimation_nextFrame Animation_nextFrame
#endif
#ifndef AdjustedVectorAnimation_paintThreedXYZ
#define AdjustedVectorAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef AdjustedVectorAnimation_isThreed
#define AdjustedVectorAnimation_isThreed Animation_isThreed
#endif
#ifndef AdjustedVectorAnimation_getBasicColorP
#define AdjustedVectorAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AdjustedVectorAnimation_setBasicColorP
#define AdjustedVectorAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AdjustedVectorAnimation_setBackgroundBasicColorP
#define AdjustedVectorAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AdjustedVectorAnimation_getChangeBasicColor
#define AdjustedVectorAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AdjustedVectorAnimation_changeBasicColor
#define AdjustedVectorAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AdjustedVectorAnimation_getChangeColor
#define AdjustedVectorAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AdjustedVectorAnimation_getColor
#define AdjustedVectorAnimation_getColor Animation_getColor
#endif
#ifndef AdjustedVectorAnimation_setScale
#define AdjustedVectorAnimation_setScale Animation_setScale
#endif
#ifndef AdjustedVectorAnimation_setMaxScale
#define AdjustedVectorAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AdjustedVectorAnimation_set
#define AdjustedVectorAnimation_set Animation_set
#endif
#ifndef AdjustedVectorAnimation_setDx
#define AdjustedVectorAnimation_setDx Animation_setDx
#endif
#ifndef AdjustedVectorAnimation_getDx
#define AdjustedVectorAnimation_getDx Animation_getDx
#endif
#ifndef AdjustedVectorAnimation_setDy
#define AdjustedVectorAnimation_setDy Animation_setDy
#endif
#ifndef AdjustedVectorAnimation_getDy
#define AdjustedVectorAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdjustedVectorAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdjustedVectorAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_ADJUSTEDVECTORANIMATION_H
