#ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H
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
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct VectorAnimation VectorAnimation;
typedef struct Animation Animation;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ScaleProperties ScaleProperties;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif

typedef struct VectorAnimationInterfaceFactory VectorAnimationInterfaceFactory;
struct VectorAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t*** currentPoints;
    BasicColor* basicColor;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


VectorAnimationInterfaceFactory* VectorAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorAnimationInterfaceFactory_init(VectorAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* VectorAnimationInterfaceFactory_getInstance(VectorAnimationInterfaceFactory* this, int32_t instanceId);

void VectorAnimationInterfaceFactory_setBasicColorP(VectorAnimationInterfaceFactory* this, BasicColor* basicColor);

BasicColor* VectorAnimationInterfaceFactory_getBasicColorP(VectorAnimationInterfaceFactory* this);

void VectorAnimationInterfaceFactory_setInitialScale(VectorAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);
#define VectorAnimationInterfaceFactory_new3 VectorAnimationInterfaceFactory_new
#define VectorAnimationInterfaceFactory_init3 VectorAnimationInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorAnimationInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorAnimationInterfaceFactory_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H
