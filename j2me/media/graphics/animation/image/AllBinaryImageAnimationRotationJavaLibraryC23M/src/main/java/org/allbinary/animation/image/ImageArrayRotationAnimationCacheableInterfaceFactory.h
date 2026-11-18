#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLEINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLEINTERFACEFACTORY_H
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
typedef struct ImageArrayRotationAnimationCacheable ImageArrayRotationAnimationCacheable;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct CacheableInterface CacheableInterface;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct ImageArrayRotationAnimationCacheableInterfaceFactory ImageArrayRotationAnimationCacheableInterfaceFactory;
struct ImageArrayRotationAnimationCacheableInterfaceFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


ImageArrayRotationAnimationCacheableInterfaceFactory* ImageArrayRotationAnimationCacheableInterfaceFactory_new(void);
void ImageArrayRotationAnimationCacheableInterfaceFactory_init(ImageArrayRotationAnimationCacheableInterfaceFactory* this);

CacheableInterface* ImageArrayRotationAnimationCacheableInterfaceFactory_getInstance(ImageArrayRotationAnimationCacheableInterfaceFactory* this, void* key);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayRotationAnimationCacheableInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayRotationAnimationCacheableInterfaceFactory_register(void);

#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLEINTERFACEFACTORY_H
