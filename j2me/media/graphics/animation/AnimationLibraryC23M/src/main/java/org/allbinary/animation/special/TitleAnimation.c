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
// package org.allbinary.animation.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"

typedef struct TitleAnimation TitleAnimation;
struct TitleAnimation {
    SpecialAnimation base;
    ABSystemWrapper* systemWrapper;
    float deltaX;
    float deltaY;
    float deltaZ;
    BasicColor** basicColorArray;
    int32_t* dxArray;
    int32_t* dyArray;
    int32_t widthP;
    IndexedAnimation** animationInterfaceArray;
    int32_t sizeP;
    int32_t y;
    int64_t lastFrameStartTime;
    DisplayInfoSingleton* displayInfoSingleton;
    BasicColor* CLEAR_COLOR;
};


TitleAnimation* TitleAnimation_new(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior);
TitleAnimation* TitleAnimation_createAnimation(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width);

void TitleAnimation_init(TitleAnimation* this, IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior);
void TitleAnimation_nextFrame(TitleAnimation* this);
bool TitleAnimation_isComplete(TitleAnimation* this);
void TitleAnimation_setSequence(TitleAnimation* this, int32_t* sequence);
int32_t* TitleAnimation_getSequence(TitleAnimation* this);
int32_t TitleAnimation_getSize(TitleAnimation* this);
int32_t TitleAnimation_getFrame(TitleAnimation* this);
void TitleAnimation_setFrame(TitleAnimation* this, int32_t frame);
void TitleAnimation_setLastFrame(TitleAnimation* this);
void TitleAnimation_reset(TitleAnimation* this);
void TitleAnimation_previousFrame(TitleAnimation* this);
void TitleAnimation_paintFrameXY(TitleAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y);
void TitleAnimation_paintXY(TitleAnimation* this, Graphics* graphics, int32_t ax, int32_t ay);

static void TitleAnimation_initFields(TitleAnimation* this) {
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->deltaX = 0.0f;
    this->deltaY = 0.0f;
    this->deltaZ = 0.0f;
    
    
    
    
    
    
    
    
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->CLEAR_COLOR = BasicColorFactory_getInstance()->CLEAR_COLOR;
}


TitleAnimation* TitleAnimation_createAnimation(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width) {
        return TitleAnimation_new(animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, IndexedAnimationBehavior_new(1, 250));
}


void TitleAnimation_init(TitleAnimation* this, IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) {
        SpecialAnimation_init(&this->base, animationBehavior);
        TitleAnimation_initFields(this);
        this->lastFrameStartTime = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
        this->animationInterfaceArray = animationInterfaceArray;
        this->sizeP = java_array_length(this->animationInterfaceArray);
        this->basicColorArray = basicColorArray;
        this->dxArray = dxArray;
        this->dyArray = dyArray;
        this->y = y;
        this->widthP = width;
        TitleAnimation_reset(this);
}

TitleAnimation* TitleAnimation_new(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) {
    TitleAnimation* this = calloc(1, sizeof(TitleAnimation));
    TitleAnimation_init(this, animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, animationBehavior);
    return this;
}


void TitleAnimation_nextFrame(TitleAnimation* this) {
        int64_t currentTime = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
        int64_t totalTimeElapsed = currentTime - this->lastFrameStartTime;
        IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) TitleAnimation_getAnimationBehavior(this));
        if (totalTimeElapsed > indexedAnimationBehavior->frameDelayTime) {
            TitleAnimation_previousFrame(this);
            this->lastFrameStartTime = currentTime;
        }
        if (JAVA_CALL(this->animationInterfaceArray[0], getFrame) == 0) {
            indexedAnimationBehavior->loopIndex++;
        }
}


bool TitleAnimation_isComplete(TitleAnimation* this) {
        IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) TitleAnimation_getAnimationBehavior(this));
        if (indexedAnimationBehavior->loopTotal == -1 || indexedAnimationBehavior->loopIndex < indexedAnimationBehavior->loopTotal || TitleAnimation_getFrame(this) != 0) {
            return false;
        } else {
            return true;
        }
}


void TitleAnimation_setSequence(TitleAnimation* this, int32_t* sequence) {
}


int32_t* TitleAnimation_getSequence(TitleAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


int32_t TitleAnimation_getSize(TitleAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getSize);
}


int32_t TitleAnimation_getFrame(TitleAnimation* this) {
        return JAVA_CALL(this->animationInterfaceArray[0], getFrame);
}


void TitleAnimation_setFrame(TitleAnimation* this, int32_t frame) {
        for (int32_t index = 0; index < this->sizeP; index++) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrame, frame);
        }
}


void TitleAnimation_setLastFrame(TitleAnimation* this) {
        TitleAnimation_setFrame(this, TitleAnimation_getSize(this) - 1);
}


void TitleAnimation_reset(TitleAnimation* this) {
        TitleAnimation_setLastFrame(this);
        IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) TitleAnimation_getAnimationBehavior(this)));
        IndexedAnimationBehavior_reset(indexedAnimationBehavior);
}


void TitleAnimation_previousFrame(TitleAnimation* this) {
        for (int32_t index = 0; index < this->sizeP; index++) {
            JAVA_CALL(this->animationInterfaceArray[index], previousFrame);
        }
}


void TitleAnimation_paintFrameXY(TitleAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        TitleAnimation_setFrame(this, frame);
        TitleAnimation_paintXY(this, graphics, x, y);
}


void TitleAnimation_paintXY(TitleAnimation* this, Graphics* graphics, int32_t ax, int32_t ay) {
        int32_t x = 0;
        if (this->widthP != Integer_MIN_VALUE) {
            x = ((DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton) - this->widthP) / 2);
        }
        int32_t deltaX = 0;
        int32_t deltaY = 0;
        for (int32_t index = 0; index < this->sizeP; index++) {
            deltaX = this->dxArray[index] + x;
            deltaY = this->dyArray[index] + this->y;
            if (this->basicColorArray[index] != this->CLEAR_COLOR) {
                JAVA_CALL(this->basicSetColorUtil, setBasicColorP, graphics, this->basicColorArray[index]);
            }
            JAVA_CALL(this->animationInterfaceArray[index], paintXY, graphics, deltaX, deltaY);
        }
}

