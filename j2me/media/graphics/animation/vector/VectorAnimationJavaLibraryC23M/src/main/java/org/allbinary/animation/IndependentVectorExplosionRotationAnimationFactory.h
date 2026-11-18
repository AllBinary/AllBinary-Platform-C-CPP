#ifndef ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
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
typedef struct VectorAnimationFactoryInterface VectorAnimationFactoryInterface;
typedef struct VectorRotationGenerator VectorRotationGenerator;
typedef struct VectorExplosionGenerator VectorExplosionGenerator;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct Animation Animation;
typedef struct BasicColor BasicColor;
typedef struct NullUtil NullUtil;
typedef struct VectorInfo VectorInfo;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/vector/VectorInfo.h")
#include "org/allbinary/vector/VectorInfo.h"
#endif
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/VectorAnimationFactoryInterface.h")
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorExplosionGenerator.h")
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#endif

typedef struct IndependentVectorExplosionRotationAnimationFactory IndependentVectorExplosionRotationAnimationFactory;
struct IndependentVectorExplosionRotationAnimationFactory {
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    int32_t*** framePoints;
    VectorInfo* vectorInfo;
    BasicColor* basicColor;
    VectorAnimationFactoryInterface* vectorAnimationFactoryInterface;
    VectorExplosionGenerator* vectorExplosionGenerator;
};


IndependentVectorExplosionRotationAnimationFactory* IndependentVectorExplosionRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);

void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);

void IndependentVectorExplosionRotationAnimationFactory_initMethod(IndependentVectorExplosionRotationAnimationFactory* this);

Animation* IndependentVectorExplosionRotationAnimationFactory_getInstanceAnimation(IndependentVectorExplosionRotationAnimationFactory* this, Animation* animationInterface);
#define IndependentVectorExplosionRotationAnimationFactory_new3 IndependentVectorExplosionRotationAnimationFactory_new
#define IndependentVectorExplosionRotationAnimationFactory_init3 IndependentVectorExplosionRotationAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndependentVectorExplosionRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IndependentVectorExplosionRotationAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
