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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/VectorBaseRotationAnimation.h"

typedef struct VectorRotationAnimation VectorRotationAnimation;
struct VectorRotationAnimation {
    VectorBaseRotationAnimation base;
};


VectorRotationAnimation* VectorRotationAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorRotationAnimation_init(VectorRotationAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);
void VectorRotationAnimation_setFrameByDirection(VectorRotationAnimation* this, Direction* direction);
void VectorRotationAnimation_setFrameToAngle(VectorRotationAnimation* this, Angle* angle);
void VectorRotationAnimation_setFrame(VectorRotationAnimation* this, int32_t index);
void VectorRotationAnimation_adjustFrame(VectorRotationAnimation* this, int16_t newAngle);
void VectorRotationAnimation_adjustFrameToAngle(VectorRotationAnimation* this, Angle* newAngle);


void VectorRotationAnimation_init(VectorRotationAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        VectorBaseRotationAnimation_init(&this->base, AngleInfo_getInstance(((int16_t) (AngleFactory_getInstance()->TOTAL_ANGLE / java_array_length(currentPoints)))), currentPoints, basicColor, animationBehavior);
        JAVA_CALL(this->angleInfo, adjustAngle, VectorRotationAnimation_getFrame(this));
}

VectorRotationAnimation* VectorRotationAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorRotationAnimation* this = calloc(1, sizeof(VectorRotationAnimation));
    VectorRotationAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void VectorRotationAnimation_setFrameByDirection(VectorRotationAnimation* this, Direction* direction) {
        Angle* angle = JAVA_CALL(this->directionUtil, getFrameAngle, direction);
        VectorRotationAnimation_adjustFrameToAngle(this, angle);
}


void VectorRotationAnimation_setFrameToAngle(VectorRotationAnimation* this, Angle* angle) {
        VectorRotationAnimation_adjustFrameToAngle(this, angle);
}


void VectorRotationAnimation_setFrame(VectorRotationAnimation* this, int32_t index) {
        VectorBaseRotationAnimation_setFrame((&this->base), index);
        JAVA_CALL(this->angleInfo, adjustAngle, VectorRotationAnimation_getFrame(this));
}


void VectorRotationAnimation_adjustFrame(VectorRotationAnimation* this, int16_t newAngle) {
        VectorRotationAnimation_setFrame(this, JAVA_CALL(this->frameUtil, getFrameForAngle, newAngle, ((int32_t) JAVA_CALL(JAVA_CALL(this->angleInfo, getAngleIncrementInfo), getAngleIncrement))));
}


void VectorRotationAnimation_adjustFrameToAngle(VectorRotationAnimation* this, Angle* newAngle) {
        VectorRotationAnimation_adjustFrame(this, SHORT_getValue(newAngle));
}

