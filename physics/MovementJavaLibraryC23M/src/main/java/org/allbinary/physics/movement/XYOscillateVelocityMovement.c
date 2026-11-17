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

typedef struct XYOscillateVelocityMovement XYOscillateVelocityMovement;
struct XYOscillateVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t oscillateMin;
    int32_t oscillateMax;
    int32_t oscillate;
    bool oscillatePositive;
};


XYOscillateVelocityMovement* XYOscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);

void XYOscillateVelocityMovement_init(XYOscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax);
void XYOscillateVelocityMovement_process(XYOscillateVelocityMovement* this, AllBinaryGameLayer* layer);

static void XYOscillateVelocityMovement_initFields(XYOscillateVelocityMovement* this) {
    
    
    this->oscillate = 0;
    this->oscillatePositive = false;
}


void XYOscillateVelocityMovement_init(XYOscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        XYOscillateVelocityMovement_initFields(this);
        this->oscillateMin = oscillateMin;
        this->oscillateMax = oscillateMax;
}

XYOscillateVelocityMovement* XYOscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    XYOscillateVelocityMovement* this = calloc(1, sizeof(XYOscillateVelocityMovement));
    XYOscillateVelocityMovement_init(this, speedBasicDecimal, oscillateMin, oscillateMax);
    return this;
}


// throws Exception
void XYOscillateVelocityMovement_process(XYOscillateVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        if (this->oscillate < this->oscillateMin) {
            this->oscillatePositive = true;
            JAVA_CALL(JAVA_CALL(XYOscillateVelocityMovement_getVelocityProperties(this), getVelocityYBasicDecimalP), addint, 3000);
        } else if (this->oscillate > this->oscillateMax) {
            this->oscillatePositive = false;
            JAVA_CALL(JAVA_CALL(XYOscillateVelocityMovement_getVelocityProperties(this), getVelocityYBasicDecimalP), subtractint, 3000);
        }
        if (this->oscillatePositive) {
            this->oscillate++;
            JAVA_CALL(JAVA_CALL(XYOscillateVelocityMovement_getVelocityProperties(this), getVelocityXBasicDecimalP), addint, 5000);
        } else {
            this->oscillate--;
            JAVA_CALL(JAVA_CALL(XYOscillateVelocityMovement_getVelocityProperties(this), getVelocityXBasicDecimalP), subtractint, 5000);
        }
}

