#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_H
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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct DisposalUtil DisposalUtil;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct Anchor Anchor;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif

typedef struct TweenedImageAnimation TweenedImageAnimation;
struct TweenedImageAnimation {
    IndexedAnimation base;
    Image* image;
    int32_t dx;
    int32_t dy;
    int32_t totalFrames;
    CircularIndexUtil* circularIndexUtil;
    int32_t anchor;
};


TweenedImageAnimation* TweenedImageAnimation_new(Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior);

void TweenedImageAnimation_init(TweenedImageAnimation* this, Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior);

int32_t TweenedImageAnimation_getAnimationSize(TweenedImageAnimation* this);

void TweenedImageAnimation_nextFrame(TweenedImageAnimation* this);

void TweenedImageAnimation_previousFrame(TweenedImageAnimation* this);

void TweenedImageAnimation_setFrame(TweenedImageAnimation* this, int32_t index);

int32_t TweenedImageAnimation_getFrame(TweenedImageAnimation* this);

int32_t TweenedImageAnimation_getSize(TweenedImageAnimation* this);

void TweenedImageAnimation_setSequence(TweenedImageAnimation* this, int32_t* sequence);

int32_t* TweenedImageAnimation_getSequence(TweenedImageAnimation* this);

void TweenedImageAnimation_paintXY(TweenedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void TweenedImageAnimation_close(TweenedImageAnimation* this);

void TweenedImageAnimation_finalize(TweenedImageAnimation* this);
#define TweenedImageAnimation_new5 TweenedImageAnimation_new
#define TweenedImageAnimation_init5 TweenedImageAnimation_init
#ifndef TweenedImageAnimation_getAnimationBehavior
#define TweenedImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef TweenedImageAnimation_reset
#define TweenedImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef TweenedImageAnimation_isLastFrame
#define TweenedImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef TweenedImageAnimation_setState
#define TweenedImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef TweenedImageAnimation_getWidth
#define TweenedImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef TweenedImageAnimation_getHeight
#define TweenedImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef TweenedImageAnimation_setAlpha
#define TweenedImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef TweenedImageAnimation_paintThreedXYZ
#define TweenedImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef TweenedImageAnimation_isThreed
#define TweenedImageAnimation_isThreed Animation_isThreed
#endif
#ifndef TweenedImageAnimation_getBasicColorP
#define TweenedImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef TweenedImageAnimation_setBasicColorP
#define TweenedImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef TweenedImageAnimation_setBackgroundBasicColorP
#define TweenedImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef TweenedImageAnimation_getChangeBasicColor
#define TweenedImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef TweenedImageAnimation_changeBasicColor
#define TweenedImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef TweenedImageAnimation_getChangeColor
#define TweenedImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef TweenedImageAnimation_getColor
#define TweenedImageAnimation_getColor Animation_getColor
#endif
#ifndef TweenedImageAnimation_setScale
#define TweenedImageAnimation_setScale Animation_setScale
#endif
#ifndef TweenedImageAnimation_setMaxScale
#define TweenedImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef TweenedImageAnimation_set
#define TweenedImageAnimation_set Animation_set
#endif
#ifndef TweenedImageAnimation_setDx
#define TweenedImageAnimation_setDx Animation_setDx
#endif
#ifndef TweenedImageAnimation_getDx
#define TweenedImageAnimation_getDx Animation_getDx
#endif
#ifndef TweenedImageAnimation_setDy
#define TweenedImageAnimation_setDy Animation_setDy
#endif
#ifndef TweenedImageAnimation_getDy
#define TweenedImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TweenedImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TweenedImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_H
