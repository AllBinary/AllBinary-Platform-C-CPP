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
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct SimultaneousCompoundIndexAnimation SimultaneousCompoundIndexAnimation;
struct SimultaneousCompoundIndexAnimation {
    IndexedAnimation base;
    IndexedAnimation** animationInterfaceArray;
};


SimultaneousCompoundIndexAnimation* SimultaneousCompoundIndexAnimation_new(IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundIndexAnimation_init(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void SimultaneousCompoundIndexAnimation_setFrame(SimultaneousCompoundIndexAnimation* this, int32_t frameIndex);
int32_t SimultaneousCompoundIndexAnimation_getFrame(SimultaneousCompoundIndexAnimation* this);
int32_t SimultaneousCompoundIndexAnimation_getAnimationSize(SimultaneousCompoundIndexAnimation* this);
int32_t SimultaneousCompoundIndexAnimation_getSize(SimultaneousCompoundIndexAnimation* this);
void SimultaneousCompoundIndexAnimation_previousFrame(SimultaneousCompoundIndexAnimation* this);
void SimultaneousCompoundIndexAnimation_nextFrame(SimultaneousCompoundIndexAnimation* this);
void SimultaneousCompoundIndexAnimation_setSequence(SimultaneousCompoundIndexAnimation* this, int32_t* sequence);
int32_t* SimultaneousCompoundIndexAnimation_getSequence(SimultaneousCompoundIndexAnimation* this);
void SimultaneousCompoundIndexAnimation_paintXY(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void SimultaneousCompoundIndexAnimation_paintThreedXYZ(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
void SimultaneousCompoundIndexAnimation_set(SimultaneousCompoundIndexAnimation* this, GL* gl);
IndexedAnimation** SimultaneousCompoundIndexAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this);
void SimultaneousCompoundIndexAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray);

static void SimultaneousCompoundIndexAnimation_initFields(SimultaneousCompoundIndexAnimation* this) {
    
}


void SimultaneousCompoundIndexAnimation_init(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        SimultaneousCompoundIndexAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundIndexAnimation* SimultaneousCompoundIndexAnimation_new(IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexAnimation* this = calloc(1, sizeof(SimultaneousCompoundIndexAnimation));
    SimultaneousCompoundIndexAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundIndexAnimation_setFrame(SimultaneousCompoundIndexAnimation* this, int32_t frameIndex) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrame, frameIndex);
        }
}


int32_t SimultaneousCompoundIndexAnimation_getFrame(SimultaneousCompoundIndexAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getFrame);
}


// throws Exception
int32_t SimultaneousCompoundIndexAnimation_getAnimationSize(SimultaneousCompoundIndexAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getAnimationSize);
}


int32_t SimultaneousCompoundIndexAnimation_getSize(SimultaneousCompoundIndexAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getSize);
}


void SimultaneousCompoundIndexAnimation_previousFrame(SimultaneousCompoundIndexAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], previousFrame);
        }
}


// throws Exception
void SimultaneousCompoundIndexAnimation_nextFrame(SimultaneousCompoundIndexAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], nextFrame);
        }
}


void SimultaneousCompoundIndexAnimation_setSequence(SimultaneousCompoundIndexAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundIndexAnimation_getSequence(SimultaneousCompoundIndexAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void SimultaneousCompoundIndexAnimation_paintXY(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], paintXY, graphics, x, y);
        }
}


void SimultaneousCompoundIndexAnimation_paintThreedXYZ(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], paintThreedXYZ, graphics, x, y, z);
        }
}


// throws Exception
void SimultaneousCompoundIndexAnimation_set(SimultaneousCompoundIndexAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], set, gl);
        }
}


IndexedAnimation** SimultaneousCompoundIndexAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundIndexAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}

