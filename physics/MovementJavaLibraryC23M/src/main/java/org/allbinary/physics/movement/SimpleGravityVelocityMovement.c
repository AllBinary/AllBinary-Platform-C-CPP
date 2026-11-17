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

typedef struct SimpleGravityVelocityMovement SimpleGravityVelocityMovement;
struct SimpleGravityVelocityMovement {
    BasicConstantVelocityMovement base;
    GravityUtil* gravityUtil;
};


SimpleGravityVelocityMovement* SimpleGravityVelocityMovement_new(BasicDecimal* speedBasicDecimal);

void SimpleGravityVelocityMovement_init(SimpleGravityVelocityMovement* this, BasicDecimal* speedBasicDecimal);
void SimpleGravityVelocityMovement_process(SimpleGravityVelocityMovement* this, AllBinaryGameLayer* layer);

static void SimpleGravityVelocityMovement_initFields(SimpleGravityVelocityMovement* this) {
    this->gravityUtil = GravityUtil_getInstance();
}


void SimpleGravityVelocityMovement_init(SimpleGravityVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        SimpleGravityVelocityMovement_initFields(this);
}

SimpleGravityVelocityMovement* SimpleGravityVelocityMovement_new(BasicDecimal* speedBasicDecimal) {
    SimpleGravityVelocityMovement* this = calloc(1, sizeof(SimpleGravityVelocityMovement));
    SimpleGravityVelocityMovement_init(this, speedBasicDecimal);
    return this;
}


// throws Exception
void SimpleGravityVelocityMovement_process(SimpleGravityVelocityMovement* this, AllBinaryGameLayer* layer) {
        GravityUtil_process(this->gravityUtil, SimpleGravityVelocityMovement_getVelocityProperties(this), this->gravityUtil->GAME_GRAVITY_VELOCITY);
        BasicConstantVelocityMovement_process((&this->base), layer);
}

