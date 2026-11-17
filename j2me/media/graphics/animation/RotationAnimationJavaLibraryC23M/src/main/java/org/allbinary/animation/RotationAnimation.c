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
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/FrameUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"

typedef struct RotationAnimation RotationAnimation;
struct RotationAnimation {
    IndexedAnimation base;
    RotationAnimationInterface RotationAnimationInterface_interface;
    FrameUtil* frameUtil;
    DirectionUtil* directionUtil;
    AngleInfo* angleInfo;
    CircularIndexUtil* circularIndexUtil;
};


RotationAnimation* RotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);

void RotationAnimation_init(RotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);
void RotationAnimation_nextRotationX(RotationAnimation* this);
void RotationAnimation_previousRotationX(RotationAnimation* this);
void RotationAnimation_nextRotation(RotationAnimation* this);
void RotationAnimation_previousRotation(RotationAnimation* this);
void RotationAnimation_nextRotationZ(RotationAnimation* this);
void RotationAnimation_previousRotationZ(RotationAnimation* this);
void RotationAnimation_setFrame(RotationAnimation* this, int32_t index);
void RotationAnimation_setFrameByDirection(RotationAnimation* this, Direction* direction);
void RotationAnimation_setFrameToAngle(RotationAnimation* this, Angle* angle);
void RotationAnimation_adjustFrameToAngle(RotationAnimation* this, Angle* angle);
void RotationAnimation_adjustFrame(RotationAnimation* this, int16_t angle);
int32_t RotationAnimation_getFrame(RotationAnimation* this);
int32_t RotationAnimation_getSize(RotationAnimation* this);
AngleInfo* RotationAnimation_getAngleInfoP(RotationAnimation* this);
const char* RotationAnimation_toString(RotationAnimation* this);

static void RotationAnimation_initFields(RotationAnimation* this) {
    this->frameUtil = FrameUtil_getInstance();
    this->directionUtil = DirectionUtil_getInstance();
    
    
}


void RotationAnimation_init(RotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        RotationAnimation_initFields(this);
        this->angleInfo = angleInfo;
        this->circularIndexUtil = circularIndexUtil;
}

RotationAnimation* RotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    RotationAnimation* this = calloc(1, sizeof(RotationAnimation));
    RotationAnimation_init(this, angleInfo, circularIndexUtil, animationBehavior);
    return this;
}


void RotationAnimation_nextRotationX(RotationAnimation* this) {
}


void RotationAnimation_previousRotationX(RotationAnimation* this) {
}


void RotationAnimation_nextRotation(RotationAnimation* this) {
        AngleInfo_adjustAngle(this->angleInfo, CircularIndexUtil_next(this->circularIndexUtil));
}


void RotationAnimation_previousRotation(RotationAnimation* this) {
        AngleInfo_adjustAngle(this->angleInfo, CircularIndexUtil_previous(this->circularIndexUtil));
}


void RotationAnimation_nextRotationZ(RotationAnimation* this) {
}


void RotationAnimation_previousRotationZ(RotationAnimation* this) {
}


void RotationAnimation_setFrame(RotationAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
        int32_t newFrame = CircularIndexUtil_getIndex(this->circularIndexUtil);
        AngleInfo_adjustAngle(this->angleInfo, newFrame);
}


void RotationAnimation_setFrameByDirection(RotationAnimation* this, Direction* direction) {
        Angle* angle = DirectionUtil_getFrameAngle(this->directionUtil, direction);
        RotationAnimation_adjustFrameToAngle(this, angle);
}


void RotationAnimation_setFrameToAngle(RotationAnimation* this, Angle* angle) {
        RotationAnimation_adjustFrameToAngle(this, angle);
}


void RotationAnimation_adjustFrameToAngle(RotationAnimation* this, Angle* angle) {
        RotationAnimation_adjustFrame(this, Angle_getValue(angle));
}


void RotationAnimation_adjustFrame(RotationAnimation* this, int16_t angle) {
        RotationAnimation_setFrame(this, FrameUtil_getFrameForAngle(this->frameUtil, angle, ((int32_t) JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getAngleIncrement))));
}


int32_t RotationAnimation_getFrame(RotationAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t RotationAnimation_getSize(RotationAnimation* this) {
        return CircularIndexUtil_getSize(this->circularIndexUtil);
}


AngleInfo* RotationAnimation_getAngleInfoP(RotationAnimation* this) {
        return this->angleInfo;
}


const char* RotationAnimation_toString(RotationAnimation* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), IndexedAnimation_toString((&this->base))), append, "circularIndexUtil: "), append, CircularIndexUtil_toString(this->circularIndexUtil)), append, "angleInfo: "), append, AngleInfo_toString(this->angleInfo)), toString);
}

