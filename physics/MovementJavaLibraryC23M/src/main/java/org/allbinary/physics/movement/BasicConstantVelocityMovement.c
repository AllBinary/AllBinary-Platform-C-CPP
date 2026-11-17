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
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/physics/movement/Movement.h"

typedef struct BasicConstantVelocityMovement BasicConstantVelocityMovement;
struct BasicConstantVelocityMovement {
    Movement base;
    VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface_interface;
    BasicVelocityProperties* velocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


BasicConstantVelocityMovement* BasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);
void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void BasicConstantVelocityMovement_moveOutsideRadius(BasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);
void BasicConstantVelocityMovement_process(BasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);
const char* BasicConstantVelocityMovement_toString(BasicConstantVelocityMovement* this);
void BasicConstantVelocityMovement_stop(BasicConstantVelocityMovement* this);
BasicVelocityProperties* BasicConstantVelocityMovement_getVelocityProperties(BasicConstantVelocityMovement* this);
void BasicConstantVelocityMovement_setVelocityProperties(BasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties);
void BasicConstantVelocityMovement_setSpeedBasicDecimal(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);
BasicDecimal* BasicConstantVelocityMovement_getSpeedBasicDecimal(BasicConstantVelocityMovement* this);

static void BasicConstantVelocityMovement_initFields(BasicConstantVelocityMovement* this) {
    
    this->speedBasicDecimal = BasicDecimal_ZERO_BIGDECIMAL;
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    Movement_init(&this->base);
    BasicConstantVelocityMovement_initFields(this);
        BasicConstantVelocityMovement_setSpeedBasicDecimal(this, basicDecimal);
        this->velocityProperties = velocityProperties;
}

BasicConstantVelocityMovement* BasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    BasicConstantVelocityMovement* this = calloc(1, sizeof(BasicConstantVelocityMovement));
    BasicConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->velocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void BasicConstantVelocityMovement_moveOutsideRadius(BasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        int32_t zVector = ((int32_t) (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, radius, otherAngle) / scaleFactorValue));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, zVector);
}


// throws Exception
void BasicConstantVelocityMovement_process(BasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        AllBinaryLayer_moveDXYZ(layer, JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(this->velocityProperties), getScaled), JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityProperties), getScaled), JAVA_CALL(BasicVelocityProperties_getVelocityZBasicDecimalP(this->velocityProperties), getScaled));
}


const char* BasicConstantVelocityMovement_toString(BasicConstantVelocityMovement* this) {
        return BasicVelocityProperties_toString(this->velocityProperties);
}


void BasicConstantVelocityMovement_stop(BasicConstantVelocityMovement* this) {
        BasicVelocityProperties_zero(this->velocityProperties);
}


BasicVelocityProperties* BasicConstantVelocityMovement_getVelocityProperties(BasicConstantVelocityMovement* this) {
        return this->velocityProperties;
}


void BasicConstantVelocityMovement_setVelocityProperties(BasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties) {
        this->velocityProperties = velocityProperties;
}


void BasicConstantVelocityMovement_setSpeedBasicDecimal(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
        this->speedBasicDecimal = speedBasicDecimal;
}


BasicDecimal* BasicConstantVelocityMovement_getSpeedBasicDecimal(BasicConstantVelocityMovement* this) {
        return this->speedBasicDecimal;
}

