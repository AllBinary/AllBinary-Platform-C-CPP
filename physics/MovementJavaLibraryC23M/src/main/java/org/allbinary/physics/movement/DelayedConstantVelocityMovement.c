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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct DelayedConstantVelocityMovement DelayedConstantVelocityMovement;
struct DelayedConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    TimeDelayHelper* timeDelayHelper;
};


DelayedConstantVelocityMovement* DelayedConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);
void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void DelayedConstantVelocityMovement_process(DelayedConstantVelocityMovement* this, AllBinaryGameLayer* layer);

static void DelayedConstantVelocityMovement_initFields(DelayedConstantVelocityMovement* this) {
    this->timeDelayHelper = TimeDelayHelper_new(60);
}


void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
        BasicConstantVelocityMovement_init(&this->base, basicDecimal, velocityProperties);
        DelayedConstantVelocityMovement_initFields(this);
}

DelayedConstantVelocityMovement* DelayedConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    DelayedConstantVelocityMovement* this = calloc(1, sizeof(DelayedConstantVelocityMovement));
    DelayedConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void DelayedConstantVelocityMovement_process(DelayedConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            BasicConstantVelocityMovement_process((&this->base), layer);
        }
}

