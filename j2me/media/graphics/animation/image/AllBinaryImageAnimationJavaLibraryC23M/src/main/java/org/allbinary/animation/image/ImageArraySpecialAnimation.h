#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H
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
typedef struct ImageArrayAnimation ImageArrayAnimation;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct SpecialAnimationInterface SpecialAnimationInterface;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/animation/image/ImageArrayAnimation.h"

typedef struct ImageArraySpecialAnimation ImageArraySpecialAnimation;
struct ImageArraySpecialAnimation {
    ImageArrayAnimation base;
    SpecialAnimationInterface SpecialAnimationInterface_interface;
    TimeDelayHelper* timeDelayHelper;
    int32_t loopCount;
    int32_t loopCountTotal;
};


ImageArraySpecialAnimation* ImageArraySpecialAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior);

void ImageArraySpecialAnimation_init(ImageArraySpecialAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior);

int32_t ImageArraySpecialAnimation_getLoopCount(ImageArraySpecialAnimation* this);

void ImageArraySpecialAnimation_setLastFrame(ImageArraySpecialAnimation* this);

void ImageArraySpecialAnimation_reset(ImageArraySpecialAnimation* this);

void ImageArraySpecialAnimation_nextFrame(ImageArraySpecialAnimation* this);

bool ImageArraySpecialAnimation_isComplete(ImageArraySpecialAnimation* this);

void ImageArraySpecialAnimation_paintXY(ImageArraySpecialAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define ImageArraySpecialAnimation_new2 ImageArraySpecialAnimation_new
#define ImageArraySpecialAnimation_init2 ImageArraySpecialAnimation_init
#ifndef ImageArraySpecialAnimation_getAnimationSize
#define ImageArraySpecialAnimation_getAnimationSize ImageArrayAnimation_getAnimationSize
#endif
#ifndef ImageArraySpecialAnimation_previousFrame
#define ImageArraySpecialAnimation_previousFrame ImageArrayAnimation_previousFrame
#endif
#ifndef ImageArraySpecialAnimation_setFrame
#define ImageArraySpecialAnimation_setFrame ImageArrayAnimation_setFrame
#endif
#ifndef ImageArraySpecialAnimation_getFrame
#define ImageArraySpecialAnimation_getFrame ImageArrayAnimation_getFrame
#endif
#ifndef ImageArraySpecialAnimation_getSize
#define ImageArraySpecialAnimation_getSize ImageArrayAnimation_getSize
#endif
#ifndef ImageArraySpecialAnimation_setSequence
#define ImageArraySpecialAnimation_setSequence ImageArrayAnimation_setSequence
#endif
#ifndef ImageArraySpecialAnimation_getSequence
#define ImageArraySpecialAnimation_getSequence ImageArrayAnimation_getSequence
#endif
#ifndef ImageArraySpecialAnimation_getImage
#define ImageArraySpecialAnimation_getImage ImageArrayAnimation_getImage
#endif
#ifndef ImageArraySpecialAnimation_getImageArray
#define ImageArraySpecialAnimation_getImageArray ImageArrayAnimation_getImageArray
#endif
#ifndef ImageArraySpecialAnimation_setImageArray
#define ImageArraySpecialAnimation_setImageArray ImageArrayAnimation_setImageArray
#endif
#ifndef ImageArraySpecialAnimation_getAnimationBehavior
#define ImageArraySpecialAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef ImageArraySpecialAnimation_setFrame
#define ImageArraySpecialAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef ImageArraySpecialAnimation_getFrame
#define ImageArraySpecialAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef ImageArraySpecialAnimation_getAnimationSize
#define ImageArraySpecialAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef ImageArraySpecialAnimation_getSize
#define ImageArraySpecialAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef ImageArraySpecialAnimation_previousFrame
#define ImageArraySpecialAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef ImageArraySpecialAnimation_isLastFrame
#define ImageArraySpecialAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef ImageArraySpecialAnimation_setSequence
#define ImageArraySpecialAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef ImageArraySpecialAnimation_getSequence
#define ImageArraySpecialAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef ImageArraySpecialAnimation_setState
#define ImageArraySpecialAnimation_setState IndexedAnimation_setState
#endif
#ifndef ImageArraySpecialAnimation_getWidth
#define ImageArraySpecialAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef ImageArraySpecialAnimation_getHeight
#define ImageArraySpecialAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef ImageArraySpecialAnimation_setAlpha
#define ImageArraySpecialAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ImageArraySpecialAnimation_paintThreedXYZ
#define ImageArraySpecialAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ImageArraySpecialAnimation_isThreed
#define ImageArraySpecialAnimation_isThreed Animation_isThreed
#endif
#ifndef ImageArraySpecialAnimation_getBasicColorP
#define ImageArraySpecialAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ImageArraySpecialAnimation_setBasicColorP
#define ImageArraySpecialAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ImageArraySpecialAnimation_setBackgroundBasicColorP
#define ImageArraySpecialAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ImageArraySpecialAnimation_getChangeBasicColor
#define ImageArraySpecialAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ImageArraySpecialAnimation_changeBasicColor
#define ImageArraySpecialAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ImageArraySpecialAnimation_getChangeColor
#define ImageArraySpecialAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ImageArraySpecialAnimation_getColor
#define ImageArraySpecialAnimation_getColor Animation_getColor
#endif
#ifndef ImageArraySpecialAnimation_setScale
#define ImageArraySpecialAnimation_setScale Animation_setScale
#endif
#ifndef ImageArraySpecialAnimation_setMaxScale
#define ImageArraySpecialAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ImageArraySpecialAnimation_set
#define ImageArraySpecialAnimation_set Animation_set
#endif
#ifndef ImageArraySpecialAnimation_setDx
#define ImageArraySpecialAnimation_setDx Animation_setDx
#endif
#ifndef ImageArraySpecialAnimation_getDx
#define ImageArraySpecialAnimation_getDx Animation_getDx
#endif
#ifndef ImageArraySpecialAnimation_setDy
#define ImageArraySpecialAnimation_setDy Animation_setDy
#endif
#ifndef ImageArraySpecialAnimation_getDy
#define ImageArraySpecialAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArraySpecialAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArraySpecialAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_H
