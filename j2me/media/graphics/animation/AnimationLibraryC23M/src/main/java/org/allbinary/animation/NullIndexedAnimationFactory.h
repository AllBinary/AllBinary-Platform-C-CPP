#ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct NullIndexedAnimationInner NullIndexedAnimationInner;
typedef struct Animation Animation;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

typedef struct NullIndexedAnimationFactory NullIndexedAnimationFactory;
struct NullIndexedAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* NULL_ANIMATION;
};

extern IndexedAnimation** NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_ARRAY;

NullIndexedAnimationFactory* NullIndexedAnimationFactory_new(void);

void NullIndexedAnimationFactory_init(NullIndexedAnimationFactory* this);

NullIndexedAnimationFactory* NullIndexedAnimationFactory_getFactoryInstance(void);

Animation* NullIndexedAnimationFactory_getInstance(NullIndexedAnimationFactory* this, int32_t instanceId);

Animation* NullIndexedAnimationFactory_getInstanceAnimation(NullIndexedAnimationFactory* this, Animation* animationInterface);

void NullIndexedAnimationFactory_setInitialScale(NullIndexedAnimationFactory* this, ScaleProperties* scaleProperties);
#define NullIndexedAnimationFactory_new0 NullIndexedAnimationFactory_new
#define NullIndexedAnimationFactory_init0 NullIndexedAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullIndexedAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H
