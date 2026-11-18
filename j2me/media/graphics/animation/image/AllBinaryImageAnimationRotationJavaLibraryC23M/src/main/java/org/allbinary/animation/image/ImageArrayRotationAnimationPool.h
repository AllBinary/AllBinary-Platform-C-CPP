#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
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
typedef struct ImageArrayRotationAnimationCacheableInterfaceFactory ImageArrayRotationAnimationCacheableInterfaceFactory;
typedef struct ImageArrayRotationAnimationInfo ImageArrayRotationAnimationInfo;
typedef struct ImageArrayRotationAnimationCacheable ImageArrayRotationAnimationCacheable;
typedef struct BasicArrayListResetablePool BasicArrayListResetablePool;
typedef struct CacheableInterface CacheableInterface;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct PoolInterface PoolInterface;
#include "org/allbinary/logic/util/cache/BasicArrayListResetablePool.h"
#if __has_include("org/allbinary/logic/util/cache/PoolInterface.h")
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#endif

typedef struct ImageArrayRotationAnimationPool ImageArrayRotationAnimationPool;
struct ImageArrayRotationAnimationPool {
    BasicArrayListResetablePool base;
};


ImageArrayRotationAnimationPool* ImageArrayRotationAnimationPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

void ImageArrayRotationAnimationPool_init(ImageArrayRotationAnimationPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface);

PoolInterface* ImageArrayRotationAnimationPool_getInstance(void);

CacheableInterface* ImageArrayRotationAnimationPool_remove(ImageArrayRotationAnimationPool* this, void* key);
#define ImageArrayRotationAnimationPool_new1 ImageArrayRotationAnimationPool_new
#define ImageArrayRotationAnimationPool_init1 ImageArrayRotationAnimationPool_init
#ifndef ImageArrayRotationAnimationPool_clear
#define ImageArrayRotationAnimationPool_clear BasicArrayListResetablePool_clear
#endif
#ifndef ImageArrayRotationAnimationPool_clear
#define ImageArrayRotationAnimationPool_clear AbstractArrayListPool_clear
#endif
#ifndef ImageArrayRotationAnimationPool_add
#define ImageArrayRotationAnimationPool_add AbstractArrayListPool_add
#endif
#ifndef ImageArrayRotationAnimationPool_addArray
#define ImageArrayRotationAnimationPool_addArray AbstractArrayListPool_addArray
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayRotationAnimationPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayRotationAnimationPool_register(void);

#if __has_include("org/allbinary/logic/util/cache/CacheableInterface.h")
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/PoolInterface.h")
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONPOOL_H
