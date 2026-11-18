#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
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
typedef struct CompoundRotationAnimation CompoundRotationAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct RotationAnimation RotationAnimation;
typedef struct ForcedLogUtil ForcedLogUtil;
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct CompoundRotationAnimationInterfaceFactory CompoundRotationAnimationInterfaceFactory;
struct CompoundRotationAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


CompoundRotationAnimationInterfaceFactory* CompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void CompoundRotationAnimationInterfaceFactory_init(CompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation** CompoundRotationAnimationInterfaceFactory_createArray(CompoundRotationAnimationInterfaceFactory* this, int32_t size);

Animation* CompoundRotationAnimationInterfaceFactory_createAnimation(CompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray);
#define CompoundRotationAnimationInterfaceFactory_new2 CompoundRotationAnimationInterfaceFactory_new
#define CompoundRotationAnimationInterfaceFactory_init2 CompoundRotationAnimationInterfaceFactory_init
#ifndef CompoundRotationAnimationInterfaceFactory_getInstance
#define CompoundRotationAnimationInterfaceFactory_getInstance CompoundAnimationInterfaceFactory_getInstance
#endif
#ifndef CompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#define CompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#endif
#ifndef CompoundRotationAnimationInterfaceFactory_setInitialScale
#define CompoundRotationAnimationInterfaceFactory_setInitialScale CompoundAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompoundRotationAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompoundRotationAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
