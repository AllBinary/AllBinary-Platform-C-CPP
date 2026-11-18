#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H
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
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct ImageAnimation ImageAnimation;
typedef struct AdjustedImageAnimation AdjustedImageAnimation;
typedef struct Image Image;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct OpenGLUtil OpenGLUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct ImageAnimationFactory ImageAnimationFactory;
struct ImageAnimationFactory {
    BaseImageAnimationFactory base;
};


ImageAnimationFactory* ImageAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

ImageAnimationFactory* ImageAnimationFactory_createFactory(Image* image);

void ImageAnimationFactory_init(ImageAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* ImageAnimationFactory_getInstance(ImageAnimationFactory* this, int32_t instanceId);
#define ImageAnimationFactory_new6 ImageAnimationFactory_new
#define ImageAnimationFactory_init6 ImageAnimationFactory_init
#ifndef ImageAnimationFactory_createFactoryBase
#define ImageAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef ImageAnimationFactory_getImage
#define ImageAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef ImageAnimationFactory_getSequenceArray
#define ImageAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef ImageAnimationFactory_setInitialScale
#define ImageAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef ImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#define ImageAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef ImageAnimationFactory_getScalePropertiesP
#define ImageAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef ImageAnimationFactory_toString
#define ImageAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONFACTORY_H
