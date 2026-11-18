#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATIONFACTORY_H
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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LineAnimation LineAnimation;
typedef struct Animation Animation;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct BasicColor BasicColor;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct LineAnimationFactory LineAnimationFactory;
struct LineAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    BasicColor* basicColor;
};


LineAnimationFactory* LineAnimationFactory_new(BasicColor* basicColor);

void LineAnimationFactory_init(LineAnimationFactory* this, BasicColor* basicColor);

Animation* LineAnimationFactory_getInstance(LineAnimationFactory* this, int32_t instanceId);

void LineAnimationFactory_setInitialScale(LineAnimationFactory* this, ScaleProperties* scaleProperties);
#define LineAnimationFactory_new1 LineAnimationFactory_new
#define LineAnimationFactory_init1 LineAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LineAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LineAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATIONFACTORY_H
