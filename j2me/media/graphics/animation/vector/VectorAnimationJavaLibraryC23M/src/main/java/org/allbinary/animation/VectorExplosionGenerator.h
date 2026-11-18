#ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
#define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
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
typedef struct VectorExplosionType VectorExplosionType;
typedef struct VectorAnimationUtil VectorAnimationUtil;
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct RandomRotationFactory RandomRotationFactory;
typedef struct RandomTranslation RandomTranslation;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListS BasicArrayListS;
#if __has_include("org/allbinary/graphics/pipeline/RandomRotationFactory.h")
#include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
#endif
#if __has_include("org/allbinary/animation/VectorExplosionType.h")
#include "org/allbinary/animation/VectorExplosionType.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

typedef struct VectorExplosionGenerator VectorExplosionGenerator;
struct VectorExplosionGenerator {
    VectorExplosionType* RANDOM;
    VectorExplosionType* ROTATION;
    VectorAnimationUtil* vectorAnimationUtil;
    RandomRotationFactory* randomRotationFactory;
};


VectorExplosionGenerator* VectorExplosionGenerator_new(void);

VectorExplosionGenerator* VectorExplosionGenerator_getInstance0(void);

void VectorExplosionGenerator_init(VectorExplosionGenerator* this);

BasicArrayList* VectorExplosionGenerator_createList(VectorExplosionGenerator* this, BasicArrayList* list, int32_t howMuch, VectorExplosionType* type);

int32_t*** VectorExplosionGenerator_getInstance4(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type);

BasicArrayList* VectorExplosionGenerator_getInstanceStartFrame(VectorExplosionGenerator* this, int32_t** points, int32_t howMuch, VectorExplosionType* type, bool startFrame);


#define VectorExplosionGenerator_getInstance(...) JAVA_OVERLOADED(VectorExplosionGenerator_getInstance, __VA_ARGS__)
#define VectorExplosionGenerator_new0 VectorExplosionGenerator_new
#define VectorExplosionGenerator_init0 VectorExplosionGenerator_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorExplosionGenerator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorExplosionGenerator_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
