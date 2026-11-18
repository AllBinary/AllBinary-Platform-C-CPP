#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_H
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
typedef struct TopToBottomImageAnimation TopToBottomImageAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct TopToBottomImageAnimationFactory TopToBottomImageAnimationFactory;
struct TopToBottomImageAnimationFactory {
    BaseImageAnimationFactory base;
};


TopToBottomImageAnimationFactory* TopToBottomImageAnimationFactory_new(Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void TopToBottomImageAnimationFactory_init(TopToBottomImageAnimationFactory* this, Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* TopToBottomImageAnimationFactory_getInstance(TopToBottomImageAnimationFactory* this, int32_t instanceId);
#define TopToBottomImageAnimationFactory_new3 TopToBottomImageAnimationFactory_new
#define TopToBottomImageAnimationFactory_init3 TopToBottomImageAnimationFactory_init
#ifndef TopToBottomImageAnimationFactory_createFactoryBase
#define TopToBottomImageAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef TopToBottomImageAnimationFactory_getImage
#define TopToBottomImageAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef TopToBottomImageAnimationFactory_getSequenceArray
#define TopToBottomImageAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef TopToBottomImageAnimationFactory_setInitialScale
#define TopToBottomImageAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef TopToBottomImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#define TopToBottomImageAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef TopToBottomImageAnimationFactory_getScalePropertiesP
#define TopToBottomImageAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef TopToBottomImageAnimationFactory_toString
#define TopToBottomImageAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TopToBottomImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TopToBottomImageAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_H
