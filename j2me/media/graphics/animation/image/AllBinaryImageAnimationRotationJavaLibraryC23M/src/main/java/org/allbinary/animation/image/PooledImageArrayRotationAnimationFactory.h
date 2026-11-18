#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
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
typedef struct ImageArrayRotationAnimationInfo ImageArrayRotationAnimationInfo;
typedef struct AdjustedImageArrayRotationAnimation AdjustedImageArrayRotationAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct NullUtil NullUtil;
typedef struct AngleFactory AngleFactory;
typedef struct ScaleProperties ScaleProperties;
typedef struct ImageToRotationImageArrayUtil ImageToRotationImageArrayUtil;
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

//TWB - Adjustments should be done in the resource creation and not at the animation level
typedef struct PooledImageArrayRotationAnimationFactory PooledImageArrayRotationAnimationFactory;
struct PooledImageArrayRotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    void* allBinaryImageRotationAnimationInfo;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void PooledImageArrayRotationAnimationFactory_init(PooledImageArrayRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* PooledImageArrayRotationAnimationFactory_getInstance(PooledImageArrayRotationAnimationFactory* this, int32_t instanceId);

void PooledImageArrayRotationAnimationFactory_setInitialScale(PooledImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties);
#define PooledImageArrayRotationAnimationFactory_new7 PooledImageArrayRotationAnimationFactory_new
#define PooledImageArrayRotationAnimationFactory_init7 PooledImageArrayRotationAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PooledImageArrayRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PooledImageArrayRotationAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
