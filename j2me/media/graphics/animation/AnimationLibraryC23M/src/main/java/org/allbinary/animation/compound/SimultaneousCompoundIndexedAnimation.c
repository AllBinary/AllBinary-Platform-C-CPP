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
// package org.allbinary.animation.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct SimultaneousCompoundIndexedAnimation SimultaneousCompoundIndexedAnimation;
struct SimultaneousCompoundIndexedAnimation {
    IndexedAnimation base;
    Animation** animationInterfaceArray;
};


SimultaneousCompoundIndexedAnimation* SimultaneousCompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexedAnimation_init(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void SimultaneousCompoundIndexedAnimation_setFrame(SimultaneousCompoundIndexedAnimation* this, int32_t frameIndex);
int32_t SimultaneousCompoundIndexedAnimation_getFrame(SimultaneousCompoundIndexedAnimation* this);
int32_t SimultaneousCompoundIndexedAnimation_getSize(SimultaneousCompoundIndexedAnimation* this);
void SimultaneousCompoundIndexedAnimation_previousFrame(SimultaneousCompoundIndexedAnimation* this);
void SimultaneousCompoundIndexedAnimation_setSequence(SimultaneousCompoundIndexedAnimation* this, int32_t* sequence);
int32_t* SimultaneousCompoundIndexedAnimation_getSequence(SimultaneousCompoundIndexedAnimation* this);
void SimultaneousCompoundIndexedAnimation_nextFrame(SimultaneousCompoundIndexedAnimation* this);
void SimultaneousCompoundIndexedAnimation_paintXY(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void SimultaneousCompoundIndexedAnimation_paintThreedXYZ(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
Animation** SimultaneousCompoundIndexedAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this);
void SimultaneousCompoundIndexedAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray);

static void SimultaneousCompoundIndexedAnimation_initFields(SimultaneousCompoundIndexedAnimation* this) {
    
}


void SimultaneousCompoundIndexedAnimation_init(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        SimultaneousCompoundIndexedAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundIndexedAnimation* SimultaneousCompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexedAnimation* this = calloc(1, sizeof(SimultaneousCompoundIndexedAnimation));
    SimultaneousCompoundIndexedAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundIndexedAnimation_setFrame(SimultaneousCompoundIndexedAnimation* this, int32_t frameIndex) {
        IndexedAnimation* indexedAnimation = nullptr;
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[index]);
            IndexedAnimation_setFrame(indexedAnimation, frameIndex);
        }
}


int32_t SimultaneousCompoundIndexedAnimation_getFrame(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[0]);
        return IndexedAnimation_getFrame(indexedAnimation);
}


int32_t SimultaneousCompoundIndexedAnimation_getSize(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[0]);
        return IndexedAnimation_getSize(indexedAnimation);
}


void SimultaneousCompoundIndexedAnimation_previousFrame(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = nullptr;
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[index]);
            IndexedAnimation_previousFrame(indexedAnimation);
        }
}


void SimultaneousCompoundIndexedAnimation_setSequence(SimultaneousCompoundIndexedAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundIndexedAnimation_getSequence(SimultaneousCompoundIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void SimultaneousCompoundIndexedAnimation_nextFrame(SimultaneousCompoundIndexedAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], nextFrame);
        }
}


void SimultaneousCompoundIndexedAnimation_paintXY(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t size = java_array_length(this->animationInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(this->animationInterfaceArray[index], paintXY, graphics, x, y);
        }
}


void SimultaneousCompoundIndexedAnimation_paintThreedXYZ(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        int32_t size = java_array_length(this->animationInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(this->animationInterfaceArray[index], paintThreedXYZ, graphics, x, y, z);
        }
}


Animation** SimultaneousCompoundIndexedAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundIndexedAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}

