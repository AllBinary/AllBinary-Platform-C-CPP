#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
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
// package org.allbinary.animation.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CompoundAnimationInterfaceFactory CompoundAnimationInterfaceFactory;
typedef struct SimultaneousCompoundRotationAnimation SimultaneousCompoundRotationAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct RotationAnimation RotationAnimation;
typedef struct ForcedLogUtil ForcedLogUtil;
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct SimultaneousCompoundRotationAnimationInterfaceFactory SimultaneousCompoundRotationAnimationInterfaceFactory;
struct SimultaneousCompoundRotationAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


SimultaneousCompoundRotationAnimationInterfaceFactory* SimultaneousCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundRotationAnimationInterfaceFactory_init(SimultaneousCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation** SimultaneousCompoundRotationAnimationInterfaceFactory_createArray(SimultaneousCompoundRotationAnimationInterfaceFactory* this, int32_t size);

Animation* SimultaneousCompoundRotationAnimationInterfaceFactory_createAnimation(SimultaneousCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray);
#define SimultaneousCompoundRotationAnimationInterfaceFactory_new2 SimultaneousCompoundRotationAnimationInterfaceFactory_new
#define SimultaneousCompoundRotationAnimationInterfaceFactory_init2 SimultaneousCompoundRotationAnimationInterfaceFactory_init
#ifndef SimultaneousCompoundRotationAnimationInterfaceFactory_getInstance
#define SimultaneousCompoundRotationAnimationInterfaceFactory_getInstance CompoundAnimationInterfaceFactory_getInstance
#endif
#ifndef SimultaneousCompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#define SimultaneousCompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#endif
#ifndef SimultaneousCompoundRotationAnimationInterfaceFactory_setInitialScale
#define SimultaneousCompoundRotationAnimationInterfaceFactory_setInitialScale CompoundAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimultaneousCompoundRotationAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimultaneousCompoundRotationAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
