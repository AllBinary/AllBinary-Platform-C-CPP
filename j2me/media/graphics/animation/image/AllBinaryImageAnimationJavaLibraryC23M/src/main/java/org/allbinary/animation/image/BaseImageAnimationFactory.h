#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
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
typedef struct AnimationFactoryInitializationVisitor AnimationFactoryInitializationVisitor;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct AnimationFactoryImageScaleUtil AnimationFactoryImageScaleUtil;
typedef struct StringMaker StringMaker;
typedef struct ScaleProperties ScaleProperties;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/image/AnimationFactoryImageScaleUtil.h")
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#endif
// #include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#if __has_include("org/allbinary/media/ScaleProperties.h")
#include "org/allbinary/media/ScaleProperties.h"
#endif
#if __has_include("org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h")
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#endif

typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
struct BaseImageAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationFactoryImageScaleUtil* animationFactoryImageScaleUtil;
    Image* image;
    AnimationBehaviorFactory* animationBehaviorFactory;
    int32_t* sequenceArray;
    AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor;
    ScaleProperties* scaleProperties;
};


BaseImageAnimationFactory* BaseImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

BaseImageAnimationFactory* BaseImageAnimationFactory_createFactoryBase(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void BaseImageAnimationFactory_init(BaseImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* BaseImageAnimationFactory_getInstance(BaseImageAnimationFactory* this, int32_t instanceId);

Image* BaseImageAnimationFactory_getImage(BaseImageAnimationFactory* this);

int32_t* BaseImageAnimationFactory_getSequenceArray(BaseImageAnimationFactory* this);

void BaseImageAnimationFactory_setInitialScale(BaseImageAnimationFactory* this, ScaleProperties* scaleProperties);

AnimationFactoryInitializationVisitor* BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP(BaseImageAnimationFactory* this);

ScaleProperties* BaseImageAnimationFactory_getScalePropertiesP(BaseImageAnimationFactory* this);

const char* BaseImageAnimationFactory_toString(BaseImageAnimationFactory* this);
#define BaseImageAnimationFactory_new7 BaseImageAnimationFactory_new
#define BaseImageAnimationFactory_init7 BaseImageAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseImageAnimationFactory_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/media/ScaleProperties.h")
#include "org/allbinary/media/ScaleProperties.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_H
