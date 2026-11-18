#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H
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
typedef struct LeftToRightImageAnimation LeftToRightImageAnimation;
typedef struct AdjustedLeftToRightImageAnimation AdjustedLeftToRightImageAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct LeftToRightImageAnimationFactory LeftToRightImageAnimationFactory;
struct LeftToRightImageAnimationFactory {
    BaseImageAnimationFactory base;
};


LeftToRightImageAnimationFactory* LeftToRightImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void LeftToRightImageAnimationFactory_init(LeftToRightImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* LeftToRightImageAnimationFactory_getInstance(LeftToRightImageAnimationFactory* this, int32_t instanceId);
#define LeftToRightImageAnimationFactory_new5 LeftToRightImageAnimationFactory_new
#define LeftToRightImageAnimationFactory_init5 LeftToRightImageAnimationFactory_init
#ifndef LeftToRightImageAnimationFactory_createFactoryBase
#define LeftToRightImageAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef LeftToRightImageAnimationFactory_getImage
#define LeftToRightImageAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef LeftToRightImageAnimationFactory_getSequenceArray
#define LeftToRightImageAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef LeftToRightImageAnimationFactory_setInitialScale
#define LeftToRightImageAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef LeftToRightImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#define LeftToRightImageAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef LeftToRightImageAnimationFactory_getScalePropertiesP
#define LeftToRightImageAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef LeftToRightImageAnimationFactory_toString
#define LeftToRightImageAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LeftToRightImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LeftToRightImageAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H
