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
// package org.allbinary.animation.caption

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/AnimationEventHandler.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct CaptionIndexedAnimation CaptionIndexedAnimation;
struct CaptionIndexedAnimation {
    IndexedAnimation base;
    Animation* animationInterface;
    IndexedAnimation* movieIndexedAnimationInterface;
    int32_t captionDx;
    int32_t captionDy;
    int32_t dx;
    int32_t dy;
    int32_t time;
    AllBinaryEventObject* END_EVENT;
    TimeDelayHelper* timeDelayHelper;
    Player* player;
};


CaptionIndexedAnimation* CaptionIndexedAnimation_new(Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior);

void CaptionIndexedAnimation_init(CaptionIndexedAnimation* this, Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior);
void CaptionIndexedAnimation_nextFrame(CaptionIndexedAnimation* this);
bool CaptionIndexedAnimation_isLastFrame(CaptionIndexedAnimation* this);
void CaptionIndexedAnimation_previousFrame(CaptionIndexedAnimation* this);
void CaptionIndexedAnimation_setFrame(CaptionIndexedAnimation* this, int32_t index);
int32_t CaptionIndexedAnimation_getFrame(CaptionIndexedAnimation* this);
int32_t CaptionIndexedAnimation_getSize(CaptionIndexedAnimation* this);
void CaptionIndexedAnimation_setSequence(CaptionIndexedAnimation* this, int32_t* sequence);
int32_t* CaptionIndexedAnimation_getSequence(CaptionIndexedAnimation* this);
void CaptionIndexedAnimation_paintXY(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CaptionIndexedAnimation_paintThreedXYZ(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

static void CaptionIndexedAnimation_initFields(CaptionIndexedAnimation* this) {
    
    
    
    
    
    
    
    
    
    
}


void CaptionIndexedAnimation_init(CaptionIndexedAnimation* this, Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        CaptionIndexedAnimation_initFields(this);
        this->animationInterface = animationInterface;
        this->movieIndexedAnimationInterface = movieIndexedAnimationInterface;
        this->captionDx = captionDx;
        this->captionDy = captionDy;
        this->dx = dx;
        this->dy = dy;
        this->time = time;
        this->END_EVENT = AllBinaryEventObject_new(this);
        int32_t timePerFrame = this->time / CaptionIndexedAnimation_getSize(this);
        this->timeDelayHelper = TimeDelayHelper_new(timePerFrame);
        this->player = player;
        Player_start(this->player);
}

CaptionIndexedAnimation* CaptionIndexedAnimation_new(Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior) {
    CaptionIndexedAnimation* this = calloc(1, sizeof(CaptionIndexedAnimation));
    CaptionIndexedAnimation_init(this, animationInterface, movieIndexedAnimationInterface, player, captionDx, captionDy, dx, dy, time, animationBehavior);
    return this;
}


// throws Exception
void CaptionIndexedAnimation_nextFrame(CaptionIndexedAnimation* this) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            IndexedAnimation_nextFrame(this->movieIndexedAnimationInterface);
        }
        if (CaptionIndexedAnimation_isLastFrame(this)) {
            AnimationEventHandler_fireEvent(AnimationEventHandler_getInstance(), this->END_EVENT);
        }
}


bool CaptionIndexedAnimation_isLastFrame(CaptionIndexedAnimation* this) {
        if (IndexedAnimation_getFrame(this->movieIndexedAnimationInterface) == CaptionIndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


void CaptionIndexedAnimation_previousFrame(CaptionIndexedAnimation* this) {
        IndexedAnimation_previousFrame(this->movieIndexedAnimationInterface);
}


void CaptionIndexedAnimation_setFrame(CaptionIndexedAnimation* this, int32_t index) {
        IndexedAnimation_setFrame(this->movieIndexedAnimationInterface, index);
}


int32_t CaptionIndexedAnimation_getFrame(CaptionIndexedAnimation* this) {
        return IndexedAnimation_getFrame(this->movieIndexedAnimationInterface);
}


int32_t CaptionIndexedAnimation_getSize(CaptionIndexedAnimation* this) {
        return IndexedAnimation_getSize(this->movieIndexedAnimationInterface);
}


void CaptionIndexedAnimation_setSequence(CaptionIndexedAnimation* this, int32_t* sequence) {
}


int32_t* CaptionIndexedAnimation_getSequence(CaptionIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void CaptionIndexedAnimation_paintXY(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy);
        IndexedAnimation_paintXY(this->movieIndexedAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy);
}


void CaptionIndexedAnimation_paintThreedXYZ(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy, z);
        IndexedAnimation_paintThreedXYZ(this->movieIndexedAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy, z);
}

