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
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct OscillateVelocityMovement OscillateVelocityMovement;
struct OscillateVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t oscillateMin;
    int32_t oscillateMax;
    int32_t oscillate;
    bool oscillatePositive;
};


OscillateVelocityMovement* OscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void OscillateVelocityMovement_init(OscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);
void OscillateVelocityMovement_process(OscillateVelocityMovement* this, AllBinaryGameLayer* layer);

static void OscillateVelocityMovement_initFields(OscillateVelocityMovement* this) {
    
    
    this->oscillate = 0;
    this->oscillatePositive = false;
}


void OscillateVelocityMovement_init(OscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        OscillateVelocityMovement_initFields(this);
        this->oscillateMin = oscillateMin;
        this->oscillateMax = oscillateMax;
}

OscillateVelocityMovement* OscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    OscillateVelocityMovement* this = calloc(1, sizeof(OscillateVelocityMovement));
    OscillateVelocityMovement_init(this, speedBasicDecimal, oscillateMin, oscillateMax);
    return this;
}


// throws Exception
void OscillateVelocityMovement_process(OscillateVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        if (this->oscillate < this->oscillateMin) {
            this->oscillatePositive = true;
        } else if (this->oscillate > this->oscillateMax) {
            this->oscillatePositive = false;
        }
        if (this->oscillatePositive) {
            this->oscillate++;
            JAVA_CALL(JAVA_CALL(OscillateVelocityMovement_getVelocityProperties(this), getVelocityXBasicDecimalP), addint, 2000);
        } else {
            this->oscillate--;
            JAVA_CALL(JAVA_CALL(OscillateVelocityMovement_getVelocityProperties(this), getVelocityXBasicDecimalP), subtractint, 2000);
        }
}

