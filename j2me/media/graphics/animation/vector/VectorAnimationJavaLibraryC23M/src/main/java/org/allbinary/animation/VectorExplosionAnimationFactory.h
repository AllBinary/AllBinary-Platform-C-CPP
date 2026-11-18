#ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
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
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct VectorExplosionGenerator VectorExplosionGenerator;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct VectorAnimationInterface VectorAnimationInterface;
typedef struct VectorRotationAnimation VectorRotationAnimation;
typedef struct Animation Animation;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/VectorExplosionGenerator.h")
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif

typedef struct VectorExplosionAnimationFactory VectorExplosionAnimationFactory;
struct VectorExplosionAnimationFactory {
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    VectorExplosionGenerator* vectorExplosionGenerator;
    BasicColor* basicColor;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


VectorExplosionAnimationFactory* VectorExplosionAnimationFactory_new(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorExplosionAnimationFactory_init(VectorExplosionAnimationFactory* this, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* VectorExplosionAnimationFactory_getInstanceAnimation(VectorExplosionAnimationFactory* this, Animation* animationInterface);


#define VectorExplosionAnimationFactory_new2 VectorExplosionAnimationFactory_new
#define VectorExplosionAnimationFactory_init2 VectorExplosionAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorExplosionAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorExplosionAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
