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

typedef struct CustomGravityConstantVelocityMovement CustomGravityConstantVelocityMovement;
struct CustomGravityConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t customGravity;
    GravityUtil* gravityUtil;
};


CustomGravityConstantVelocityMovement* CustomGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t customGravity);

void CustomGravityConstantVelocityMovement_init(CustomGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t customGravity);
void CustomGravityConstantVelocityMovement_process(CustomGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer);

static void CustomGravityConstantVelocityMovement_initFields(CustomGravityConstantVelocityMovement* this) {
    
    this->gravityUtil = GravityUtil_getInstance();
}


void CustomGravityConstantVelocityMovement_init(CustomGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t customGravity) {
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        CustomGravityConstantVelocityMovement_initFields(this);
        this->customGravity = customGravity;
}

CustomGravityConstantVelocityMovement* CustomGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t customGravity) {
    CustomGravityConstantVelocityMovement* this = calloc(1, sizeof(CustomGravityConstantVelocityMovement));
    CustomGravityConstantVelocityMovement_init(this, speedBasicDecimal, customGravity);
    return this;
}


// throws Exception
void CustomGravityConstantVelocityMovement_process(CustomGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        GravityUtil_process(this->gravityUtil, CustomGravityConstantVelocityMovement_getVelocityProperties(this), this->customGravity);
        VelocityProperties* velocityProperties = ((VelocityProperties*) CustomGravityConstantVelocityMovement_getVelocityProperties(this));
        VelocityProperties_limitMaxYForwardVelocity(velocityProperties);
}

