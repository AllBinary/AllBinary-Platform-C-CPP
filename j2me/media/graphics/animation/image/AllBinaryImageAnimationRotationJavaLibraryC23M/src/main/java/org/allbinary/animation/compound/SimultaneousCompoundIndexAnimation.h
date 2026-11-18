#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H
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
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct SimultaneousCompoundIndexAnimation SimultaneousCompoundIndexAnimation;
struct SimultaneousCompoundIndexAnimation {
    IndexedAnimation base;
    IndexedAnimation** animationInterfaceArray;
};


SimultaneousCompoundIndexAnimation* SimultaneousCompoundIndexAnimation_new(IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexAnimation_init(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexAnimation_setFrame(SimultaneousCompoundIndexAnimation* this, int32_t frameIndex);

int32_t SimultaneousCompoundIndexAnimation_getFrame(SimultaneousCompoundIndexAnimation* this);

int32_t SimultaneousCompoundIndexAnimation_getAnimationSize(SimultaneousCompoundIndexAnimation* this);

int32_t SimultaneousCompoundIndexAnimation_getSize(SimultaneousCompoundIndexAnimation* this);

void SimultaneousCompoundIndexAnimation_previousFrame(SimultaneousCompoundIndexAnimation* this);

void SimultaneousCompoundIndexAnimation_nextFrame(SimultaneousCompoundIndexAnimation* this);

void SimultaneousCompoundIndexAnimation_setSequence(SimultaneousCompoundIndexAnimation* this, int32_t* sequence);

int32_t* SimultaneousCompoundIndexAnimation_getSequence(SimultaneousCompoundIndexAnimation* this);

void SimultaneousCompoundIndexAnimation_paintXY(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void SimultaneousCompoundIndexAnimation_paintThreedXYZ(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

void SimultaneousCompoundIndexAnimation_set(SimultaneousCompoundIndexAnimation* this, GL* gl);

IndexedAnimation** SimultaneousCompoundIndexAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this);

void SimultaneousCompoundIndexAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray);
#define SimultaneousCompoundIndexAnimation_new2 SimultaneousCompoundIndexAnimation_new
#define SimultaneousCompoundIndexAnimation_init2 SimultaneousCompoundIndexAnimation_init
#ifndef SimultaneousCompoundIndexAnimation_getAnimationBehavior
#define SimultaneousCompoundIndexAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef SimultaneousCompoundIndexAnimation_reset
#define SimultaneousCompoundIndexAnimation_reset IndexedAnimation_reset
#endif
#ifndef SimultaneousCompoundIndexAnimation_isLastFrame
#define SimultaneousCompoundIndexAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef SimultaneousCompoundIndexAnimation_setState
#define SimultaneousCompoundIndexAnimation_setState IndexedAnimation_setState
#endif
#ifndef SimultaneousCompoundIndexAnimation_getWidth
#define SimultaneousCompoundIndexAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef SimultaneousCompoundIndexAnimation_getHeight
#define SimultaneousCompoundIndexAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef SimultaneousCompoundIndexAnimation_setAlpha
#define SimultaneousCompoundIndexAnimation_setAlpha Animation_setAlpha
#endif
#ifndef SimultaneousCompoundIndexAnimation_isThreed
#define SimultaneousCompoundIndexAnimation_isThreed Animation_isThreed
#endif
#ifndef SimultaneousCompoundIndexAnimation_getBasicColorP
#define SimultaneousCompoundIndexAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef SimultaneousCompoundIndexAnimation_setBasicColorP
#define SimultaneousCompoundIndexAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef SimultaneousCompoundIndexAnimation_setBackgroundBasicColorP
#define SimultaneousCompoundIndexAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef SimultaneousCompoundIndexAnimation_getChangeBasicColor
#define SimultaneousCompoundIndexAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef SimultaneousCompoundIndexAnimation_changeBasicColor
#define SimultaneousCompoundIndexAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef SimultaneousCompoundIndexAnimation_getChangeColor
#define SimultaneousCompoundIndexAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef SimultaneousCompoundIndexAnimation_getColor
#define SimultaneousCompoundIndexAnimation_getColor Animation_getColor
#endif
#ifndef SimultaneousCompoundIndexAnimation_setScale
#define SimultaneousCompoundIndexAnimation_setScale Animation_setScale
#endif
#ifndef SimultaneousCompoundIndexAnimation_setMaxScale
#define SimultaneousCompoundIndexAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef SimultaneousCompoundIndexAnimation_setDx
#define SimultaneousCompoundIndexAnimation_setDx Animation_setDx
#endif
#ifndef SimultaneousCompoundIndexAnimation_getDx
#define SimultaneousCompoundIndexAnimation_getDx Animation_getDx
#endif
#ifndef SimultaneousCompoundIndexAnimation_setDy
#define SimultaneousCompoundIndexAnimation_setDy Animation_setDy
#endif
#ifndef SimultaneousCompoundIndexAnimation_getDy
#define SimultaneousCompoundIndexAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimultaneousCompoundIndexAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimultaneousCompoundIndexAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H
