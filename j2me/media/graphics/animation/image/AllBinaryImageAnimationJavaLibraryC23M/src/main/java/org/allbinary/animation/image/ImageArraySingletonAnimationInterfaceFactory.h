#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H
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
typedef struct ImageArrayAnimation ImageArrayAnimation;
typedef struct Image Image;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct SingletonAnimationInterfaceFactory SingletonAnimationInterfaceFactory;
// #include "org/allbinary/animation/Animation.h"
// #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"
// #include "org/allbinary/image/IndexedAnimationToImageArrayUtil.h"

typedef struct ImageArraySingletonAnimationInterfaceFactory ImageArraySingletonAnimationInterfaceFactory;
struct ImageArraySingletonAnimationInterfaceFactory {
    SingletonAnimationInterfaceFactory base;
};


ImageArraySingletonAnimationInterfaceFactory* ImageArraySingletonAnimationInterfaceFactory_new(Image** imageArray);

void ImageArraySingletonAnimationInterfaceFactory_init(ImageArraySingletonAnimationInterfaceFactory* this, Image** imageArray);
#define ImageArraySingletonAnimationInterfaceFactory_new1 ImageArraySingletonAnimationInterfaceFactory_new
#define ImageArraySingletonAnimationInterfaceFactory_init1 ImageArraySingletonAnimationInterfaceFactory_init
#ifndef ImageArraySingletonAnimationInterfaceFactory_getInstance
#define ImageArraySingletonAnimationInterfaceFactory_getInstance SingletonAnimationInterfaceFactory_getInstance
#endif
#ifndef ImageArraySingletonAnimationInterfaceFactory_getInstanceAnimation
#define ImageArraySingletonAnimationInterfaceFactory_getInstanceAnimation SingletonAnimationInterfaceFactory_getInstanceAnimation
#endif
#ifndef ImageArraySingletonAnimationInterfaceFactory_setInitialScale
#define ImageArraySingletonAnimationInterfaceFactory_setInitialScale SingletonAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArraySingletonAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArraySingletonAnimationInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H
