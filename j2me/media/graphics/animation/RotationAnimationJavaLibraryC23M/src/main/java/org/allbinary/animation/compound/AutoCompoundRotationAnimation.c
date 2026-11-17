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

typedef struct AutoCompoundRotationAnimation AutoCompoundRotationAnimation;
struct AutoCompoundRotationAnimation {
    RotationAnimation base;
    CompoundAnimationInterface CompoundAnimationInterface_interface;
    RotationAnimation** animationInterfaceArray;
};


AutoCompoundRotationAnimation* AutoCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void AutoCompoundRotationAnimation_init(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void AutoCompoundRotationAnimation_setFrame(AutoCompoundRotationAnimation* this, int32_t index);
int32_t AutoCompoundRotationAnimation_getFrame(AutoCompoundRotationAnimation* this);
int32_t AutoCompoundRotationAnimation_getAnimationSize(AutoCompoundRotationAnimation* this);
int32_t AutoCompoundRotationAnimation_getSize(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_previousFrame(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_nextFrame(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_previousRotation(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_nextRotation(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_setSequence(AutoCompoundRotationAnimation* this, int32_t* sequence);
int32_t* AutoCompoundRotationAnimation_getSequence(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_paintXY(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void AutoCompoundRotationAnimation_paintThreedXYZ(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
IndexedAnimation* AutoCompoundRotationAnimation_getCurrentAnimation(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_nextAnimation(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_previousAnimation(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_setAnimation(AutoCompoundRotationAnimation* this, int32_t index);
void AutoCompoundRotationAnimation_setFrameByDirection(AutoCompoundRotationAnimation* this, Direction* direction);
void AutoCompoundRotationAnimation_setFrameToAngle(AutoCompoundRotationAnimation* this, Angle* angle);
void AutoCompoundRotationAnimation_adjustFrameToAngle(AutoCompoundRotationAnimation* this, Angle* newAngle);
void AutoCompoundRotationAnimation_adjustFrame(AutoCompoundRotationAnimation* this, int16_t angle);
AngleInfo* AutoCompoundRotationAnimation_getAngleInfoP(AutoCompoundRotationAnimation* this);
RotationAnimation** AutoCompoundRotationAnimation_getAnimationInterfaceArray(AutoCompoundRotationAnimation* this);
void AutoCompoundRotationAnimation_setAnimationInterfaceArray(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray);
void AutoCompoundRotationAnimation_set(AutoCompoundRotationAnimation* this, GL* gl);

static void AutoCompoundRotationAnimation_initFields(AutoCompoundRotationAnimation* this) {
    
}


void AutoCompoundRotationAnimation_init(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        AutoCompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

AutoCompoundRotationAnimation* AutoCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    AutoCompoundRotationAnimation* this = calloc(1, sizeof(AutoCompoundRotationAnimation));
    AutoCompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void AutoCompoundRotationAnimation_setFrame(AutoCompoundRotationAnimation* this, int32_t index) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrame, index);
}


int32_t AutoCompoundRotationAnimation_getFrame(AutoCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getFrame);
}


// throws Exception
int32_t AutoCompoundRotationAnimation_getAnimationSize(AutoCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getAnimationSize);
}


int32_t AutoCompoundRotationAnimation_getSize(AutoCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getSize);
}


void AutoCompoundRotationAnimation_previousFrame(AutoCompoundRotationAnimation* this) {
        JAVA_CALL(this->circularIndexUtil, previous);
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], previousFrame);
}


// throws Exception
void AutoCompoundRotationAnimation_nextFrame(AutoCompoundRotationAnimation* this) {
        JAVA_CALL(this->circularIndexUtil, next);
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], nextFrame);
}


void AutoCompoundRotationAnimation_previousRotation(AutoCompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], previousRotation);
}


void AutoCompoundRotationAnimation_nextRotation(AutoCompoundRotationAnimation* this) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], nextRotation);
}


void AutoCompoundRotationAnimation_setSequence(AutoCompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* AutoCompoundRotationAnimation_getSequence(AutoCompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void AutoCompoundRotationAnimation_paintXY(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], paintXY, graphics, x, y);
}


void AutoCompoundRotationAnimation_paintThreedXYZ(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], paintThreedXYZ, graphics, x, y, z);
}


IndexedAnimation* AutoCompoundRotationAnimation_getCurrentAnimation(AutoCompoundRotationAnimation* this) {
        return this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)];
}


void AutoCompoundRotationAnimation_nextAnimation(AutoCompoundRotationAnimation* this) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, next);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_previousAnimation(AutoCompoundRotationAnimation* this) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, previous);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_setAnimation(AutoCompoundRotationAnimation* this, int32_t index) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        JAVA_CALL(this->circularIndexUtil, setIndex, index);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_setFrameByDirection(AutoCompoundRotationAnimation* this, Direction* direction) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrameByDirection, direction);
}


void AutoCompoundRotationAnimation_setFrameToAngle(AutoCompoundRotationAnimation* this, Angle* angle) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], setFrameToAngle, angle);
}


void AutoCompoundRotationAnimation_adjustFrameToAngle(AutoCompoundRotationAnimation* this, Angle* newAngle) {
        AutoCompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void AutoCompoundRotationAnimation_adjustFrame(AutoCompoundRotationAnimation* this, int16_t angle) {
        JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], adjustFrame, angle);
}


AngleInfo* AutoCompoundRotationAnimation_getAngleInfoP(AutoCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[JAVA_CALL(this->circularIndexUtil, getIndex)], getAngleInfoP);
}


RotationAnimation** AutoCompoundRotationAnimation_getAnimationInterfaceArray(AutoCompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void AutoCompoundRotationAnimation_setAnimationInterfaceArray(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void AutoCompoundRotationAnimation_set(AutoCompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], set, gl);
        }
}

