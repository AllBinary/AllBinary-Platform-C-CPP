#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
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
typedef struct ImageAnimation ImageAnimation;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "org/allbinary/animation/image/ImageAnimation.h"

typedef struct ImageSegmentAnimation ImageSegmentAnimation;
struct ImageSegmentAnimation {
    ImageAnimation base;
    int32_t startX;
    int32_t startY;
    int32_t drawWidth;
    int32_t drawHeight;
    CircularIndexUtil* circularIndexUtil;
    int32_t* sequenceArray;
};


ImageSegmentAnimation* ImageSegmentAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void ImageSegmentAnimation_init(ImageSegmentAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void ImageSegmentAnimation_nextFrame(ImageSegmentAnimation* this);

void ImageSegmentAnimation_previousFrame(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setFrame(ImageSegmentAnimation* this, int32_t index);

int32_t ImageSegmentAnimation_getFrame(ImageSegmentAnimation* this);

int32_t ImageSegmentAnimation_getSize(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setSequence(ImageSegmentAnimation* this, int32_t* sequenceArray);

int32_t* ImageSegmentAnimation_getSequence(ImageSegmentAnimation* this);

void ImageSegmentAnimation_paintXY(ImageSegmentAnimation* this, Graphics* graphics, int32_t x, int32_t y);

int32_t ImageSegmentAnimation_getStartX(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setStartX(ImageSegmentAnimation* this, int32_t startX);

int32_t ImageSegmentAnimation_getStartY(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setStartY(ImageSegmentAnimation* this, int32_t startY);

int32_t ImageSegmentAnimation_getDrawWidth(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setDrawWidth(ImageSegmentAnimation* this, int32_t drawWidth);

int32_t ImageSegmentAnimation_getDrawHeight(ImageSegmentAnimation* this);

void ImageSegmentAnimation_setDrawHeight(ImageSegmentAnimation* this, int32_t drawHeight);
#define ImageSegmentAnimation_new3 ImageSegmentAnimation_new
#define ImageSegmentAnimation_init3 ImageSegmentAnimation_init
#ifndef ImageSegmentAnimation_getAnimationSize
#define ImageSegmentAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef ImageSegmentAnimation_getImage
#define ImageSegmentAnimation_getImage ImageAnimation_getImage
#endif
#ifndef ImageSegmentAnimation_close
#define ImageSegmentAnimation_close ImageAnimation_close
#endif
#ifndef ImageSegmentAnimation_finalize
#define ImageSegmentAnimation_finalize ImageAnimation_finalize
#endif
#ifndef ImageSegmentAnimation_getAnimationBehavior
#define ImageSegmentAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageSegmentAnimation_reset
#define ImageSegmentAnimation_reset IndexedAnimation_reset
#endif
#ifndef ImageSegmentAnimation_getAnimationSize
#define ImageSegmentAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef ImageSegmentAnimation_isLastFrame
#define ImageSegmentAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageSegmentAnimation_setState
#define ImageSegmentAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageSegmentAnimation_getWidth
#define ImageSegmentAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef ImageSegmentAnimation_getHeight
#define ImageSegmentAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef ImageSegmentAnimation_setAlpha
#define ImageSegmentAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ImageSegmentAnimation_paintThreedXYZ
#define ImageSegmentAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageSegmentAnimation_isThreed
#define ImageSegmentAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageSegmentAnimation_getBasicColorP
#define ImageSegmentAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageSegmentAnimation_setBasicColorP
#define ImageSegmentAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageSegmentAnimation_setBackgroundBasicColorP
#define ImageSegmentAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageSegmentAnimation_getChangeBasicColor
#define ImageSegmentAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageSegmentAnimation_changeBasicColor
#define ImageSegmentAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageSegmentAnimation_getChangeColor
#define ImageSegmentAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageSegmentAnimation_getColor
#define ImageSegmentAnimation_getColor Animation_getColor
#endif
#ifndef ImageSegmentAnimation_setScale
#define ImageSegmentAnimation_setScale Animation_setScale
#endif
#ifndef ImageSegmentAnimation_setMaxScale
#define ImageSegmentAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageSegmentAnimation_set
#define ImageSegmentAnimation_set Animation_set
#endif
#ifndef ImageSegmentAnimation_setDx
#define ImageSegmentAnimation_setDx Animation_setDx
#endif
#ifndef ImageSegmentAnimation_getDx
#define ImageSegmentAnimation_getDx Animation_getDx
#endif
#ifndef ImageSegmentAnimation_setDy
#define ImageSegmentAnimation_setDy Animation_setDy
#endif
#ifndef ImageSegmentAnimation_getDy
#define ImageSegmentAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageSegmentAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageSegmentAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
