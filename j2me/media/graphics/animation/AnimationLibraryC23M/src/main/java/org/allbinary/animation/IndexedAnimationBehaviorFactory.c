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

static void IndexedAnimationBehaviorFactory_initFields(IndexedAnimationBehaviorFactory* this) {
    
    
}


void IndexedAnimationBehaviorFactory_init(IndexedAnimationBehaviorFactory* this, int32_t loopTotal, int64_t frameDelayTime) {
    AnimationBehaviorFactory_init(&this->base);
    IndexedAnimationBehaviorFactory_initFields(this);
        this->loopTotal = loopTotal;
        this->frameDelayTime = frameDelayTime;
}

IndexedAnimationBehaviorFactory* IndexedAnimationBehaviorFactory_new(int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehaviorFactory* this = calloc(1, sizeof(IndexedAnimationBehaviorFactory));
    IndexedAnimationBehaviorFactory_init(this, loopTotal, frameDelayTime);
    return this;
}


AnimationBehavior* IndexedAnimationBehaviorFactory_getOrCreateInstance(IndexedAnimationBehaviorFactory* this) {
        return IndexedAnimationBehavior_new(this->loopTotal, this->frameDelayTime);
}

