#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
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
typedef struct AutoCompoundRotationAnimation AutoCompoundRotationAnimation;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct RotationAnimation RotationAnimation;
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct AutoCompoundRotationAnimationInterfaceFactory AutoCompoundRotationAnimationInterfaceFactory;
struct AutoCompoundRotationAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


AutoCompoundRotationAnimationInterfaceFactory* AutoCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void AutoCompoundRotationAnimationInterfaceFactory_init(AutoCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

Animation** AutoCompoundRotationAnimationInterfaceFactory_createArray(AutoCompoundRotationAnimationInterfaceFactory* this, int32_t size);

Animation* AutoCompoundRotationAnimationInterfaceFactory_createAnimation(AutoCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray);
#define AutoCompoundRotationAnimationInterfaceFactory_new2 AutoCompoundRotationAnimationInterfaceFactory_new
#define AutoCompoundRotationAnimationInterfaceFactory_init2 AutoCompoundRotationAnimationInterfaceFactory_init
#ifndef AutoCompoundRotationAnimationInterfaceFactory_getInstance
#define AutoCompoundRotationAnimationInterfaceFactory_getInstance CompoundAnimationInterfaceFactory_getInstance
#endif
#ifndef AutoCompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#define AutoCompoundRotationAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray
#endif
#ifndef AutoCompoundRotationAnimationInterfaceFactory_setInitialScale
#define AutoCompoundRotationAnimationInterfaceFactory_setInitialScale CompoundAnimationInterfaceFactory_setInitialScale
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AutoCompoundRotationAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AutoCompoundRotationAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
