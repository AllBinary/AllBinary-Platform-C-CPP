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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct SimultaneousCompoundRotationAnimation SimultaneousCompoundRotationAnimation;
struct SimultaneousCompoundRotationAnimation {
    RotationAnimation base;
    RotationAnimation** animationInterfaceArray;
};


SimultaneousCompoundRotationAnimation* SimultaneousCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);

void SimultaneousCompoundRotationAnimation_init(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior);
void SimultaneousCompoundRotationAnimation_setFrame(SimultaneousCompoundRotationAnimation* this, int32_t frameIndex);
int32_t SimultaneousCompoundRotationAnimation_getFrame(SimultaneousCompoundRotationAnimation* this);
int32_t SimultaneousCompoundRotationAnimation_getAnimationSize(SimultaneousCompoundRotationAnimation* this);
int32_t SimultaneousCompoundRotationAnimation_getSize(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_previousFrame(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_nextFrame(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_previousRotation(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_nextRotation(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_setSequence(SimultaneousCompoundRotationAnimation* this, int32_t* sequence);
int32_t* SimultaneousCompoundRotationAnimation_getSequence(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_paintXY(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void SimultaneousCompoundRotationAnimation_paintThreedXYZ(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
void SimultaneousCompoundRotationAnimation_setFrameByDirection(SimultaneousCompoundRotationAnimation* this, Direction* direction);
void SimultaneousCompoundRotationAnimation_setFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* angle);
void SimultaneousCompoundRotationAnimation_adjustFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* newAngle);
void SimultaneousCompoundRotationAnimation_adjustFrame(SimultaneousCompoundRotationAnimation* this, int16_t angle);
AngleInfo* SimultaneousCompoundRotationAnimation_getAngleInfoP(SimultaneousCompoundRotationAnimation* this);
RotationAnimation** SimultaneousCompoundRotationAnimation_getAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this);
void SimultaneousCompoundRotationAnimation_setAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray);
void SimultaneousCompoundRotationAnimation_set(SimultaneousCompoundRotationAnimation* this, GL* gl);

static void SimultaneousCompoundRotationAnimation_initFields(SimultaneousCompoundRotationAnimation* this) {
    
}


void SimultaneousCompoundRotationAnimation_init(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        SimultaneousCompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundRotationAnimation* SimultaneousCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundRotationAnimation* this = calloc(1, sizeof(SimultaneousCompoundRotationAnimation));
    SimultaneousCompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundRotationAnimation_setFrame(SimultaneousCompoundRotationAnimation* this, int32_t frameIndex) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrame, frameIndex);
        }
}


int32_t SimultaneousCompoundRotationAnimation_getFrame(SimultaneousCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getFrame);
}


// throws Exception
int32_t SimultaneousCompoundRotationAnimation_getAnimationSize(SimultaneousCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getAnimationSize);
}


int32_t SimultaneousCompoundRotationAnimation_getSize(SimultaneousCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getSize);
}


void SimultaneousCompoundRotationAnimation_previousFrame(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], previousFrame);
        }
}


// throws Exception
void SimultaneousCompoundRotationAnimation_nextFrame(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], nextFrame);
        }
}


void SimultaneousCompoundRotationAnimation_previousRotation(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], previousRotation);
        }
}


void SimultaneousCompoundRotationAnimation_nextRotation(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], nextRotation);
        }
}


void SimultaneousCompoundRotationAnimation_setSequence(SimultaneousCompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundRotationAnimation_getSequence(SimultaneousCompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void SimultaneousCompoundRotationAnimation_paintXY(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], paintXY, graphics, x, y);
        }
}


void SimultaneousCompoundRotationAnimation_paintThreedXYZ(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], paintThreedXYZ, graphics, x, y, z);
        }
}


void SimultaneousCompoundRotationAnimation_setFrameByDirection(SimultaneousCompoundRotationAnimation* this, Direction* direction) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrameByDirection, direction);
        }
}


void SimultaneousCompoundRotationAnimation_setFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* angle) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrameToAngle, angle);
        }
}


void SimultaneousCompoundRotationAnimation_adjustFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* newAngle) {
        SimultaneousCompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void SimultaneousCompoundRotationAnimation_adjustFrame(SimultaneousCompoundRotationAnimation* this, int16_t angle) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], adjustFrame, angle);
        }
}


AngleInfo* SimultaneousCompoundRotationAnimation_getAngleInfoP(SimultaneousCompoundRotationAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getAngleInfoP);
}


RotationAnimation** SimultaneousCompoundRotationAnimation_getAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundRotationAnimation_setAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void SimultaneousCompoundRotationAnimation_set(SimultaneousCompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            JAVA_CALL(this->animationInterfaceArray[index], set, gl);
        }
}

