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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"

typedef struct CompoundIndexedAnimation CompoundIndexedAnimation;
struct CompoundIndexedAnimation {
    IndexedAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    CircularIndexUtil* circularIndexUtil;
    Animation** animationInterfaceArray;
};


CompoundIndexedAnimation* CompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundIndexedAnimation_init(CompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void CompoundIndexedAnimation_setFrame(CompoundIndexedAnimation* this, int32_t index);
int32_t CompoundIndexedAnimation_getFrame(CompoundIndexedAnimation* this);
int32_t CompoundIndexedAnimation_getSize(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_previousFrame(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_setSequence(CompoundIndexedAnimation* this, int32_t* sequence);
int32_t* CompoundIndexedAnimation_getSequence(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_nextFrame(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_paintXY(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CompoundIndexedAnimation_paintThreedXYZ(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
IndexedAnimation* CompoundIndexedAnimation_getCurrentAnimation(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_nextAnimation(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_previousAnimation(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_setAnimation(CompoundIndexedAnimation* this, int32_t index);
Animation** CompoundIndexedAnimation_getAnimationInterfaceArray(CompoundIndexedAnimation* this);
void CompoundIndexedAnimation_setAnimationInterfaceArray(CompoundIndexedAnimation* this, Animation** animationInterfaceArray);
void CompoundIndexedAnimation_set(CompoundIndexedAnimation* this, GL* gl);

static void CompoundIndexedAnimation_initFields(CompoundIndexedAnimation* this) {
    
    
}


void CompoundIndexedAnimation_init(CompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        CompoundIndexedAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

CompoundIndexedAnimation* CompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundIndexedAnimation* this = calloc(1, sizeof(CompoundIndexedAnimation));
    CompoundIndexedAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void CompoundIndexedAnimation_setFrame(CompoundIndexedAnimation* this, int32_t index) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        IndexedAnimation_setFrame(indexedAnimation, index);
}


int32_t CompoundIndexedAnimation_getFrame(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        return IndexedAnimation_getFrame(indexedAnimation);
}


int32_t CompoundIndexedAnimation_getSize(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        return IndexedAnimation_getSize(indexedAnimation);
}


void CompoundIndexedAnimation_previousFrame(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        IndexedAnimation_previousFrame(indexedAnimation);
}


void CompoundIndexedAnimation_setSequence(CompoundIndexedAnimation* this, int32_t* sequence) {
}


int32_t* CompoundIndexedAnimation_getSequence(CompoundIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void CompoundIndexedAnimation_nextFrame(CompoundIndexedAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], nextFrame);
}


void CompoundIndexedAnimation_paintXY(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], paintXY, graphics, x, y);
}


void CompoundIndexedAnimation_paintThreedXYZ(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        JAVA_CALL(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], paintThreedXYZ, graphics, x, y, z);
}


IndexedAnimation* CompoundIndexedAnimation_getCurrentAnimation(CompoundIndexedAnimation* this) {
        return ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
}


void CompoundIndexedAnimation_nextAnimation(CompoundIndexedAnimation* this) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_next(this->circularIndexUtil);
        CompoundIndexedAnimation_setFrame(this, frame);
}


void CompoundIndexedAnimation_previousAnimation(CompoundIndexedAnimation* this) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_previous(this->circularIndexUtil);
        CompoundIndexedAnimation_setFrame(this, frame);
}


void CompoundIndexedAnimation_setAnimation(CompoundIndexedAnimation* this, int32_t index) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
        CompoundIndexedAnimation_setFrame(this, frame);
}


Animation** CompoundIndexedAnimation_getAnimationInterfaceArray(CompoundIndexedAnimation* this) {
        return this->animationInterfaceArray;
}


void CompoundIndexedAnimation_setAnimationInterfaceArray(CompoundIndexedAnimation* this, Animation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void CompoundIndexedAnimation_set(CompoundIndexedAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], set, gl);
        }
}

