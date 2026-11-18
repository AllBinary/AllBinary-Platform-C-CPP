#ifndef ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_H
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
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

typedef struct SingletonAnimationInterfaceFactory SingletonAnimationInterfaceFactory;
struct SingletonAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* animationInterface;
};


SingletonAnimationInterfaceFactory* SingletonAnimationInterfaceFactory_new(Animation* animationInterface);

void SingletonAnimationInterfaceFactory_init(SingletonAnimationInterfaceFactory* this, Animation* animationInterface);

Animation* SingletonAnimationInterfaceFactory_getInstance(SingletonAnimationInterfaceFactory* this, int32_t instanceId);

Animation* SingletonAnimationInterfaceFactory_getInstanceAnimation(SingletonAnimationInterfaceFactory* this, Animation* animationInterface);

void SingletonAnimationInterfaceFactory_setInitialScale(SingletonAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);
#define SingletonAnimationInterfaceFactory_new1 SingletonAnimationInterfaceFactory_new
#define SingletonAnimationInterfaceFactory_init1 SingletonAnimationInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingletonAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingletonAnimationInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_H
