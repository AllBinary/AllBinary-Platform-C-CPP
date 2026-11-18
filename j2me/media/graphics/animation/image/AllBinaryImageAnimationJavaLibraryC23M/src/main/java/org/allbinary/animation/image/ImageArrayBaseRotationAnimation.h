#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
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
typedef struct NullImage NullImage;
typedef struct DisposalUtil DisposalUtil;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct RotationAnimation RotationAnimation;
typedef struct Anchor Anchor;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleInfo AngleInfo;
typedef struct ImageModifierUtil ImageModifierUtil;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/RotationAnimation.h"
#if __has_include("org/allbinary/media/image/ImageModifierUtil.h")
#include "org/allbinary/media/image/ImageModifierUtil.h"
#endif

typedef struct ImageArrayBaseRotationAnimation ImageArrayBaseRotationAnimation;
struct ImageArrayBaseRotationAnimation {
    RotationAnimation base;
    ImageModifierUtil* imageModifierUtil;
    Image** originalImageArray;
    Image** imageArray;
    Image* currentImage;
    int32_t totalFrames;
    int32_t anchor;
};


ImageArrayBaseRotationAnimation* ImageArrayBaseRotationAnimation_new(Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);

void ImageArrayBaseRotationAnimation_init(ImageArrayBaseRotationAnimation* this, Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);

int32_t ImageArrayBaseRotationAnimation_getAnimationSize(ImageArrayBaseRotationAnimation* this);

void ImageArrayBaseRotationAnimation_setAlpha(ImageArrayBaseRotationAnimation* this, int32_t alpha);

void ImageArrayBaseRotationAnimation_nextRotation(ImageArrayBaseRotationAnimation* this);

void ImageArrayBaseRotationAnimation_previousRotation(ImageArrayBaseRotationAnimation* this);

void ImageArrayBaseRotationAnimation_setFrame(ImageArrayBaseRotationAnimation* this, int32_t index2);

void ImageArrayBaseRotationAnimation_setSequence(ImageArrayBaseRotationAnimation* this, int32_t* sequence);

int32_t* ImageArrayBaseRotationAnimation_getSequence(ImageArrayBaseRotationAnimation* this);

void ImageArrayBaseRotationAnimation_setImageArray(ImageArrayBaseRotationAnimation* this, Image** imageArray);

void ImageArrayBaseRotationAnimation_paintXY(ImageArrayBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void ImageArrayBaseRotationAnimation_close(ImageArrayBaseRotationAnimation* this);

void ImageArrayBaseRotationAnimation_finalize(ImageArrayBaseRotationAnimation* this);
#define ImageArrayBaseRotationAnimation_new3 ImageArrayBaseRotationAnimation_new
#define ImageArrayBaseRotationAnimation_init3 ImageArrayBaseRotationAnimation_init
#ifndef ImageArrayBaseRotationAnimation_nextRotationX
#define ImageArrayBaseRotationAnimation_nextRotationX RotationAnimation_nextRotationX
#endif
#ifndef ImageArrayBaseRotationAnimation_previousRotationX
#define ImageArrayBaseRotationAnimation_previousRotationX RotationAnimation_previousRotationX
#endif
#ifndef ImageArrayBaseRotationAnimation_nextRotationZ
#define ImageArrayBaseRotationAnimation_nextRotationZ RotationAnimation_nextRotationZ
#endif
#ifndef ImageArrayBaseRotationAnimation_previousRotationZ
#define ImageArrayBaseRotationAnimation_previousRotationZ RotationAnimation_previousRotationZ
#endif
#ifndef ImageArrayBaseRotationAnimation_setFrameByDirection
#define ImageArrayBaseRotationAnimation_setFrameByDirection RotationAnimation_setFrameByDirection
#endif
#ifndef ImageArrayBaseRotationAnimation_setFrameToAngle
#define ImageArrayBaseRotationAnimation_setFrameToAngle RotationAnimation_setFrameToAngle
#endif
#ifndef ImageArrayBaseRotationAnimation_adjustFrameToAngle
#define ImageArrayBaseRotationAnimation_adjustFrameToAngle RotationAnimation_adjustFrameToAngle
#endif
#ifndef ImageArrayBaseRotationAnimation_adjustFrame
#define ImageArrayBaseRotationAnimation_adjustFrame RotationAnimation_adjustFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_getFrame
#define ImageArrayBaseRotationAnimation_getFrame RotationAnimation_getFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_getSize
#define ImageArrayBaseRotationAnimation_getSize RotationAnimation_getSize
#endif
#ifndef ImageArrayBaseRotationAnimation_getAngleInfoP
#define ImageArrayBaseRotationAnimation_getAngleInfoP RotationAnimation_getAngleInfoP
#endif
#ifndef ImageArrayBaseRotationAnimation_toString
#define ImageArrayBaseRotationAnimation_toString RotationAnimation_toString
#endif
#ifndef ImageArrayBaseRotationAnimation_getAnimationBehavior
#define ImageArrayBaseRotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageArrayBaseRotationAnimation_reset
#define ImageArrayBaseRotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef ImageArrayBaseRotationAnimation_getFrame
#define ImageArrayBaseRotationAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_getSize
#define ImageArrayBaseRotationAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef ImageArrayBaseRotationAnimation_previousFrame
#define ImageArrayBaseRotationAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_isLastFrame
#define ImageArrayBaseRotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_setState
#define ImageArrayBaseRotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageArrayBaseRotationAnimation_getWidth
#define ImageArrayBaseRotationAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef ImageArrayBaseRotationAnimation_getHeight
#define ImageArrayBaseRotationAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef ImageArrayBaseRotationAnimation_nextFrame
#define ImageArrayBaseRotationAnimation_nextFrame Animation_nextFrame
#endif
#ifndef ImageArrayBaseRotationAnimation_paintThreedXYZ
#define ImageArrayBaseRotationAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageArrayBaseRotationAnimation_isThreed
#define ImageArrayBaseRotationAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageArrayBaseRotationAnimation_getBasicColorP
#define ImageArrayBaseRotationAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageArrayBaseRotationAnimation_setBasicColorP
#define ImageArrayBaseRotationAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageArrayBaseRotationAnimation_setBackgroundBasicColorP
#define ImageArrayBaseRotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageArrayBaseRotationAnimation_getChangeBasicColor
#define ImageArrayBaseRotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageArrayBaseRotationAnimation_changeBasicColor
#define ImageArrayBaseRotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageArrayBaseRotationAnimation_getChangeColor
#define ImageArrayBaseRotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageArrayBaseRotationAnimation_getColor
#define ImageArrayBaseRotationAnimation_getColor Animation_getColor
#endif
#ifndef ImageArrayBaseRotationAnimation_setScale
#define ImageArrayBaseRotationAnimation_setScale Animation_setScale
#endif
#ifndef ImageArrayBaseRotationAnimation_setMaxScale
#define ImageArrayBaseRotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageArrayBaseRotationAnimation_set
#define ImageArrayBaseRotationAnimation_set Animation_set
#endif
#ifndef ImageArrayBaseRotationAnimation_setDx
#define ImageArrayBaseRotationAnimation_setDx Animation_setDx
#endif
#ifndef ImageArrayBaseRotationAnimation_getDx
#define ImageArrayBaseRotationAnimation_getDx Animation_getDx
#endif
#ifndef ImageArrayBaseRotationAnimation_setDy
#define ImageArrayBaseRotationAnimation_setDy Animation_setDy
#endif
#ifndef ImageArrayBaseRotationAnimation_getDy
#define ImageArrayBaseRotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayBaseRotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayBaseRotationAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
