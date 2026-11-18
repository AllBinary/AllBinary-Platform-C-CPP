#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATION_H
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
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct ImageAnimation ImageAnimation;
struct ImageAnimation {
    IndexedAnimation base;
    Image* image;
    int32_t anchor;
};


ImageAnimation* ImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void ImageAnimation_init(ImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);

int32_t ImageAnimation_getAnimationSize(ImageAnimation* this);

void ImageAnimation_nextFrame(ImageAnimation* this);

void ImageAnimation_previousFrame(ImageAnimation* this);

void ImageAnimation_setFrame(ImageAnimation* this, int32_t index);

int32_t ImageAnimation_getFrame(ImageAnimation* this);

int32_t ImageAnimation_getSize(ImageAnimation* this);

void ImageAnimation_setSequence(ImageAnimation* this, int32_t* sequence);

int32_t* ImageAnimation_getSequence(ImageAnimation* this);

void ImageAnimation_paintXY(ImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

Image* ImageAnimation_getImage(ImageAnimation* this);

void ImageAnimation_close(ImageAnimation* this);

void ImageAnimation_finalize(ImageAnimation* this);
#define ImageAnimation_new2 ImageAnimation_new
#define ImageAnimation_init2 ImageAnimation_init
#ifndef ImageAnimation_getAnimationBehavior
#define ImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageAnimation_reset
#define ImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef ImageAnimation_isLastFrame
#define ImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageAnimation_setState
#define ImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageAnimation_getWidth
#define ImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef ImageAnimation_getHeight
#define ImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef ImageAnimation_setAlpha
#define ImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ImageAnimation_paintThreedXYZ
#define ImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageAnimation_isThreed
#define ImageAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageAnimation_getBasicColorP
#define ImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageAnimation_setBasicColorP
#define ImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageAnimation_setBackgroundBasicColorP
#define ImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageAnimation_getChangeBasicColor
#define ImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageAnimation_changeBasicColor
#define ImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageAnimation_getChangeColor
#define ImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageAnimation_getColor
#define ImageAnimation_getColor Animation_getColor
#endif
#ifndef ImageAnimation_setScale
#define ImageAnimation_setScale Animation_setScale
#endif
#ifndef ImageAnimation_setMaxScale
#define ImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageAnimation_set
#define ImageAnimation_set Animation_set
#endif
#ifndef ImageAnimation_setDx
#define ImageAnimation_setDx Animation_setDx
#endif
#ifndef ImageAnimation_getDx
#define ImageAnimation_getDx Animation_getDx
#endif
#ifndef ImageAnimation_setDy
#define ImageAnimation_setDy Animation_setDy
#endif
#ifndef ImageAnimation_getDy
#define ImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageAnimation_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATION_H
