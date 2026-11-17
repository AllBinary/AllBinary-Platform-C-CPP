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
// package org.allbinary.game.ag.layer.hud.basic.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"

typedef struct HudTimer HudTimer;
struct HudTimer {
    int64_t startTime;
    int64_t hundredthTime;
    int64_t maxTime;
    int64_t modifier;
    uint16_t* hundrethsString;
    int32_t totalDigits;
    PrimitiveLongUtil* primitiveLongUtil;
    uint16_t* MAX;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


HudTimer* HudTimer_new(int32_t maxTime);

void HudTimer_init(HudTimer* this, int32_t maxTime);
void HudTimer_start(HudTimer* this);
int64_t HudTimer_get(HudTimer* this);
void HudTimer_update(HudTimer* this);
void HudTimer_reduce(HudTimer* this, int32_t value);
void HudTimer_add(HudTimer* this, int32_t value);
uint16_t* HudTimer_getTimeChars(HudTimer* this);
int32_t HudTimer_getCurrentTotalDigits(HudTimer* this);

static void HudTimer_initFields(HudTimer* this) {
    this->startTime = ((int64_t) (-1));
    this->hundredthTime = 0;
    
    this->modifier = 0;
    this->hundrethsString = PrimitiveLongSingleton_getInstance()->ZERO;
    this->totalDigits = 1;
    
    this->MAX = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'L', u'O', u'L' }) / sizeof(uint16_t), (uint16_t[]){ u'L', u'O', u'L' }));
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void HudTimer_init(HudTimer* this, int32_t maxTime) {
    HudTimer_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(maxTime);
        this->maxTime = ((int64_t) maxTime);
}

HudTimer* HudTimer_new(int32_t maxTime) {
    HudTimer* this = calloc(1, sizeof(HudTimer));
    HudTimer_init(this, maxTime);
    return this;
}


void HudTimer_start(HudTimer* this) {
        this->hundredthTime = 0LL;
        this->startTime = this->gameTickTimeDelayHelper->startTime;
}


int64_t HudTimer_get(HudTimer* this) {
        return this->hundredthTime;
}


void HudTimer_update(HudTimer* this) {
        int64_t lastLowerTime = this->hundredthTime;
        int64_t currentTime = ((this->modifier + this->gameTickTimeDelayHelper->startTime) - this->startTime);
        if (currentTime < 0LL) {
            currentTime = 0LL;
        }
        this->hundredthTime = currentTime / 100LL;
        if (this->hundredthTime >= this->maxTime) {
            if (this->startTime > 0LL) {
                this->hundrethsString = this->MAX;
            }
        } else if (lastLowerTime != this->hundredthTime) {
            this->hundrethsString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, ((int32_t) this->hundredthTime));
            this->totalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
        }
}


void HudTimer_reduce(HudTimer* this, int32_t value) {
        this->modifier -= ((int64_t) value);
}


void HudTimer_add(HudTimer* this, int32_t value) {
        this->modifier += ((int64_t) value);
}


uint16_t* HudTimer_getTimeChars(HudTimer* this) {
        return this->hundrethsString;
}


int32_t HudTimer_getCurrentTotalDigits(HudTimer* this) {
        return this->totalDigits;
}

