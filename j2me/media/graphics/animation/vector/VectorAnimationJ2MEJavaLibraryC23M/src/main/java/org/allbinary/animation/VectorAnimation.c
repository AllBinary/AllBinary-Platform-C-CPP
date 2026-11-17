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
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"

typedef struct VectorAnimation VectorAnimation;
struct VectorAnimation {
    IndexedAnimation base;
    VectorAnimationInterface VectorAnimationInterface_interface;
    int32_t*** currentPoints;
    CircularIndexUtil* circularIndexUtil;
};


VectorAnimation* VectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);
VectorAnimation* VectorAnimation_createVectorAnimation(int32_t** currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void VectorAnimation_init(VectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);
void VectorAnimation_setBasicColorP(VectorAnimation* this, BasicColor* basicColor);
void VectorAnimation_changeBasicColor(VectorAnimation* this, BasicColor* basicColor);
void VectorAnimation_setAlpha(VectorAnimation* this, int32_t alpha);
void VectorAnimation_setScale(VectorAnimation* this, float scaleX, float scaleY);
void VectorAnimation_setMaxScale(VectorAnimation* this, float maxScaleX, float maxScaleY);
static void VectorAnimation_updateModifiers(VectorAnimation* this);
int32_t VectorAnimation_getAnimationSize(VectorAnimation* this);
int32_t VectorAnimation_getSize(VectorAnimation* this);
void VectorAnimation_setSequence(VectorAnimation* this, int32_t* sequence);
int32_t* VectorAnimation_getSequence(VectorAnimation* this);
void VectorAnimation_nextFrame(VectorAnimation* this);
void VectorAnimation_previousFrame(VectorAnimation* this);
void VectorAnimation_paintVectors(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void VectorAnimation_paintXY(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);
int32_t VectorAnimation_getFrame(VectorAnimation* this);
void VectorAnimation_setFrame(VectorAnimation* this, int32_t index);
int32_t** VectorAnimation_getPoints(VectorAnimation* this, int32_t frame);
void VectorAnimation_setPoints(VectorAnimation* this, int32_t*** currentPoints);
BasicColor* VectorAnimation_getBasicColorP(VectorAnimation* this);

static void VectorAnimation_initFields(VectorAnimation* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    this->circularIndexUtil = CircularIndexUtil_createInstance(0);
}


VectorAnimation* VectorAnimation_createVectorAnimation(int32_t** currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        int32_t*** currentPoints = ((int32_t***) java_array_new3(sizeof(int32_t), 1, java_array_length(currentPoints2), 2));
        int32_t size = java_array_length(currentPoints2);
        for (int32_t index = 0; index < size; index++) {
            currentPoints[0][index][0] = currentPoints2[index][0];
            currentPoints[0][index][1] = currentPoints2[index][1];
        }
        return VectorAnimation_new(currentPoints, basicColor, animationBehavior);
}


void VectorAnimation_init(VectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        VectorAnimation_initFields(this);
        VectorAnimation_setPoints(this, currentPoints);
        VectorAnimation_setBasicColorP(this, basicColor);
}

VectorAnimation* VectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorAnimation* this = calloc(1, sizeof(VectorAnimation));
    VectorAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void VectorAnimation_setBasicColorP(VectorAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (VectorAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(VectorAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        IndexedAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_changeBasicColor(VectorAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (VectorAnimation_getChangeBasicColor(this) == nullptr || JAVA_CALL(VectorAnimation_getChangeBasicColor(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        IndexedAnimation_changeBasicColor((&this->base), basicColor);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_setAlpha(VectorAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        IndexedAnimation_setAlpha((&this->base), alpha);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_setScale(VectorAnimation* this, float scaleX, float scaleY) {
}


void VectorAnimation_setMaxScale(VectorAnimation* this, float maxScaleX, float maxScaleY) {
}


static void VectorAnimation_updateModifiers(VectorAnimation* this) {
}


// throws Exception
int32_t VectorAnimation_getAnimationSize(VectorAnimation* this) {
        return VectorAnimation_getSize(this);
}


int32_t VectorAnimation_getSize(VectorAnimation* this) {
        return java_array_length(this->currentPoints);
}


void VectorAnimation_setSequence(VectorAnimation* this, int32_t* sequence) {
}


int32_t* VectorAnimation_getSequence(VectorAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void VectorAnimation_nextFrame(VectorAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void VectorAnimation_previousFrame(VectorAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void VectorAnimation_paintVectors(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_TRY {
            int32_t nextPointX = 0;
            int32_t nextPointY = 0;
            int32_t* nextPoint = nullptr;
            int32_t* point = nullptr;
            int32_t** currentPointsFrame = this->currentPoints[CircularIndexUtil_getIndex(this->circularIndexUtil)];
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


void VectorAnimation_paintXY(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP, graphics, this->basicColor);
        VectorAnimation_paintVectors(this, graphics, x, y);
}


int32_t VectorAnimation_getFrame(VectorAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


void VectorAnimation_setFrame(VectorAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t** VectorAnimation_getPoints(VectorAnimation* this, int32_t frame) {
        return this->currentPoints[frame];
}


void VectorAnimation_setPoints(VectorAnimation* this, int32_t*** currentPoints) {
        this->currentPoints = currentPoints;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(currentPoints));
}


BasicColor* VectorAnimation_getBasicColorP(VectorAnimation* this) {
        return IndexedAnimation_getBasicColorP((&this->base));
}

