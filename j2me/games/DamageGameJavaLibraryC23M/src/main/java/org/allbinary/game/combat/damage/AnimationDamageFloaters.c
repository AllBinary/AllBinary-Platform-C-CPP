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
// package org.allbinary.game.combat.damage

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"

typedef struct AnimationDamageFloaters AnimationDamageFloaters;
struct AnimationDamageFloaters {
    DamageFloaters base;
    LogUtil* logUtil;
    AllBinaryLayer* layerInterface;
    IndexedAnimation** animationInterfaceArray;
    CircularIndexUtil* circularIndexUtil;
    int32_t dx;
    int32_t dy;
};


AnimationDamageFloaters* AnimationDamageFloaters_new(AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy);

void AnimationDamageFloaters_init(AnimationDamageFloaters* this, AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy);
void AnimationDamageFloaters_add(AnimationDamageFloaters* this, int32_t damage);
void AnimationDamageFloaters_paint(AnimationDamageFloaters* this, Graphics* graphics);

static void AnimationDamageFloaters_initFields(AnimationDamageFloaters* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
}


void AnimationDamageFloaters_init(AnimationDamageFloaters* this, AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy) {
    DamageFloaters_init(&this->base);
    AnimationDamageFloaters_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        for (int32_t index = java_array_length(this->animationInterfaceArray) - 1; index >= 0; index--) {
            JAVA_CALL(this->animationInterfaceArray[index], setFrame, JAVA_CALL(this->animationInterfaceArray[index], getSize) - 1);
        }
        this->layerInterface = layerInterface;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
        this->dx = dx;
        this->dy = dy;
}

AnimationDamageFloaters* AnimationDamageFloaters_new(AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy) {
    AnimationDamageFloaters* this = calloc(1, sizeof(AnimationDamageFloaters));
    AnimationDamageFloaters_init(this, layerInterface, animationInterfaceArray, dx, dy);
    return this;
}


void AnimationDamageFloaters_add(AnimationDamageFloaters* this, int32_t damage) {
        int32_t i = CircularIndexUtil_getIndex(this->circularIndexUtil);
        JAVA_CALL(this->animationInterfaceArray[i], setFrame, 0);
        CircularIndexUtil_next(this->circularIndexUtil);
}


void AnimationDamageFloaters_paint(AnimationDamageFloaters* this, Graphics* graphics) {
        JAVA_TRY {
            ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this->layerInterface);
            int32_t x = ViewPositionBase_getX(viewPosition);
            int32_t y = ViewPositionBase_getY(viewPosition);
            for (int32_t index = 0; index < java_array_length(this->animationInterfaceArray); index++) {
                IndexedAnimation* animationInterface = this->animationInterfaceArray[index];
                if (IndexedAnimation_getFrame(animationInterface) < IndexedAnimation_getAnimationSize(animationInterface) - 1) {
                    int32_t delta = IndexedAnimation_getFrame(animationInterface) * 20;
                    IndexedAnimation_paintXY(animationInterface, graphics, x + this->dx, y - delta + this->dy);
                    IndexedAnimation_nextFrame(animationInterface);
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            CanvasStrings* canvasStrings = CanvasStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, canvasStrings->PAINT, e);
        } JAVA_END_TRY;
}

