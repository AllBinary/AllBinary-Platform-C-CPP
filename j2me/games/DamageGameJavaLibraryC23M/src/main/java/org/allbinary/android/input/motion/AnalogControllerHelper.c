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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct AnalogControllerHelper AnalogControllerHelper;
struct AnalogControllerHelper {
    int32_t reduceTimeFactor;
    int32_t SCALE_VALUE;
    TimeDelayHelper* rightTimeElapsedHelper;
    TimeDelayHelper* leftTimeElapsedHelper;
    TimeDelayHelper* downTimeElapsedHelper;
    TimeDelayHelper* upTimeElapsedHelper;
};


AnalogControllerHelper* AnalogControllerHelper_new(int32_t reduceTimeFactor);

void AnalogControllerHelper_init(AnalogControllerHelper* this, int32_t reduceTimeFactor);
void AnalogControllerHelper_right(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);
void AnalogControllerHelper_left(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);
void AnalogControllerHelper_up(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);
void AnalogControllerHelper_down(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

static void AnalogControllerHelper_initFields(AnalogControllerHelper* this) {
    
    this->SCALE_VALUE = AnalogControllerConfigurationFactory_getInstance()->SCALE_VALUE;
    this->rightTimeElapsedHelper = TimeDelayHelper_new(0);
    this->leftTimeElapsedHelper = TimeDelayHelper_new(0);
    this->downTimeElapsedHelper = TimeDelayHelper_new(0);
    this->upTimeElapsedHelper = TimeDelayHelper_new(0);
}


void AnalogControllerHelper_init(AnalogControllerHelper* this, int32_t reduceTimeFactor) {
    AnalogControllerHelper_initFields(this);
        this->reduceTimeFactor = reduceTimeFactor;
}

AnalogControllerHelper* AnalogControllerHelper_new(int32_t reduceTimeFactor) {
    AnalogControllerHelper* this = calloc(1, sizeof(AnalogControllerHelper));
    AnalogControllerHelper_init(this, reduceTimeFactor);
    return this;
}


// throws Exception
void AnalogControllerHelper_right(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->rightTimeElapsedHelper->delay = ((this->SCALE_VALUE - xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->rightTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_right(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_left(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->leftTimeElapsedHelper->delay = ((this->SCALE_VALUE + xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->leftTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_left(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_up(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->upTimeElapsedHelper->delay = ((this->SCALE_VALUE - xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->upTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_up(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_down(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->downTimeElapsedHelper->delay = ((this->SCALE_VALUE + xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->downTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_down(collidableDestroyableDamageableLayer);
        }
}

