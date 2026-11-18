#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
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
#include "org/allbinary/animation/image/ImageArrayAnimation.h"

typedef struct AdjustedImageArrayAnimation AdjustedImageArrayAnimation;
struct AdjustedImageArrayAnimation {
    ImageArrayAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageArrayAnimation* AdjustedImageArrayAnimation_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageArrayAnimation_initMethod(AdjustedImageArrayAnimation* this, int32_t dx, int32_t dy);

void AdjustedImageArrayAnimation_paintXY(AdjustedImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void AdjustedImageArrayAnimation_setDx(AdjustedImageArrayAnimation* this, int32_t dx);

int32_t AdjustedImageArrayAnimation_getDx(AdjustedImageArrayAnimation* this);

void AdjustedImageArrayAnimation_setDy(AdjustedImageArrayAnimation* this, int32_t dy);

int32_t AdjustedImageArrayAnimation_getDy(AdjustedImageArrayAnimation* this);
#define AdjustedImageArrayAnimation_new4 AdjustedImageArrayAnimation_new
#define AdjustedImageArrayAnimation_init4 AdjustedImageArrayAnimation_init
#ifndef AdjustedImageArrayAnimation_getAnimationSize
#define AdjustedImageArrayAnimation_getAnimationSize ImageArrayAnimation_getAnimationSize
#endif
#ifndef AdjustedImageArrayAnimation_nextFrame
#define AdjustedImageArrayAnimation_nextFrame ImageArrayAnimation_nextFrame
#endif
#ifndef AdjustedImageArrayAnimation_previousFrame
#define AdjustedImageArrayAnimation_previousFrame ImageArrayAnimation_previousFrame
#endif
#ifndef AdjustedImageArrayAnimation_setFrame
#define AdjustedImageArrayAnimation_setFrame ImageArrayAnimation_setFrame
#endif
#ifndef AdjustedImageArrayAnimation_getFrame
#define AdjustedImageArrayAnimation_getFrame ImageArrayAnimation_getFrame
#endif
#ifndef AdjustedImageArrayAnimation_getSize
#define AdjustedImageArrayAnimation_getSize ImageArrayAnimation_getSize
#endif
#ifndef AdjustedImageArrayAnimation_setSequence
#define AdjustedImageArrayAnimation_setSequence ImageArrayAnimation_setSequence
#endif
#ifndef AdjustedImageArrayAnimation_getSequence
#define AdjustedImageArrayAnimation_getSequence ImageArrayAnimation_getSequence
#endif
#ifndef AdjustedImageArrayAnimation_getImage
#define AdjustedImageArrayAnimation_getImage ImageArrayAnimation_getImage
#endif
#ifndef AdjustedImageArrayAnimation_getImageArray
#define AdjustedImageArrayAnimation_getImageArray ImageArrayAnimation_getImageArray
#endif
#ifndef AdjustedImageArrayAnimation_setImageArray
#define AdjustedImageArrayAnimation_setImageArray ImageArrayAnimation_setImageArray
#endif
#ifndef AdjustedImageArrayAnimation_getAnimationBehavior
#define AdjustedImageArrayAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef AdjustedImageArrayAnimation_reset
#define AdjustedImageArrayAnimation_reset IndexedAnimation_reset
#endif
#ifndef AdjustedImageArrayAnimation_setFrame
#define AdjustedImageArrayAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef AdjustedImageArrayAnimation_getFrame
#define AdjustedImageArrayAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef AdjustedImageArrayAnimation_getAnimationSize
#define AdjustedImageArrayAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef AdjustedImageArrayAnimation_getSize
#define AdjustedImageArrayAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef AdjustedImageArrayAnimation_previousFrame
#define AdjustedImageArrayAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef AdjustedImageArrayAnimation_isLastFrame
#define AdjustedImageArrayAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef AdjustedImageArrayAnimation_setSequence
#define AdjustedImageArrayAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef AdjustedImageArrayAnimation_getSequence
#define AdjustedImageArrayAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef AdjustedImageArrayAnimation_setState
#define AdjustedImageArrayAnimation_setState IndexedAnimation_setState
#endif
#ifndef AdjustedImageArrayAnimation_getWidth
#define AdjustedImageArrayAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef AdjustedImageArrayAnimation_getHeight
#define AdjustedImageArrayAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef AdjustedImageArrayAnimation_setAlpha
#define AdjustedImageArrayAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AdjustedImageArrayAnimation_nextFrame
#define AdjustedImageArrayAnimation_nextFrame Animation_nextFrame
#endif
#ifndef AdjustedImageArrayAnimation_paintThreedXYZ
#define AdjustedImageArrayAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef AdjustedImageArrayAnimation_isThreed
#define AdjustedImageArrayAnimation_isThreed Animation_isThreed
#endif
#ifndef AdjustedImageArrayAnimation_getBasicColorP
#define AdjustedImageArrayAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AdjustedImageArrayAnimation_setBasicColorP
#define AdjustedImageArrayAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AdjustedImageArrayAnimation_setBackgroundBasicColorP
#define AdjustedImageArrayAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AdjustedImageArrayAnimation_getChangeBasicColor
#define AdjustedImageArrayAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AdjustedImageArrayAnimation_changeBasicColor
#define AdjustedImageArrayAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AdjustedImageArrayAnimation_getChangeColor
#define AdjustedImageArrayAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AdjustedImageArrayAnimation_getColor
#define AdjustedImageArrayAnimation_getColor Animation_getColor
#endif
#ifndef AdjustedImageArrayAnimation_setScale
#define AdjustedImageArrayAnimation_setScale Animation_setScale
#endif
#ifndef AdjustedImageArrayAnimation_setMaxScale
#define AdjustedImageArrayAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AdjustedImageArrayAnimation_set
#define AdjustedImageArrayAnimation_set Animation_set
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdjustedImageArrayAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdjustedImageArrayAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
