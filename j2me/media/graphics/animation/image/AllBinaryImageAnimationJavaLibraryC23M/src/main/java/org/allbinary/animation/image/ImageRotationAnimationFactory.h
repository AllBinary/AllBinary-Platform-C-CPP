#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEROTATIONANIMATIONFACTORY_H
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
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct ImageBaseRotationAnimation ImageBaseRotationAnimation;
typedef struct AdjustedImageBaseRotationAnimation AdjustedImageBaseRotationAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleFactory AngleFactory;
typedef struct AngleInfo AngleInfo;
// #include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct ImageRotationAnimationFactory ImageRotationAnimationFactory;
struct ImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    int16_t angleIncrement;
};


ImageRotationAnimationFactory* ImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

void ImageRotationAnimationFactory_init(ImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* ImageRotationAnimationFactory_getInstance(ImageRotationAnimationFactory* this, int32_t instanceId);

int16_t ImageRotationAnimationFactory_getAngleIncrementP(ImageRotationAnimationFactory* this);
#define ImageRotationAnimationFactory_new7 ImageRotationAnimationFactory_new
#define ImageRotationAnimationFactory_init7 ImageRotationAnimationFactory_init
#ifndef ImageRotationAnimationFactory_createFactoryBase
#define ImageRotationAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef ImageRotationAnimationFactory_getImage
#define ImageRotationAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef ImageRotationAnimationFactory_getSequenceArray
#define ImageRotationAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef ImageRotationAnimationFactory_setInitialScale
#define ImageRotationAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef ImageRotationAnimationFactory_getAnimationFactoryInitializationVisitorP
#define ImageRotationAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef ImageRotationAnimationFactory_getScalePropertiesP
#define ImageRotationAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef ImageRotationAnimationFactory_toString
#define ImageRotationAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageRotationAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEROTATIONANIMATIONFACTORY_H
