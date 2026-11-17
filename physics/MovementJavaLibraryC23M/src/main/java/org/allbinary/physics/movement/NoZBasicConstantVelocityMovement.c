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

typedef struct NoZBasicConstantVelocityMovement NoZBasicConstantVelocityMovement;
struct NoZBasicConstantVelocityMovement {
    Movement base;
    VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface_interface;
    BasicVelocityProperties* velocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


NoZBasicConstantVelocityMovement* NoZBasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);
void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void NoZBasicConstantVelocityMovement_moveOutsideRadius(NoZBasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);
void NoZBasicConstantVelocityMovement_process(NoZBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);
const char* NoZBasicConstantVelocityMovement_toString(NoZBasicConstantVelocityMovement* this);
void NoZBasicConstantVelocityMovement_stop(NoZBasicConstantVelocityMovement* this);
BasicVelocityProperties* NoZBasicConstantVelocityMovement_getVelocityProperties(NoZBasicConstantVelocityMovement* this);
void NoZBasicConstantVelocityMovement_setVelocityProperties(NoZBasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties);
void NoZBasicConstantVelocityMovement_setSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);
BasicDecimal* NoZBasicConstantVelocityMovement_getSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this);

static void NoZBasicConstantVelocityMovement_initFields(NoZBasicConstantVelocityMovement* this) {
    
    this->speedBasicDecimal = BasicDecimal_ZERO_BIGDECIMAL;
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    Movement_init(&this->base);
    NoZBasicConstantVelocityMovement_initFields(this);
        NoZBasicConstantVelocityMovement_setSpeedBasicDecimal(this, basicDecimal);
        this->velocityProperties = velocityProperties;
}

NoZBasicConstantVelocityMovement* NoZBasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    NoZBasicConstantVelocityMovement* this = calloc(1, sizeof(NoZBasicConstantVelocityMovement));
    NoZBasicConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->velocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void NoZBasicConstantVelocityMovement_moveOutsideRadius(NoZBasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, 0);
}


// throws Exception
void NoZBasicConstantVelocityMovement_process(NoZBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        AllBinaryLayer_moveDXYZ(layer, JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(this->velocityProperties), getScaled), JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityProperties), getScaled), 0);
}


const char* NoZBasicConstantVelocityMovement_toString(NoZBasicConstantVelocityMovement* this) {
        return BasicVelocityProperties_toString(this->velocityProperties);
}


void NoZBasicConstantVelocityMovement_stop(NoZBasicConstantVelocityMovement* this) {
        BasicVelocityProperties_zero(this->velocityProperties);
}


BasicVelocityProperties* NoZBasicConstantVelocityMovement_getVelocityProperties(NoZBasicConstantVelocityMovement* this) {
        return this->velocityProperties;
}


void NoZBasicConstantVelocityMovement_setVelocityProperties(NoZBasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties) {
        this->velocityProperties = velocityProperties;
}


void NoZBasicConstantVelocityMovement_setSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
        this->speedBasicDecimal = speedBasicDecimal;
}


BasicDecimal* NoZBasicConstantVelocityMovement_getSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this) {
        return this->speedBasicDecimal;
}

