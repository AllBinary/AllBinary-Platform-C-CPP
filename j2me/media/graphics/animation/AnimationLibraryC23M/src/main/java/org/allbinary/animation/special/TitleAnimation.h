#ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
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
typedef struct SpecialAnimation SpecialAnimation;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct ABSystemWrapper ABSystemWrapper;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/logic/ABSystemWrapper.h")
#include "org/allbinary/logic/ABSystemWrapper.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"

typedef struct TitleAnimation TitleAnimation;
struct TitleAnimation {
    SpecialAnimation base;
    ABSystemWrapper* systemWrapper;
    float deltaX;
    float deltaY;
    float deltaZ;
    BasicColor** basicColorArray;
    int32_t* dxArray;
    int32_t* dyArray;
    int32_t widthP;
    IndexedAnimation** animationInterfaceArray;
    int32_t sizeP;
    int32_t y;
    int64_t lastFrameStartTime;
    DisplayInfoSingleton* displayInfoSingleton;
    BasicColor* CLEAR_COLOR;
};


TitleAnimation* TitleAnimation_new(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior);

TitleAnimation* TitleAnimation_createAnimation(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width);

void TitleAnimation_init(TitleAnimation* this, IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior);

void TitleAnimation_nextFrame(TitleAnimation* this);

bool TitleAnimation_isComplete(TitleAnimation* this);

void TitleAnimation_setSequence(TitleAnimation* this, int32_t* sequence);

int32_t* TitleAnimation_getSequence(TitleAnimation* this);

int32_t TitleAnimation_getSize(TitleAnimation* this);

int32_t TitleAnimation_getFrame(TitleAnimation* this);

void TitleAnimation_setFrame(TitleAnimation* this, int32_t frame);

void TitleAnimation_setLastFrame(TitleAnimation* this);

void TitleAnimation_reset(TitleAnimation* this);

void TitleAnimation_previousFrame(TitleAnimation* this);

void TitleAnimation_paintFrameXY(TitleAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y);

void TitleAnimation_paintXY(TitleAnimation* this, Graphics* graphics, int32_t ax, int32_t ay);
#define TitleAnimation_new7 TitleAnimation_new
#define TitleAnimation_init7 TitleAnimation_init
#ifndef TitleAnimation_getInstance
#define TitleAnimation_getInstance SpecialAnimation_getInstance
#endif
#ifndef TitleAnimation_open
#define TitleAnimation_open SpecialAnimation_open
#endif
#ifndef TitleAnimation_close
#define TitleAnimation_close SpecialAnimation_close
#endif
#ifndef TitleAnimation_process
#define TitleAnimation_process SpecialAnimation_process
#endif
#ifndef TitleAnimation_getAnimationBehavior
#define TitleAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef TitleAnimation_getAnimationSize
#define TitleAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef TitleAnimation_isLastFrame
#define TitleAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef TitleAnimation_setState
#define TitleAnimation_setState IndexedAnimation_setState
#endif
#ifndef TitleAnimation_getWidth
#define TitleAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef TitleAnimation_getHeight
#define TitleAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef TitleAnimation_setAlpha
#define TitleAnimation_setAlpha Animation_setAlpha
#endif
#ifndef TitleAnimation_paintThreedXYZ
#define TitleAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef TitleAnimation_isThreed
#define TitleAnimation_isThreed Animation_isThreed
#endif
#ifndef TitleAnimation_getBasicColorP
#define TitleAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef TitleAnimation_setBasicColorP
#define TitleAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef TitleAnimation_setBackgroundBasicColorP
#define TitleAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef TitleAnimation_getChangeBasicColor
#define TitleAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef TitleAnimation_changeBasicColor
#define TitleAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef TitleAnimation_getChangeColor
#define TitleAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef TitleAnimation_getColor
#define TitleAnimation_getColor Animation_getColor
#endif
#ifndef TitleAnimation_setScale
#define TitleAnimation_setScale Animation_setScale
#endif
#ifndef TitleAnimation_setMaxScale
#define TitleAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef TitleAnimation_set
#define TitleAnimation_set Animation_set
#endif
#ifndef TitleAnimation_setDx
#define TitleAnimation_setDx Animation_setDx
#endif
#ifndef TitleAnimation_getDx
#define TitleAnimation_getDx Animation_getDx
#endif
#ifndef TitleAnimation_setDy
#define TitleAnimation_setDy Animation_setDy
#endif
#ifndef TitleAnimation_getDy
#define TitleAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TitleAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TitleAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
