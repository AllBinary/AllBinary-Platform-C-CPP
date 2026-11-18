#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H
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
typedef struct AdjustedImageArrayAnimation AdjustedImageArrayAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct ScaleProperties ScaleProperties;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
// #include "org/allbinary/logic/communication/log/ForcedLogUtil.h"

typedef struct ImageArrayAnimationFactory ImageArrayAnimationFactory;
struct ImageArrayAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t dx;
    int32_t dy;
    Image** imageArray;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


ImageArrayAnimationFactory* ImageArrayAnimationFactory_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void ImageArrayAnimationFactory_init(ImageArrayAnimationFactory* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* ImageArrayAnimationFactory_getInstance(ImageArrayAnimationFactory* this, int32_t instanceId);

void ImageArrayAnimationFactory_setInitialScale(ImageArrayAnimationFactory* this, ScaleProperties* scaleProperties);
#define ImageArrayAnimationFactory_new4 ImageArrayAnimationFactory_new
#define ImageArrayAnimationFactory_init4 ImageArrayAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H
