#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H
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
typedef struct ImageAnimation ImageAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct SingletonAnimationInterfaceFactory SingletonAnimationInterfaceFactory;
typedef struct AnimationFrameToImageUtil AnimationFrameToImageUtil;
#include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"

typedef struct ImageAnimationSingletonInterfaceFactory ImageAnimationSingletonInterfaceFactory;
struct ImageAnimationSingletonInterfaceFactory {
    SingletonAnimationInterfaceFactory base;
};


ImageAnimationSingletonInterfaceFactory* ImageAnimationSingletonInterfaceFactory_new(Animation* animationInterface, int32_t width, int32_t height);

void ImageAnimationSingletonInterfaceFactory_init(ImageAnimationSingletonInterfaceFactory* this, Animation* animationInterface, int32_t width, int32_t height);
#define ImageAnimationSingletonInterfaceFactory_new3 ImageAnimationSingletonInterfaceFactory_new
#define ImageAnimationSingletonInterfaceFactory_init3 ImageAnimationSingletonInterfaceFactory_init
#ifndef ImageAnimationSingletonInterfaceFactory_getInstance
#define ImageAnimationSingletonInterfaceFactory_getInstance SingletonAnimationInterfaceFactory_getInstance
#endif
#ifndef ImageAnimationSingletonInterfaceFactory_getInstanceAnimation
#define ImageAnimationSingletonInterfaceFactory_getInstanceAnimation SingletonAnimationInterfaceFactory_getInstanceAnimation
#endif
#ifndef ImageAnimationSingletonInterfaceFactory_setInitialScale
#define ImageAnimationSingletonInterfaceFactory_setInitialScale SingletonAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageAnimationSingletonInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageAnimationSingletonInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEANIMATIONSINGLETONINTERFACEFACTORY_H
