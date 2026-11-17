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
// package org.allbinary.animation.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"

typedef struct SpecialAnimation SpecialAnimation;
struct SpecialAnimation {
    IndexedAnimation base;
    SpecialAnimationInterface SpecialAnimationInterface_interface;
};

static SpecialAnimation* SpecialAnimation_NULL_SPECIAL_ANIMATION;

SpecialAnimation* SpecialAnimation_new(AnimationBehavior* animationBehavior);
SpecialAnimation* SpecialAnimation_getInstance(void);

void SpecialAnimation_init(SpecialAnimation* this, AnimationBehavior* animationBehavior);
void SpecialAnimation_nextFrame(SpecialAnimation* this);
void SpecialAnimation_setLastFrame(SpecialAnimation* this);
bool SpecialAnimation_isComplete(SpecialAnimation* this);
void SpecialAnimation_open(SpecialAnimation* this);
void SpecialAnimation_close(SpecialAnimation* this);
void SpecialAnimation_process(SpecialAnimation* this);

// Static fields with runtime initializers: call this once at startup
void SpecialAnimation_staticInit(void) {
    SpecialAnimation_NULL_SPECIAL_ANIMATION = SpecialAnimation_new(IndexedAnimationBehavior_new(1, 250));
}


SpecialAnimation* SpecialAnimation_getInstance(void) {
        return SpecialAnimation_NULL_SPECIAL_ANIMATION;
}


void SpecialAnimation_init(SpecialAnimation* this, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
}

SpecialAnimation* SpecialAnimation_new(AnimationBehavior* animationBehavior) {
    SpecialAnimation* this = calloc(1, sizeof(SpecialAnimation));
    SpecialAnimation_init(this, animationBehavior);
    return this;
}


void SpecialAnimation_nextFrame(SpecialAnimation* this) {
        IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) this->animationBehaviorP));
        indexedAnimationBehavior->loopIndex++;
}


void SpecialAnimation_setLastFrame(SpecialAnimation* this) {
}


bool SpecialAnimation_isComplete(SpecialAnimation* this) {
        return false;
}


void SpecialAnimation_open(SpecialAnimation* this) {
}


void SpecialAnimation_close(SpecialAnimation* this) {
}


void SpecialAnimation_process(SpecialAnimation* this) {
}

