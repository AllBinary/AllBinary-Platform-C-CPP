#ifndef ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_H
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
typedef struct SpecialAnimation SpecialAnimation;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct NullSpecialAnimationFactory NullSpecialAnimationFactory;
struct NullSpecialAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
};


NullSpecialAnimationFactory* NullSpecialAnimationFactory_new(void);

void NullSpecialAnimationFactory_init(NullSpecialAnimationFactory* this);

NullSpecialAnimationFactory* NullSpecialAnimationFactory_getFactoryInstance(void);

Animation* NullSpecialAnimationFactory_getInstance(NullSpecialAnimationFactory* this, int32_t instanceId);

Animation* NullSpecialAnimationFactory_getInstanceAnimation(NullSpecialAnimationFactory* this, Animation* animationInterface);

void NullSpecialAnimationFactory_setInitialScale(NullSpecialAnimationFactory* this, ScaleProperties* scaleProperties);
#define NullSpecialAnimationFactory_new0 NullSpecialAnimationFactory_new
#define NullSpecialAnimationFactory_init0 NullSpecialAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullSpecialAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullSpecialAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_H
