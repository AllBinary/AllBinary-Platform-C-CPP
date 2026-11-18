#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H
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
typedef struct SimultaneousCompoundIndexAnimation SimultaneousCompoundIndexAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct ScaleProperties ScaleProperties;
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
// #include "org/allbinary/logic/communication/log/ForcedLogUtil.h"

typedef struct SimultaneousCompoundIndexAnimationInterfaceFactory SimultaneousCompoundIndexAnimationInterfaceFactory;
struct SimultaneousCompoundIndexAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


SimultaneousCompoundIndexAnimationInterfaceFactory* SimultaneousCompoundIndexAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundIndexAnimationInterfaceFactory_init(SimultaneousCompoundIndexAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getInstance(SimultaneousCompoundIndexAnimationInterfaceFactory* this, int32_t instanceId);

Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(SimultaneousCompoundIndexAnimationInterfaceFactory* this, IndexedAnimation** animationInterfaceArray);

AnimationInterfaceFactoryInterface** SimultaneousCompoundIndexAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(SimultaneousCompoundIndexAnimationInterfaceFactory* this);

void SimultaneousCompoundIndexAnimationInterfaceFactory_setInitialScale(SimultaneousCompoundIndexAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);
#define SimultaneousCompoundIndexAnimationInterfaceFactory_new2 SimultaneousCompoundIndexAnimationInterfaceFactory_new
#define SimultaneousCompoundIndexAnimationInterfaceFactory_init2 SimultaneousCompoundIndexAnimationInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimultaneousCompoundIndexAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimultaneousCompoundIndexAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H
