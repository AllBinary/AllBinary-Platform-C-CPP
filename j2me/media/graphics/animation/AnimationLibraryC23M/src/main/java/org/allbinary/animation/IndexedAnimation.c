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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"

typedef struct IndexedAnimation IndexedAnimation;
struct IndexedAnimation {
    Animation base;
    IndexedAnimationInterface IndexedAnimationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AnimationBehavior* animationBehaviorP;
};


IndexedAnimation* IndexedAnimation_new(AnimationBehavior* animationBehavior);

void IndexedAnimation_init(IndexedAnimation* this, AnimationBehavior* animationBehavior);
AnimationBehavior* IndexedAnimation_getAnimationBehavior(IndexedAnimation* this);
void IndexedAnimation_reset(IndexedAnimation* this);
void IndexedAnimation_setFrame(IndexedAnimation* this, int32_t index);
int32_t IndexedAnimation_getFrame(IndexedAnimation* this);
int32_t IndexedAnimation_getAnimationSize(IndexedAnimation* this);
int32_t IndexedAnimation_getSize(IndexedAnimation* this);
void IndexedAnimation_previousFrame(IndexedAnimation* this);
bool IndexedAnimation_isLastFrame(IndexedAnimation* this);
void IndexedAnimation_setSequence(IndexedAnimation* this, int32_t* sequence);
int32_t* IndexedAnimation_getSequence(IndexedAnimation* this);
void IndexedAnimation_setState(IndexedAnimation* this, IndexedAnimation* indexedAnimation);
int32_t IndexedAnimation_getWidth(IndexedAnimation* this);
int32_t IndexedAnimation_getHeight(IndexedAnimation* this);

static void IndexedAnimation_initFields(IndexedAnimation* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void IndexedAnimation_init(IndexedAnimation* this, AnimationBehavior* animationBehavior) {
    Animation_init(&this->base);
    IndexedAnimation_initFields(this);
        this->animationBehaviorP = animationBehavior;
}

IndexedAnimation* IndexedAnimation_new(AnimationBehavior* animationBehavior) {
    IndexedAnimation* this = calloc(1, sizeof(IndexedAnimation));
    IndexedAnimation_init(this, animationBehavior);
    return this;
}


AnimationBehavior* IndexedAnimation_getAnimationBehavior(IndexedAnimation* this) {
        return this->animationBehaviorP;
}


void IndexedAnimation_reset(IndexedAnimation* this) {
        AnimationBehavior_reset(this->animationBehaviorP);
        IndexedAnimation_setFrame(this, 0);
}


void IndexedAnimation_setFrame(IndexedAnimation* this, int32_t index) {
}


int32_t IndexedAnimation_getFrame(IndexedAnimation* this) {
        return 0;
}


// throws Exception
int32_t IndexedAnimation_getAnimationSize(IndexedAnimation* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


int32_t IndexedAnimation_getSize(IndexedAnimation* this) {
        return 0;
}


void IndexedAnimation_previousFrame(IndexedAnimation* this) {
}


bool IndexedAnimation_isLastFrame(IndexedAnimation* this) {
        if (IndexedAnimation_getFrame(this) == IndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


void IndexedAnimation_setSequence(IndexedAnimation* this, int32_t* sequence) {
}


int32_t* IndexedAnimation_getSequence(IndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void IndexedAnimation_setState(IndexedAnimation* this, IndexedAnimation* indexedAnimation) {
        IndexedAnimation_setFrame(this, IndexedAnimation_getFrame(indexedAnimation));
        IndexedAnimation_setDx(this, IndexedAnimation_getDx(indexedAnimation));
        IndexedAnimation_setDy(this, IndexedAnimation_getDy(indexedAnimation));
}


int32_t IndexedAnimation_getWidth(IndexedAnimation* this) {
        return 0;
}


int32_t IndexedAnimation_getHeight(IndexedAnimation* this) {
        return 0;
}

