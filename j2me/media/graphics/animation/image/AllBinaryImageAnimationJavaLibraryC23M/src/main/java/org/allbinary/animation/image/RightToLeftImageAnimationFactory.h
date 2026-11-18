#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H
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
typedef struct RightToLeftImageAnimation RightToLeftImageAnimation;
typedef struct AdjustedRightToLeftImageAnimation AdjustedRightToLeftImageAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct RightToLeftImageAnimationFactory RightToLeftImageAnimationFactory;
struct RightToLeftImageAnimationFactory {
    BaseImageAnimationFactory base;
};


RightToLeftImageAnimationFactory* RightToLeftImageAnimationFactory_new(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void RightToLeftImageAnimationFactory_init(RightToLeftImageAnimationFactory* this, Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* RightToLeftImageAnimationFactory_getInstance(RightToLeftImageAnimationFactory* this, int32_t instanceId);
#define RightToLeftImageAnimationFactory_new4 RightToLeftImageAnimationFactory_new
#define RightToLeftImageAnimationFactory_init4 RightToLeftImageAnimationFactory_init
#ifndef RightToLeftImageAnimationFactory_createFactoryBase
#define RightToLeftImageAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef RightToLeftImageAnimationFactory_getImage
#define RightToLeftImageAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef RightToLeftImageAnimationFactory_getSequenceArray
#define RightToLeftImageAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef RightToLeftImageAnimationFactory_setInitialScale
#define RightToLeftImageAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef RightToLeftImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#define RightToLeftImageAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef RightToLeftImageAnimationFactory_getScalePropertiesP
#define RightToLeftImageAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef RightToLeftImageAnimationFactory_toString
#define RightToLeftImageAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RightToLeftImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RightToLeftImageAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H
