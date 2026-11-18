#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H
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

typedef struct ImageArrayAnimation ImageArrayAnimation;
struct ImageArrayAnimation {
    IndexedAnimation base;
    Image** imageArray;
    int32_t totalFrames;
    CircularIndexUtil* circularIndexUtil;
    int32_t anchor;
};


ImageArrayAnimation* ImageArrayAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior);

void ImageArrayAnimation_init(ImageArrayAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior);

int32_t ImageArrayAnimation_getAnimationSize(ImageArrayAnimation* this);

void ImageArrayAnimation_nextFrame(ImageArrayAnimation* this);

void ImageArrayAnimation_previousFrame(ImageArrayAnimation* this);

void ImageArrayAnimation_setFrame(ImageArrayAnimation* this, int32_t index);

int32_t ImageArrayAnimation_getFrame(ImageArrayAnimation* this);

int32_t ImageArrayAnimation_getSize(ImageArrayAnimation* this);

void ImageArrayAnimation_setSequence(ImageArrayAnimation* this, int32_t* sequence);

int32_t* ImageArrayAnimation_getSequence(ImageArrayAnimation* this);

Image* ImageArrayAnimation_getImage(ImageArrayAnimation* this, int32_t index);

Image** ImageArrayAnimation_getImageArray(ImageArrayAnimation* this);

void ImageArrayAnimation_setImageArray(ImageArrayAnimation* this, Image** imageArray);

void ImageArrayAnimation_paintXY(ImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define ImageArrayAnimation_new2 ImageArrayAnimation_new
#define ImageArrayAnimation_init2 ImageArrayAnimation_init
#ifndef ImageArrayAnimation_getAnimationBehavior
#define ImageArrayAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageArrayAnimation_reset
#define ImageArrayAnimation_reset IndexedAnimation_reset
#endif
#ifndef ImageArrayAnimation_isLastFrame
#define ImageArrayAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageArrayAnimation_setState
#define ImageArrayAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageArrayAnimation_getWidth
#define ImageArrayAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef ImageArrayAnimation_getHeight
#define ImageArrayAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef ImageArrayAnimation_setAlpha
#define ImageArrayAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ImageArrayAnimation_paintThreedXYZ
#define ImageArrayAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageArrayAnimation_isThreed
#define ImageArrayAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageArrayAnimation_getBasicColorP
#define ImageArrayAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageArrayAnimation_setBasicColorP
#define ImageArrayAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageArrayAnimation_setBackgroundBasicColorP
#define ImageArrayAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageArrayAnimation_getChangeBasicColor
#define ImageArrayAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageArrayAnimation_changeBasicColor
#define ImageArrayAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageArrayAnimation_getChangeColor
#define ImageArrayAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageArrayAnimation_getColor
#define ImageArrayAnimation_getColor Animation_getColor
#endif
#ifndef ImageArrayAnimation_setScale
#define ImageArrayAnimation_setScale Animation_setScale
#endif
#ifndef ImageArrayAnimation_setMaxScale
#define ImageArrayAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageArrayAnimation_set
#define ImageArrayAnimation_set Animation_set
#endif
#ifndef ImageArrayAnimation_setDx
#define ImageArrayAnimation_setDx Animation_setDx
#endif
#ifndef ImageArrayAnimation_getDx
#define ImageArrayAnimation_getDx Animation_getDx
#endif
#ifndef ImageArrayAnimation_setDy
#define ImageArrayAnimation_setDy Animation_setDy
#endif
#ifndef ImageArrayAnimation_getDy
#define ImageArrayAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayAnimation_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H
