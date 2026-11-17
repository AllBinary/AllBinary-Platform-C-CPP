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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"

typedef struct CaptionAnimationHelper CaptionAnimationHelper;
struct CaptionAnimationHelper {
    CaptionAnimationHelperBase base;
    TimeDelayHelper* timeHelper;
    TextAnimation* textAnimation;
    Animation* captionAnimation;
    Animation* animation;
};


CaptionAnimationHelper* CaptionAnimationHelper_new(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

void CaptionAnimationHelper_init(CaptionAnimationHelper* this, Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);
bool CaptionAnimationHelper_isShowing(CaptionAnimationHelper* this);
void CaptionAnimationHelper_tick(CaptionAnimationHelper* this);
void CaptionAnimationHelper_update(CaptionAnimationHelper* this, const char* message, BasicColor* basicColor);
void CaptionAnimationHelper_paintXY(CaptionAnimationHelper* this, Graphics* graphics, int32_t x, int32_t y);

static void CaptionAnimationHelper_initFields(CaptionAnimationHelper* this) {
    this->timeHelper = TimeDelayHelper_new(620);
    this->textAnimation = TextAnimation_new(StringUtil_getInstance()->EMPTY_STRING, AnimationBehavior_getInstance());
    
    this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


void CaptionAnimationHelper_init(CaptionAnimationHelper* this, Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimationHelperBase_init(&this->base);
    CaptionAnimationHelper_initFields(this);
        this->captionAnimation = CaptionAnimation_new(captionAnimation, this->textAnimation, captionDx, captionDy, dx, dy);
}

CaptionAnimationHelper* CaptionAnimationHelper_new(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimationHelper* this = calloc(1, sizeof(CaptionAnimationHelper));
    CaptionAnimationHelper_init(this, captionAnimation, captionDx, captionDy, dx, dy);
    return this;
}


bool CaptionAnimationHelper_isShowing(CaptionAnimationHelper* this) {
        if (this->animation == this->captionAnimation) {
            return true;
        } else {
            return false;
        }
}


void CaptionAnimationHelper_tick(CaptionAnimationHelper* this) {
        if (TimeDelayHelper_isTime(this->timeHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            this->animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        }
}


void CaptionAnimationHelper_update(CaptionAnimationHelper* this, const char* message, BasicColor* basicColor) {
        TextAnimation_setBasicColorP(this->textAnimation, basicColor);
        TextAnimation_setText(this->textAnimation, message);
        this->animation = this->captionAnimation;
        TimeDelayHelper_setStartTimeTNT(this->timeHelper);
}


void CaptionAnimationHelper_paintXY(CaptionAnimationHelper* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animation, graphics, x, y);
}

