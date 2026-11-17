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
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct BasicGravityConstantVelocityMovement BasicGravityConstantVelocityMovement;
struct BasicGravityConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    GravityUtil* gravityUtil;
};


BasicGravityConstantVelocityMovement* BasicGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal);

void BasicGravityConstantVelocityMovement_init(BasicGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);
void BasicGravityConstantVelocityMovement_process(BasicGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer);

static void BasicGravityConstantVelocityMovement_initFields(BasicGravityConstantVelocityMovement* this) {
    this->gravityUtil = GravityUtil_getInstance();
}


void BasicGravityConstantVelocityMovement_init(BasicGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        BasicGravityConstantVelocityMovement_initFields(this);
}

BasicGravityConstantVelocityMovement* BasicGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal) {
    BasicGravityConstantVelocityMovement* this = calloc(1, sizeof(BasicGravityConstantVelocityMovement));
    BasicGravityConstantVelocityMovement_init(this, speedBasicDecimal);
    return this;
}


// throws Exception
void BasicGravityConstantVelocityMovement_process(BasicGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        GravityUtil_process(this->gravityUtil, BasicGravityConstantVelocityMovement_getVelocityProperties(this), this->gravityUtil->GAME_GRAVITY_VELOCITY);
}

