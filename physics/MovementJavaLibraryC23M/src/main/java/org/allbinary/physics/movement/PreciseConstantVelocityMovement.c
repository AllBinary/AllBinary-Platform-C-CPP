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
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct PreciseConstantVelocityMovement PreciseConstantVelocityMovement;
struct PreciseConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    int32_t accumulatedX;
    int32_t accumulatedY;
    int32_t accumulatedZ;
    int32_t factorValue;
};


PreciseConstantVelocityMovement* PreciseConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);
void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void PreciseConstantVelocityMovement_process(PreciseConstantVelocityMovement* this, AllBinaryGameLayer* layer);

static void PreciseConstantVelocityMovement_initFields(PreciseConstantVelocityMovement* this) {
    this->accumulatedX = 0;
    this->accumulatedY = 0;
    this->accumulatedZ = 0;
    this->factorValue = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_VALUE;
}


void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
        BasicConstantVelocityMovement_init(&this->base, basicDecimal, velocityProperties);
        PreciseConstantVelocityMovement_initFields(this);
}

PreciseConstantVelocityMovement* PreciseConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    PreciseConstantVelocityMovement* this = calloc(1, sizeof(PreciseConstantVelocityMovement));
    PreciseConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void PreciseConstantVelocityMovement_process(PreciseConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        MathUtil* mathUtil = MathUtil_getInstance();
        BasicVelocityProperties* velocityProperties = PreciseConstantVelocityMovement_getVelocityProperties(this);
        this->accumulatedX = ((int32_t) (this->accumulatedX + JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getUnscaled)));
        this->accumulatedY = ((int32_t) (this->accumulatedY + JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getUnscaled)));
        this->accumulatedZ = ((int32_t) (this->accumulatedZ + JAVA_CALL(BasicVelocityProperties_getVelocityZBasicDecimalP(velocityProperties), getUnscaled)));
        AllBinaryGameLayer_moveDXYZ(layer, this->accumulatedX / this->factorValue, this->accumulatedY / this->factorValue, this->accumulatedZ / this->factorValue);
        if (MathUtil_abs(mathUtil, this->accumulatedX) > this->factorValue) {
            this->accumulatedX = 0;
        }
        if (MathUtil_abs(mathUtil, this->accumulatedY) > this->factorValue) {
            this->accumulatedY = 0;
        }
        if (MathUtil_abs(mathUtil, this->accumulatedZ) > this->factorValue) {
            this->accumulatedZ = 0;
        }
}

