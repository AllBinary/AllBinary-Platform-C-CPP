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
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct NoBasicConstantVelocityMovement NoBasicConstantVelocityMovement;
struct NoBasicConstantVelocityMovement {
    BasicConstantVelocityMovement base;
};


NoBasicConstantVelocityMovement* NoBasicConstantVelocityMovement_new(void);

void NoBasicConstantVelocityMovement_init(NoBasicConstantVelocityMovement* this);
void NoBasicConstantVelocityMovement_process(NoBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);


void NoBasicConstantVelocityMovement_init(NoBasicConstantVelocityMovement* this) {
        BasicConstantVelocityMovement_init(&this->base, BasicDecimal_ZERO_BIGDECIMAL, BasicVelocityProperties_new());
}

NoBasicConstantVelocityMovement* NoBasicConstantVelocityMovement_new(void) {
    NoBasicConstantVelocityMovement* this = calloc(1, sizeof(NoBasicConstantVelocityMovement));
    NoBasicConstantVelocityMovement_init(this);
    return this;
}


// throws Exception
void NoBasicConstantVelocityMovement_process(NoBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
}

