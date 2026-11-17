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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/VectorAnimation.h"

typedef struct TimedVectorAnimation TimedVectorAnimation;
struct TimedVectorAnimation {
    VectorAnimation base;
    TimeDelayHelper* timeElapsedHelper;
};


TimedVectorAnimation* TimedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

void TimedVectorAnimation_init(TimedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);
void TimedVectorAnimation_nextFrame(TimedVectorAnimation* this);

static void TimedVectorAnimation_initFields(TimedVectorAnimation* this) {
    this->timeElapsedHelper = TimeDelayHelper_new(200);
}


void TimedVectorAnimation_init(TimedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        VectorAnimation_init(&this->base, currentPoints, basicColor, animationBehavior);
        TimedVectorAnimation_initFields(this);
}

TimedVectorAnimation* TimedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    TimedVectorAnimation* this = calloc(1, sizeof(TimedVectorAnimation));
    TimedVectorAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void TimedVectorAnimation_nextFrame(TimedVectorAnimation* this) {
        if (TimeDelayHelper_isTime(this->timeElapsedHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            VectorAnimation_nextFrame((&this->base));
        }
}

