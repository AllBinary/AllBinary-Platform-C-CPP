#ifndef ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
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
typedef struct Animation Animation;
typedef struct Graphics Graphics;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

typedef struct NullAnimationFactory NullAnimationFactory;
struct NullAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* NULL_ANIMATION;
    Animation** EMPTY_ARRAY;
};

extern NullAnimationFactory* NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY;

NullAnimationFactory* NullAnimationFactory_new(void);

void NullAnimationFactory_init(NullAnimationFactory* this);

NullAnimationFactory* NullAnimationFactory_getFactoryInstance(void);

Animation* NullAnimationFactory_getInstance(NullAnimationFactory* this, int32_t instanceId);

Animation* NullAnimationFactory_getInstanceAnimation(NullAnimationFactory* this, Animation* animationInterface);

void NullAnimationFactory_setInitialScale(NullAnimationFactory* this, ScaleProperties* scaleProperties);
#define NullAnimationFactory_new0 NullAnimationFactory_new
#define NullAnimationFactory_init0 NullAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
