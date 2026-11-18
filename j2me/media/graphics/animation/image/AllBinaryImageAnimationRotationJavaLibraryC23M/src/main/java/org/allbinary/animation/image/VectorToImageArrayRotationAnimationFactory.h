#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H
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
typedef struct AdjustedImageArrayRotationAnimation AdjustedImageArrayRotationAnimation;
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct VectorAnimation VectorAnimation;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct BasicColor BasicColor;
typedef struct AnimationFrameToImageUtil AnimationFrameToImageUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleFactory AngleFactory;
typedef struct AngleInfo AngleInfo;
typedef struct ScaleProperties ScaleProperties;
typedef struct ImageToRotationImageArrayUtil ImageToRotationImageArrayUtil;
typedef struct VectorInfo VectorInfo;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct VectorToImageArrayRotationAnimationFactory VectorToImageArrayRotationAnimationFactory;
struct VectorToImageArrayRotationAnimationFactory {
    BaseImageAnimationFactory base;
    Image** imageArray;
    int32_t angleIncrement;
};


VectorToImageArrayRotationAnimationFactory* VectorToImageArrayRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorToImageArrayRotationAnimationFactory_initMethod(VectorToImageArrayRotationAnimationFactory* this);

Animation* VectorToImageArrayRotationAnimationFactory_getInstance(VectorToImageArrayRotationAnimationFactory* this, int32_t instanceId);

int32_t VectorToImageArrayRotationAnimationFactory_getAngleIncrement(VectorToImageArrayRotationAnimationFactory* this);

void VectorToImageArrayRotationAnimationFactory_setInitialScale(VectorToImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties);
#define VectorToImageArrayRotationAnimationFactory_new3 VectorToImageArrayRotationAnimationFactory_new
#define VectorToImageArrayRotationAnimationFactory_init3 VectorToImageArrayRotationAnimationFactory_init
#ifndef VectorToImageArrayRotationAnimationFactory_createFactoryBase
#define VectorToImageArrayRotationAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef VectorToImageArrayRotationAnimationFactory_getImage
#define VectorToImageArrayRotationAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef VectorToImageArrayRotationAnimationFactory_getSequenceArray
#define VectorToImageArrayRotationAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef VectorToImageArrayRotationAnimationFactory_getAnimationFactoryInitializationVisitorP
#define VectorToImageArrayRotationAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef VectorToImageArrayRotationAnimationFactory_getScalePropertiesP
#define VectorToImageArrayRotationAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef VectorToImageArrayRotationAnimationFactory_toString
#define VectorToImageArrayRotationAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorToImageArrayRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorToImageArrayRotationAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_VECTORTOIMAGEARRAYROTATIONANIMATIONFACTORY_H
