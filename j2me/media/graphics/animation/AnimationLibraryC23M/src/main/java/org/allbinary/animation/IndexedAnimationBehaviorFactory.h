#ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H
#define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
typedef struct AnimationBehavior AnimationBehavior;
#include "org/allbinary/animation/AnimationBehaviorFactory.h"

typedef struct IndexedAnimationBehaviorFactory IndexedAnimationBehaviorFactory;
struct IndexedAnimationBehaviorFactory {
    AnimationBehaviorFactory base;
    int64_t frameDelayTime;
    int32_t loopTotal;
};


IndexedAnimationBehaviorFactory* IndexedAnimationBehaviorFactory_new(int32_t loopTotal, int64_t frameDelayTime);

void IndexedAnimationBehaviorFactory_init(IndexedAnimationBehaviorFactory* this, int32_t loopTotal, int64_t frameDelayTime);

AnimationBehavior* IndexedAnimationBehaviorFactory_getOrCreateInstance(IndexedAnimationBehaviorFactory* this);
#define IndexedAnimationBehaviorFactory_new2 IndexedAnimationBehaviorFactory_new
#define IndexedAnimationBehaviorFactory_init2 IndexedAnimationBehaviorFactory_init
#ifndef IndexedAnimationBehaviorFactory_getInstance
#define IndexedAnimationBehaviorFactory_getInstance AnimationBehaviorFactory_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndexedAnimationBehaviorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IndexedAnimationBehaviorFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H
