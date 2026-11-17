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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"

typedef struct DragVelocityBehavior DragVelocityBehavior;
struct DragVelocityBehavior {
    VelocityBehaviorBase base;
};

DragVelocityBehavior* DragVelocityBehavior_instance;

DragVelocityBehavior* DragVelocityBehavior_new(void);
void DragVelocityBehavior_reduce(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
void DragVelocityBehavior_reduceX(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);
void DragVelocityBehavior_reduceY(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

// Static fields with runtime initializers: call this once at startup
void DragVelocityBehavior_staticInit(void) {
    DragVelocityBehavior_instance = DragVelocityBehavior_new();
}

void DragVelocityBehavior_init(DragVelocityBehavior* this) {
    VelocityBehaviorBase_init(&this->base);
}

DragVelocityBehavior* DragVelocityBehavior_new(void) {
    DragVelocityBehavior* this = calloc(1, sizeof(DragVelocityBehavior));
    DragVelocityBehavior_init(this);
    return this;
}


void DragVelocityBehavior_reduce(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        if (JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getUnscaled) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
        if (JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getUnscaled) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}


void DragVelocityBehavior_reduceX(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties);
        if (BasicDecimal_getUnscaled(basicDecimal) != 0LL) {
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}


void DragVelocityBehavior_reduceY(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        if (JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getUnscaled) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}

