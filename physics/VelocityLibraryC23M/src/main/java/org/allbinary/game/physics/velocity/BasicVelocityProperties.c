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
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

typedef struct BasicVelocityProperties BasicVelocityProperties;
struct BasicVelocityProperties {
    BasicVelocityInterface BasicVelocityInterface_interface;
    LogUtil* logUtil;
    BasicDecimal* velocityXBasicDecimal;
    BasicDecimal* velocityYBasicDecimal;
    BasicDecimal* velocityZBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
    DirectionUtil* directionUtil;
};


BasicVelocityProperties* BasicVelocityProperties_new(void);

void BasicVelocityProperties_init(BasicVelocityProperties* this);
void BasicVelocityProperties_zero(BasicVelocityProperties* this);
BasicDecimal* BasicVelocityProperties_getVelocityXBasicDecimalP(BasicVelocityProperties* this);
BasicDecimal* BasicVelocityProperties_getVelocityYBasicDecimalP(BasicVelocityProperties* this);
BasicDecimal* BasicVelocityProperties_getVelocityZBasicDecimalP(BasicVelocityProperties* this);
void BasicVelocityProperties_setVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
void BasicVelocityProperties_setVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
void BasicVelocityProperties_addVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
void BasicVelocityProperties_addVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
void BasicVelocityProperties_setVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
void BasicVelocityProperties_addVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
void BasicVelocityProperties_setVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
void BasicVelocityProperties_addVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
void BasicVelocityProperties_setVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);
void BasicVelocityProperties_addVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);
const char* BasicVelocityProperties_toString(BasicVelocityProperties* this);

static void BasicVelocityProperties_initFields(BasicVelocityProperties* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
    this->directionUtil = DirectionUtil_getInstance();
}


void BasicVelocityProperties_init(BasicVelocityProperties* this) {
    BasicVelocityProperties_initFields(this);
        this->velocityXBasicDecimal = BasicDecimal_new(0);
        this->velocityYBasicDecimal = BasicDecimal_new(0);
        this->velocityZBasicDecimal = BasicDecimal_new(0);
}

BasicVelocityProperties* BasicVelocityProperties_new(void) {
    BasicVelocityProperties* this = calloc(1, sizeof(BasicVelocityProperties));
    BasicVelocityProperties_init(this);
    return this;
}


void BasicVelocityProperties_zero(BasicVelocityProperties* this) {
        BasicDecimal_setint(this->velocityXBasicDecimal, 0);
        BasicDecimal_setint(this->velocityYBasicDecimal, 0);
        BasicDecimal_setint(this->velocityZBasicDecimal, 0);
}


BasicDecimal* BasicVelocityProperties_getVelocityXBasicDecimalP(BasicVelocityProperties* this) {
        return this->velocityXBasicDecimal;
}


BasicDecimal* BasicVelocityProperties_getVelocityYBasicDecimalP(BasicVelocityProperties* this) {
        return this->velocityYBasicDecimal;
}


BasicDecimal* BasicVelocityProperties_getVelocityZBasicDecimalP(BasicVelocityProperties* this) {
        return this->velocityZBasicDecimal;
}


void BasicVelocityProperties_setVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) {
        Angle* angle = DirectionUtil_getAngle(this->directionUtil, direction);
        Angle* otherAngle = DirectionUtil_getAngle(this->directionUtil, otherDirection);
        BasicVelocityProperties_setVelocityWithBigDecimal(this, magnitudeBasicDecimal, angle, otherAngle);
}


void BasicVelocityProperties_setVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection) {
        Angle* angle = DirectionUtil_getAngle(this->directionUtil, direction);
        Angle* otherAngle = DirectionUtil_getAngle(this->directionUtil, otherDirection);
        BasicVelocityProperties_setVelocity(this, magnitude, angle, otherAngle);
}


void BasicVelocityProperties_addVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) {
        Angle* angle = DirectionUtil_getAngle(this->directionUtil, direction);
        Angle* otherAngle = DirectionUtil_getAngle(this->directionUtil, otherDirection);
        BasicVelocityProperties_addVelocityWithBigDecimal(this, magnitudeBasicDecimal, angle, otherAngle);
}


void BasicVelocityProperties_addVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection) {
        Angle* angle = DirectionUtil_getAngle(this->directionUtil, direction);
        Angle* otherAngle = DirectionUtil_getAngle(this->directionUtil, otherDirection);
        BasicVelocityProperties_addVelocity(this, magnitude, angle, otherAngle);
}


void BasicVelocityProperties_setVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) {
        int64_t magnitude = BasicDecimal_getUnscaled(magnitudeBasicDecimal);
        BasicVelocityProperties_setVelocity(this, magnitude, angle, otherAngle);
}


void BasicVelocityProperties_addVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) {
        int64_t magnitude = BasicDecimal_getUnscaled(magnitudeBasicDecimal);
        BasicVelocityProperties_addVelocity(this, magnitude, angle, otherAngle);
}


void BasicVelocityProperties_setVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle) {
        BasicVelocityProperties_setVelocityi(this, magnitude, ((int32_t) Angle_getValue(angle)), ((int32_t) Angle_getValue(otherAngle)));
}


void BasicVelocityProperties_addVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle) {
        BasicVelocityProperties_addVelocityi(this, magnitude, ((int32_t) Angle_getValue(angle)), ((int32_t) Angle_getValue(otherAngle)));
}


void BasicVelocityProperties_setVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        int64_t xVector = (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, magnitude, angle) / BasicDecimal_getScaledFactorValue(this->velocityXBasicDecimal));
        int64_t yVector = (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, magnitude, angle) / BasicDecimal_getScaledFactorValue(this->velocityYBasicDecimal));
        int64_t zVector = (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, magnitude, otherAngle) / BasicDecimal_getScaledFactorValue(this->velocityZBasicDecimal));
        BasicDecimal_setlong(this->velocityXBasicDecimal, xVector);
        BasicDecimal_setlong(this->velocityYBasicDecimal, yVector);
        BasicDecimal_setlong(this->velocityZBasicDecimal, zVector);
}


void BasicVelocityProperties_addVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        int64_t xVector = (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, magnitude, angle) / BasicDecimal_getScaledFactorValue(this->velocityXBasicDecimal));
        int64_t yVector = (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, magnitude, angle) / BasicDecimal_getScaledFactorValue(this->velocityYBasicDecimal));
        int64_t zVector = (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, magnitude, otherAngle) / BasicDecimal_getScaledFactorValue(this->velocityZBasicDecimal));
        BasicDecimal_addlong(this->velocityXBasicDecimal, xVector);
        BasicDecimal_addlong(this->velocityYBasicDecimal, yVector);
        BasicDecimal_addlong(this->velocityZBasicDecimal, zVector);
}


const char* BasicVelocityProperties_toString(BasicVelocityProperties* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, "Velocity ");
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->velocityXBasicDecimal));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->velocityYBasicDecimal));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->velocityZBasicDecimal));
        return StringMaker_toString(stringBuffer);
}

