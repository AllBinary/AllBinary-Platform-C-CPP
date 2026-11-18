#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_H
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
typedef struct RotationAnimation RotationAnimation;
typedef struct Anchor Anchor;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleInfo AngleInfo;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/RotationAnimation.h"

typedef struct ImageBaseRotationAnimation ImageBaseRotationAnimation;
struct ImageBaseRotationAnimation {
    RotationAnimation base;
    Image* image;
    int32_t anchor;
};


ImageBaseRotationAnimation* ImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void ImageBaseRotationAnimation_init(ImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

int32_t ImageBaseRotationAnimation_getAnimationSize(ImageBaseRotationAnimation* this);

void ImageBaseRotationAnimation_setSequence(ImageBaseRotationAnimation* this, int32_t* sequence);

int32_t* ImageBaseRotationAnimation_getSequence(ImageBaseRotationAnimation* this);

void ImageBaseRotationAnimation_paintXY(ImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

Image* ImageBaseRotationAnimation_getImage(ImageBaseRotationAnimation* this);

int32_t ImageBaseRotationAnimation_getWidth(ImageBaseRotationAnimation* this);

int32_t ImageBaseRotationAnimation_getHeight(ImageBaseRotationAnimation* this);

void ImageBaseRotationAnimation_close(ImageBaseRotationAnimation* this);

void ImageBaseRotationAnimation_finalize(ImageBaseRotationAnimation* this);
#define ImageBaseRotationAnimation_new4 ImageBaseRotationAnimation_new
#define ImageBaseRotationAnimation_init4 ImageBaseRotationAnimation_init
#ifndef ImageBaseRotationAnimation_nextRotationX
#define ImageBaseRotationAnimation_nextRotationX RotationAnimation_nextRotationX
#endif
#ifndef ImageBaseRotationAnimation_previousRotationX
#define ImageBaseRotationAnimation_previousRotationX RotationAnimation_previousRotationX
#endif
#ifndef ImageBaseRotationAnimation_nextRotation
#define ImageBaseRotationAnimation_nextRotation RotationAnimation_nextRotation
#endif
#ifndef ImageBaseRotationAnimation_previousRotation
#define ImageBaseRotationAnimation_previousRotation RotationAnimation_previousRotation
#endif
#ifndef ImageBaseRotationAnimation_nextRotationZ
#define ImageBaseRotationAnimation_nextRotationZ RotationAnimation_nextRotationZ
#endif
#ifndef ImageBaseRotationAnimation_previousRotationZ
#define ImageBaseRotationAnimation_previousRotationZ RotationAnimation_previousRotationZ
#endif
#ifndef ImageBaseRotationAnimation_setFrame
#define ImageBaseRotationAnimation_setFrame RotationAnimation_setFrame
#endif
#ifndef ImageBaseRotationAnimation_setFrameByDirection
#define ImageBaseRotationAnimation_setFrameByDirection RotationAnimation_setFrameByDirection
#endif
#ifndef ImageBaseRotationAnimation_setFrameToAngle
#define ImageBaseRotationAnimation_setFrameToAngle RotationAnimation_setFrameToAngle
#endif
#ifndef ImageBaseRotationAnimation_adjustFrameToAngle
#define ImageBaseRotationAnimation_adjustFrameToAngle RotationAnimation_adjustFrameToAngle
#endif
#ifndef ImageBaseRotationAnimation_adjustFrame
#define ImageBaseRotationAnimation_adjustFrame RotationAnimation_adjustFrame
#endif
#ifndef ImageBaseRotationAnimation_getFrame
#define ImageBaseRotationAnimation_getFrame RotationAnimation_getFrame
#endif
#ifndef ImageBaseRotationAnimation_getSize
#define ImageBaseRotationAnimation_getSize RotationAnimation_getSize
#endif
#ifndef ImageBaseRotationAnimation_getAngleInfoP
#define ImageBaseRotationAnimation_getAngleInfoP RotationAnimation_getAngleInfoP
#endif
#ifndef ImageBaseRotationAnimation_toString
#define ImageBaseRotationAnimation_toString RotationAnimation_toString
#endif
#ifndef ImageBaseRotationAnimation_getAnimationBehavior
#define ImageBaseRotationAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageBaseRotationAnimation_reset
#define ImageBaseRotationAnimation_reset IndexedAnimation_reset
#endif
#ifndef ImageBaseRotationAnimation_setFrame
#define ImageBaseRotationAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef ImageBaseRotationAnimation_getFrame
#define ImageBaseRotationAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef ImageBaseRotationAnimation_getSize
#define ImageBaseRotationAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef ImageBaseRotationAnimation_previousFrame
#define ImageBaseRotationAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef ImageBaseRotationAnimation_isLastFrame
#define ImageBaseRotationAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageBaseRotationAnimation_setState
#define ImageBaseRotationAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageBaseRotationAnimation_setAlpha
#define ImageBaseRotationAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ImageBaseRotationAnimation_nextFrame
#define ImageBaseRotationAnimation_nextFrame Animation_nextFrame
#endif
#ifndef ImageBaseRotationAnimation_paintThreedXYZ
#define ImageBaseRotationAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageBaseRotationAnimation_isThreed
#define ImageBaseRotationAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageBaseRotationAnimation_getBasicColorP
#define ImageBaseRotationAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageBaseRotationAnimation_setBasicColorP
#define ImageBaseRotationAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageBaseRotationAnimation_setBackgroundBasicColorP
#define ImageBaseRotationAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageBaseRotationAnimation_getChangeBasicColor
#define ImageBaseRotationAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageBaseRotationAnimation_changeBasicColor
#define ImageBaseRotationAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageBaseRotationAnimation_getChangeColor
#define ImageBaseRotationAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageBaseRotationAnimation_getColor
#define ImageBaseRotationAnimation_getColor Animation_getColor
#endif
#ifndef ImageBaseRotationAnimation_setScale
#define ImageBaseRotationAnimation_setScale Animation_setScale
#endif
#ifndef ImageBaseRotationAnimation_setMaxScale
#define ImageBaseRotationAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageBaseRotationAnimation_set
#define ImageBaseRotationAnimation_set Animation_set
#endif
#ifndef ImageBaseRotationAnimation_setDx
#define ImageBaseRotationAnimation_setDx Animation_setDx
#endif
#ifndef ImageBaseRotationAnimation_getDx
#define ImageBaseRotationAnimation_getDx Animation_getDx
#endif
#ifndef ImageBaseRotationAnimation_setDy
#define ImageBaseRotationAnimation_setDy Animation_setDy
#endif
#ifndef ImageBaseRotationAnimation_getDy
#define ImageBaseRotationAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageBaseRotationAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageBaseRotationAnimation_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_H
