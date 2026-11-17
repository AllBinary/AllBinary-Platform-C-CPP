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
// package org.allbinary.game.ag.ai.scroller

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct TimedFireAI TimedFireAI;
struct TimedFireAI {
    BasicAI base;
    TimeDelayHelper* maxFireDelayTimeHelper;
    int32_t delay;
};

int32_t TimedFireAI_TIME;

TimedFireAI* TimedFireAI_new(int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TimedFireAI_init(TimedFireAI* this, int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void TimedFireAI_processAI(TimedFireAI* this, AllBinaryLayerManager* allBinaryLayerManager);

// Static fields with runtime initializers: call this once at startup
void TimedFireAI_staticInit(void) {
    TimedFireAI_TIME = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 1);
}

static void TimedFireAI_initFields(TimedFireAI* this) {
    this->maxFireDelayTimeHelper = TimeDelayHelper_new(0);
    
}


void TimedFireAI_init(TimedFireAI* this, int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        TimedFireAI_initFields(this);
        this->delay = delay;
}

TimedFireAI* TimedFireAI_new(int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TimedFireAI* this = calloc(1, sizeof(TimedFireAI));
    TimedFireAI_init(this, delay, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void TimedFireAI_processAI(TimedFireAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        TimeFiredInterface* timeFiredInterface = ((TimeFiredInterface*) TimedFireAI_getOwnerLayerInterface(this));
        if (TimeDelayHelper_isTime(this->maxFireDelayTimeHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime) && TimeFiredInterface_getLastFireTime(timeFiredInterface) + this->maxFireDelayTimeHelper->delay < TimeDelayHelper_getStartTime(this->maxFireDelayTimeHelper)) {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
            this->maxFireDelayTimeHelper->delay = this->delay;
        }
}

