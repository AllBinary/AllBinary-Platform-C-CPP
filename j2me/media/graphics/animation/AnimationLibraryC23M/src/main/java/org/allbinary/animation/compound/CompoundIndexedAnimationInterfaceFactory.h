#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
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
typedef struct CompoundIndexedAnimation CompoundIndexedAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
// #include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct CompoundIndexedAnimationInterfaceFactory CompoundIndexedAnimationInterfaceFactory;
struct CompoundIndexedAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


CompoundIndexedAnimationInterfaceFactory* CompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void CompoundIndexedAnimationInterfaceFactory_init(CompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation** CompoundIndexedAnimationInterfaceFactory_createArray(CompoundIndexedAnimationInterfaceFactory* this, int32_t size);

Animation* CompoundIndexedAnimationInterfaceFactory_createAnimation(CompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray);
#define CompoundIndexedAnimationInterfaceFactory_new2 CompoundIndexedAnimationInterfaceFactory_new
#define CompoundIndexedAnimationInterfaceFactory_init2 CompoundIndexedAnimationInterfaceFactory_init
#ifndef CompoundIndexedAnimationInterfaceFactory_getInstance
#define CompoundIndexedAnimationInterfaceFactory_getInstance CompoundAnimationInterfaceFactory_getInstance
#endif
#ifndef CompoundIndexedAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#define CompoundIndexedAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#endif
#ifndef CompoundIndexedAnimationInterfaceFactory_setInitialScale
#define CompoundIndexedAnimationInterfaceFactory_setInitialScale CompoundAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompoundIndexedAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompoundIndexedAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATIONINTERFACEFACTORY_H
