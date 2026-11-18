#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATIONFACTORY_H
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
typedef struct BottomToTopImageAnimation BottomToTopImageAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct BottomToTopImageAnimationFactory BottomToTopImageAnimationFactory;
struct BottomToTopImageAnimationFactory {
    BaseImageAnimationFactory base;
};


BottomToTopImageAnimationFactory* BottomToTopImageAnimationFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void BottomToTopImageAnimationFactory_init(BottomToTopImageAnimationFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* BottomToTopImageAnimationFactory_getInstance(BottomToTopImageAnimationFactory* this, int32_t instanceId);
#define BottomToTopImageAnimationFactory_new2 BottomToTopImageAnimationFactory_new
#define BottomToTopImageAnimationFactory_init2 BottomToTopImageAnimationFactory_init
#ifndef BottomToTopImageAnimationFactory_createFactoryBase
#define BottomToTopImageAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef BottomToTopImageAnimationFactory_getImage
#define BottomToTopImageAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef BottomToTopImageAnimationFactory_getSequenceArray
#define BottomToTopImageAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef BottomToTopImageAnimationFactory_setInitialScale
#define BottomToTopImageAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef BottomToTopImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#define BottomToTopImageAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef BottomToTopImageAnimationFactory_getScalePropertiesP
#define BottomToTopImageAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef BottomToTopImageAnimationFactory_toString
#define BottomToTopImageAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BottomToTopImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BottomToTopImageAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATIONFACTORY_H
