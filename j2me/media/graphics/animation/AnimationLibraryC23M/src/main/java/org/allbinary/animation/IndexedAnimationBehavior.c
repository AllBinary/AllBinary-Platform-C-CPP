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

static void IndexedAnimationBehavior_initFields(IndexedAnimationBehavior* this) {
    
    
    this->elapsedTime = 0;
    this->loopIndex = 0;
}


void IndexedAnimationBehavior_init(IndexedAnimationBehavior* this, int32_t loopTotal, int64_t frameDelayTime) {
    AnimationBehavior_init(&this->base);
    IndexedAnimationBehavior_initFields(this);
        this->loopTotal = loopTotal;
        this->frameDelayTime = frameDelayTime;
}

IndexedAnimationBehavior* IndexedAnimationBehavior_new(int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehavior* this = calloc(1, sizeof(IndexedAnimationBehavior));
    IndexedAnimationBehavior_init(this, loopTotal, frameDelayTime);
    return this;
}


void IndexedAnimationBehavior_reset(IndexedAnimationBehavior* this) {
        this->loopIndex = 0;
}

