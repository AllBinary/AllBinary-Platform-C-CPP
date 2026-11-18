#ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIOR_H
#define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIOR_H
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
typedef struct AnimationBehavior AnimationBehavior;
#include "org/allbinary/animation/AnimationBehavior.h"

typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
struct IndexedAnimationBehavior {
    AnimationBehavior base;
    int64_t frameDelayTime;
    int32_t loopTotal;
    int64_t elapsedTime;
    int32_t loopIndex;
};


IndexedAnimationBehavior* IndexedAnimationBehavior_new(int32_t loopTotal, int64_t frameDelayTime);

void IndexedAnimationBehavior_init(IndexedAnimationBehavior* this, int32_t loopTotal, int64_t frameDelayTime);

void IndexedAnimationBehavior_reset(IndexedAnimationBehavior* this);
#define IndexedAnimationBehavior_new2 IndexedAnimationBehavior_new
#define IndexedAnimationBehavior_init2 IndexedAnimationBehavior_init
#ifndef IndexedAnimationBehavior_getInstance
#define IndexedAnimationBehavior_getInstance AnimationBehavior_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndexedAnimationBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IndexedAnimationBehavior_register(void);


#endif // ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIOR_H
