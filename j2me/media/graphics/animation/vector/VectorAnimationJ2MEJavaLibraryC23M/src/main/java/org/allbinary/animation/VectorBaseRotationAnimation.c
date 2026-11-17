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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"

typedef struct VectorBaseRotationAnimation VectorBaseRotationAnimation;
struct VectorBaseRotationAnimation {
    RotationAnimation base;
    VectorAnimationInterface VectorAnimationInterface_interface;
    int32_t*** currentPoints;
};


VectorBaseRotationAnimation* VectorBaseRotationAnimation_new(AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorBaseRotationAnimation_init(VectorBaseRotationAnimation* this, AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);
int32_t VectorBaseRotationAnimation_getAnimationSize(VectorBaseRotationAnimation* this);
int32_t VectorBaseRotationAnimation_getFrame(VectorBaseRotationAnimation* this);
void VectorBaseRotationAnimation_setFrame(VectorBaseRotationAnimation* this, int32_t index);
void VectorBaseRotationAnimation_nextFrame(VectorBaseRotationAnimation* this);
void VectorBaseRotationAnimation_previousFrame(VectorBaseRotationAnimation* this);
int32_t VectorBaseRotationAnimation_getSize(VectorBaseRotationAnimation* this);
void VectorBaseRotationAnimation_setSequence(VectorBaseRotationAnimation* this, int32_t* sequence);
int32_t* VectorBaseRotationAnimation_getSequence(VectorBaseRotationAnimation* this);
void VectorBaseRotationAnimation_paintXY(VectorBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
int32_t** VectorBaseRotationAnimation_getPoints(VectorBaseRotationAnimation* this, int32_t frame);
void VectorBaseRotationAnimation_setPoints(VectorBaseRotationAnimation* this, int32_t*** currentPoints);
BasicColor* VectorBaseRotationAnimation_getBasicColorP(VectorBaseRotationAnimation* this);
void VectorBaseRotationAnimation_setBasicColorP(VectorBaseRotationAnimation* this, BasicColor* basicColor);

static void VectorBaseRotationAnimation_initFields(VectorBaseRotationAnimation* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
}


void VectorBaseRotationAnimation_init(VectorBaseRotationAnimation* this, AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement)), animationBehavior);
        VectorBaseRotationAnimation_initFields(this);
        VectorBaseRotationAnimation_setPoints(this, currentPoints);
        VectorBaseRotationAnimation_setBasicColorP(this, basicColor);
}

VectorBaseRotationAnimation* VectorBaseRotationAnimation_new(AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorBaseRotationAnimation* this = calloc(1, sizeof(VectorBaseRotationAnimation));
    VectorBaseRotationAnimation_init(this, angleInfo, currentPoints, basicColor, animationBehavior);
    return this;
}


// throws Exception
int32_t VectorBaseRotationAnimation_getAnimationSize(VectorBaseRotationAnimation* this) {
        return VectorBaseRotationAnimation_getSize(this);
}


int32_t VectorBaseRotationAnimation_getFrame(VectorBaseRotationAnimation* this) {
        return JAVA_CALL(this->circularIndexUtil, getIndex);
}


void VectorBaseRotationAnimation_setFrame(VectorBaseRotationAnimation* this, int32_t index) {
        JAVA_CALL(this->circularIndexUtil, setIndex, index);
}


void VectorBaseRotationAnimation_nextFrame(VectorBaseRotationAnimation* this) {
        JAVA_CALL(this->circularIndexUtil, next);
}


void VectorBaseRotationAnimation_previousFrame(VectorBaseRotationAnimation* this) {
        JAVA_CALL(this->circularIndexUtil, previous);
}


int32_t VectorBaseRotationAnimation_getSize(VectorBaseRotationAnimation* this) {
        return java_array_length(this->currentPoints);
}


void VectorBaseRotationAnimation_setSequence(VectorBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* VectorBaseRotationAnimation_getSequence(VectorBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void VectorBaseRotationAnimation_paintXY(VectorBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP, graphics, this->basicColor);
        JAVA_TRY {
            int32_t nextPointX = 0;
            int32_t nextPointY = 0;
            int32_t* nextPoint = nullptr;
            int32_t* point = nullptr;
            int32_t** currentPointsFrame = this->currentPoints[JAVA_CALL(this->circularIndexUtil, getIndex)];
            int32_t size = java_array_length(currentPointsFrame);
            int32_t index = size - 2;
            while (--index >= 0) {
                nextPoint = currentPointsFrame[index];
                point = currentPointsFrame[index + 1];
                nextPointX = nextPoint[0];
                nextPointY = nextPoint[1];
                if (nextPointX != 1000) {
                    Graphics_drawLine(graphics, point[0] + x, point[1] + y, nextPointX + x, nextPointY + y);
                } else {
                    index--;
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "paintVectors", e);
        } JAVA_END_TRY;
}


int32_t** VectorBaseRotationAnimation_getPoints(VectorBaseRotationAnimation* this, int32_t frame) {
        return this->currentPoints[frame];
}


void VectorBaseRotationAnimation_setPoints(VectorBaseRotationAnimation* this, int32_t*** currentPoints) {
        this->currentPoints = currentPoints;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->currentPoints));
}


BasicColor* VectorBaseRotationAnimation_getBasicColorP(VectorBaseRotationAnimation* this) {
        return RotationAnimation_getBasicColorP((&this->base));
}


void VectorBaseRotationAnimation_setBasicColorP(VectorBaseRotationAnimation* this, BasicColor* basicColor) {
        RotationAnimation_setBasicColorP((&this->base), basicColor);
}

