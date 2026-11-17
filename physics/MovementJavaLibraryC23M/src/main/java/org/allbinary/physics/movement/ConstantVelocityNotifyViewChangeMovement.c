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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/physics/movement/Movement.h"

typedef struct ConstantVelocityNotifyViewChangeMovement ConstantVelocityNotifyViewChangeMovement;
struct ConstantVelocityNotifyViewChangeMovement {
    Movement base;
    BasicVelocityProperties* basicVelocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


ConstantVelocityNotifyViewChangeMovement* ConstantVelocityNotifyViewChangeMovement_new(void);

void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this);
void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
void ConstantVelocityNotifyViewChangeMovement_moveOutsideRadius(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);
void ConstantVelocityNotifyViewChangeMovement_process(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryGameLayer* layer);
void ConstantVelocityNotifyViewChangeMovement_stop(ConstantVelocityNotifyViewChangeMovement* this);

static void ConstantVelocityNotifyViewChangeMovement_initFields(ConstantVelocityNotifyViewChangeMovement* this) {
    
    
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this) {
    Movement_init(&this->base);
    ConstantVelocityNotifyViewChangeMovement_initFields(this);
        this->speedBasicDecimal = BasicDecimal_ZERO_BIGDECIMAL;
        this->basicVelocityProperties = BasicVelocityProperties_new();
}

ConstantVelocityNotifyViewChangeMovement* ConstantVelocityNotifyViewChangeMovement_new(void) {
    ConstantVelocityNotifyViewChangeMovement* this = calloc(1, sizeof(ConstantVelocityNotifyViewChangeMovement));
    ConstantVelocityNotifyViewChangeMovement_init(this);
    return this;
}


void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->basicVelocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void ConstantVelocityNotifyViewChangeMovement_moveOutsideRadius(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / scaleFactorValue));
        int32_t zVector = ((int32_t) (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, radius, otherAngle) / scaleFactorValue));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, zVector);
}


// throws Exception
void ConstantVelocityNotifyViewChangeMovement_process(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryGameLayer* layer) {
        int32_t x = JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(this->basicVelocityProperties), getScaled);
        int32_t y = JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(this->basicVelocityProperties), getScaled);
        int32_t z = JAVA_CALL(BasicVelocityProperties_getVelocityZBasicDecimalP(this->basicVelocityProperties), getScaled);
        AllBinaryLayer_moveDXYZ(layer, x, y, z);
        if (x != 0 || y != 0 || z != 0) {
            AllBinaryLayer_onViewPositionChangeEvent(layer);
        }
}


void ConstantVelocityNotifyViewChangeMovement_stop(ConstantVelocityNotifyViewChangeMovement* this) {
        BasicVelocityProperties_zero(this->basicVelocityProperties);
}

