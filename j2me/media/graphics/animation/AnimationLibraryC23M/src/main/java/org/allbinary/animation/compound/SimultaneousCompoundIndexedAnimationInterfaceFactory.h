#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
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
typedef struct SimultaneousCompoundIndexedAnimation SimultaneousCompoundIndexedAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
// #include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct SimultaneousCompoundIndexedAnimationInterfaceFactory SimultaneousCompoundIndexedAnimationInterfaceFactory;
struct SimultaneousCompoundIndexedAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


SimultaneousCompoundIndexedAnimationInterfaceFactory* SimultaneousCompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundIndexedAnimationInterfaceFactory_init(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation** SimultaneousCompoundIndexedAnimationInterfaceFactory_createArray(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, int32_t size);

Animation* SimultaneousCompoundIndexedAnimationInterfaceFactory_createAnimation(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray);
#define SimultaneousCompoundIndexedAnimationInterfaceFactory_new2 SimultaneousCompoundIndexedAnimationInterfaceFactory_new
#define SimultaneousCompoundIndexedAnimationInterfaceFactory_init2 SimultaneousCompoundIndexedAnimationInterfaceFactory_init
#ifndef SimultaneousCompoundIndexedAnimationInterfaceFactory_getInstance
#define SimultaneousCompoundIndexedAnimationInterfaceFactory_getInstance CompoundAnimationInterfaceFactory_getInstance
#endif
#ifndef SimultaneousCompoundIndexedAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#define SimultaneousCompoundIndexedAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#endif
#ifndef SimultaneousCompoundIndexedAnimationInterfaceFactory_setInitialScale
#define SimultaneousCompoundIndexedAnimationInterfaceFactory_setInitialScale CompoundAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimultaneousCompoundIndexedAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimultaneousCompoundIndexedAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
