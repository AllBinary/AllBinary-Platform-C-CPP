#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/animation/image/ImageAnimation.h"

typedef struct AdjustedImageAnimation AdjustedImageAnimation;
struct AdjustedImageAnimation {
    ImageAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageAnimation* AdjustedImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageAnimation_init(AdjustedImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageAnimation_initMethod(AdjustedImageAnimation* this, int32_t dx, int32_t dy);

void AdjustedImageAnimation_paintXY(AdjustedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void AdjustedImageAnimation_setDx(AdjustedImageAnimation* this, int32_t dx);

int32_t AdjustedImageAnimation_getDx(AdjustedImageAnimation* this);

void AdjustedImageAnimation_setDy(AdjustedImageAnimation* this, int32_t dy);

int32_t AdjustedImageAnimation_getDy(AdjustedImageAnimation* this);
#define AdjustedImageAnimation_new4 AdjustedImageAnimation_new
#define AdjustedImageAnimation_init4 AdjustedImageAnimation_init
#ifndef AdjustedImageAnimation_getAnimationSize
#define AdjustedImageAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef AdjustedImageAnimation_nextFrame
#define AdjustedImageAnimation_nextFrame ImageAnimation_nextFrame
#endif
#ifndef AdjustedImageAnimation_previousFrame
#define AdjustedImageAnimation_previousFrame ImageAnimation_previousFrame
#endif
#ifndef AdjustedImageAnimation_setFrame
#define AdjustedImageAnimation_setFrame ImageAnimation_setFrame
#endif
#ifndef AdjustedImageAnimation_getFrame
#define AdjustedImageAnimation_getFrame ImageAnimation_getFrame
#endif
#ifndef AdjustedImageAnimation_getSize
#define AdjustedImageAnimation_getSize ImageAnimation_getSize
#endif
#ifndef AdjustedImageAnimation_setSequence
#define AdjustedImageAnimation_setSequence ImageAnimation_setSequence
#endif
#ifndef AdjustedImageAnimation_getSequence
#define AdjustedImageAnimation_getSequence ImageAnimation_getSequence
#endif
#ifndef AdjustedImageAnimation_getImage
#define AdjustedImageAnimation_getImage ImageAnimation_getImage
#endif
#ifndef AdjustedImageAnimation_close
#define AdjustedImageAnimation_close ImageAnimation_close
#endif
#ifndef AdjustedImageAnimation_finalize
#define AdjustedImageAnimation_finalize ImageAnimation_finalize
#endif
#ifndef AdjustedImageAnimation_getAnimationBehavior
#define AdjustedImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef AdjustedImageAnimation_reset
#define AdjustedImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef AdjustedImageAnimation_setFrame
#define AdjustedImageAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef AdjustedImageAnimation_getFrame
#define AdjustedImageAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef AdjustedImageAnimation_getAnimationSize
#define AdjustedImageAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef AdjustedImageAnimation_getSize
#define AdjustedImageAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef AdjustedImageAnimation_previousFrame
#define AdjustedImageAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef AdjustedImageAnimation_isLastFrame
#define AdjustedImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef AdjustedImageAnimation_setSequence
#define AdjustedImageAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef AdjustedImageAnimation_getSequence
#define AdjustedImageAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef AdjustedImageAnimation_setState
#define AdjustedImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef AdjustedImageAnimation_getWidth
#define AdjustedImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef AdjustedImageAnimation_getHeight
#define AdjustedImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef AdjustedImageAnimation_setAlpha
#define AdjustedImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AdjustedImageAnimation_nextFrame
#define AdjustedImageAnimation_nextFrame Animation_nextFrame
#endif
#ifndef AdjustedImageAnimation_paintThreedXYZ
#define AdjustedImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef AdjustedImageAnimation_isThreed
#define AdjustedImageAnimation_isThreed Animation_isThreed
#endif
#ifndef AdjustedImageAnimation_getBasicColorP
#define AdjustedImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AdjustedImageAnimation_setBasicColorP
#define AdjustedImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AdjustedImageAnimation_setBackgroundBasicColorP
#define AdjustedImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AdjustedImageAnimation_getChangeBasicColor
#define AdjustedImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AdjustedImageAnimation_changeBasicColor
#define AdjustedImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AdjustedImageAnimation_getChangeColor
#define AdjustedImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AdjustedImageAnimation_getColor
#define AdjustedImageAnimation_getColor Animation_getColor
#endif
#ifndef AdjustedImageAnimation_setScale
#define AdjustedImageAnimation_setScale Animation_setScale
#endif
#ifndef AdjustedImageAnimation_setMaxScale
#define AdjustedImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AdjustedImageAnimation_set
#define AdjustedImageAnimation_set Animation_set
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdjustedImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdjustedImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_H
