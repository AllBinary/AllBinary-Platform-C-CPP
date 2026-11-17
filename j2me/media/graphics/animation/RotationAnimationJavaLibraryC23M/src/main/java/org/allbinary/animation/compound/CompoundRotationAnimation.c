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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"

typedef struct CompoundRotationAnimation CompoundRotationAnimation;
struct CompoundRotationAnimation {
    RotationAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    RotationAnimation** animationInterfaceArray;
};


CompoundRotationAnimation* CompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void CompoundRotationAnimation_init(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void CompoundRotationAnimation_setFrame(CompoundRotationAnimation* this, int32_t index);
int32_t CompoundRotationAnimation_getFrame(CompoundRotationAnimation* this);
int32_t CompoundRotationAnimation_getAnimationSize(CompoundRotationAnimation* this);
int32_t CompoundRotationAnimation_getSize(CompoundRotationAnimation* this);
void CompoundRotationAnimation_previousFrame(CompoundRotationAnimation* this);
void CompoundRotationAnimation_nextFrame(CompoundRotationAnimation* this);
void CompoundRotationAnimation_previousRotation(CompoundRotationAnimation* this);
void CompoundRotationAnimation_nextRotation(CompoundRotationAnimation* this);
void CompoundRotationAnimation_setSequence(CompoundRotationAnimation* this, int32_t* sequence);
int32_t* CompoundRotationAnimation_getSequence(CompoundRotationAnimation* this);
void CompoundRotationAnimation_paintXY(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CompoundRotationAnimation_paintThreedXYZ(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
IndexedAnimation* CompoundRotationAnimation_getCurrentAnimation(CompoundRotationAnimation* this);
void CompoundRotationAnimation_nextAnimation(CompoundRotationAnimation* this);
void CompoundRotationAnimation_previousAnimation(CompoundRotationAnimation* this);
void CompoundRotationAnimation_setAnimation(CompoundRotationAnimation* this, int32_t index);
void CompoundRotationAnimation_setFrameByDirection(CompoundRotationAnimation* this, Direction* direction);
void CompoundRotationAnimation_setFrameToAngle(CompoundRotationAnimation* this, Angle* angle);
void CompoundRotationAnimation_adjustFrameToAngle(CompoundRotationAnimation* this, Angle* newAngle);
void CompoundRotationAnimation_adjustFrame(CompoundRotationAnimation* this, int16_t angle);
AngleInfo* CompoundRotationAnimation_getAngleInfoP(CompoundRotationAnimation* this);
RotationAnimation** CompoundRotationAnimation_getAnimationInterfaceArray(CompoundRotationAnimation* this);
void CompoundRotationAnimation_setAnimationInterfaceArray(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray);
void CompoundRotationAnimation_set(CompoundRotationAnimation* this, GL* gl);

static void CompoundRotationAnimation_initFields(CompoundRotationAnimation* this) {
    
}


void CompoundRotationAnimation_init(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        CompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

CompoundRotationAnimation* CompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundRotationAnimation* this = calloc(1, sizeof(CompoundRotationAnimation));
    CompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void CompoundRotationAnimation_setFrame(CompoundRotationAnimation* this, int32_t index) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrame, index);
}


int32_t CompoundRotationAnimation_getFrame(CompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getFrame);
}


// throws Exception
int32_t CompoundRotationAnimation_getAnimationSize(CompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getAnimationSize);
}


int32_t CompoundRotationAnimation_getSize(CompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getSize);
}


void CompoundRotationAnimation_previousFrame(CompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], previousFrame);
}


// throws Exception
void CompoundRotationAnimation_nextFrame(CompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], nextFrame);
}


void CompoundRotationAnimation_previousRotation(CompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], previousRotation);
}


void CompoundRotationAnimation_nextRotation(CompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], nextRotation);
}


void CompoundRotationAnimation_setSequence(CompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* CompoundRotationAnimation_getSequence(CompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void CompoundRotationAnimation_paintXY(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], paintXY, graphics, x, y);
}


void CompoundRotationAnimation_paintThreedXYZ(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], paintThreedXYZ, graphics, x, y, z);
}


IndexedAnimation* CompoundRotationAnimation_getCurrentAnimation(CompoundRotationAnimation* this) {
        return this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)];
}


void CompoundRotationAnimation_nextAnimation(CompoundRotationAnimation* this) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, next);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_previousAnimation(CompoundRotationAnimation* this) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, previous);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_setAnimation(CompoundRotationAnimation* this, int32_t index) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, setIndex, index);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_setFrameByDirection(CompoundRotationAnimation* this, Direction* direction) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrameByDirection, direction);
}


void CompoundRotationAnimation_setFrameToAngle(CompoundRotationAnimation* this, Angle* angle) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrameToAngle, angle);
}


void CompoundRotationAnimation_adjustFrameToAngle(CompoundRotationAnimation* this, Angle* newAngle) {
        CompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void CompoundRotationAnimation_adjustFrame(CompoundRotationAnimation* this, int16_t angle) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], adjustFrame, angle);
}


AngleInfo* CompoundRotationAnimation_getAngleInfoP(CompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getAngleInfoP);
}


RotationAnimation** CompoundRotationAnimation_getAnimationInterfaceArray(CompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void CompoundRotationAnimation_setAnimationInterfaceArray(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void CompoundRotationAnimation_set(CompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], set, gl);
        }
}

