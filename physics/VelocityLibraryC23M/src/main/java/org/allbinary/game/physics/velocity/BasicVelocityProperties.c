// Generated Code Do Not Modify
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
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



















void BasicVelocityProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicVelocityProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicVelocityProperties", nullptr);
    java_register_method("BasicVelocityProperties", "zero", (void*) BasicVelocityProperties_zero);
    java_register_method("BasicVelocityProperties", "getVelocityXBasicDecimalP", (void*) BasicVelocityProperties_getVelocityXBasicDecimalP);
    java_register_method("BasicVelocityProperties", "getVelocityYBasicDecimalP", (void*) BasicVelocityProperties_getVelocityYBasicDecimalP);
    java_register_method("BasicVelocityProperties", "getVelocityZBasicDecimalP", (void*) BasicVelocityProperties_getVelocityZBasicDecimalP);
    java_register_method("BasicVelocityProperties", "setVelocityWithBigDecimalAndDirection", (void*) BasicVelocityProperties_setVelocityWithBigDecimalAndDirection);
    java_register_method("BasicVelocityProperties", "setVelocityWithDirection", (void*) BasicVelocityProperties_setVelocityWithDirection);
    java_register_method("BasicVelocityProperties", "addVelocityWithBigDecimalAndDirection", (void*) BasicVelocityProperties_addVelocityWithBigDecimalAndDirection);
    java_register_method("BasicVelocityProperties", "addVelocityWithDirection", (void*) BasicVelocityProperties_addVelocityWithDirection);
    java_register_method("BasicVelocityProperties", "setVelocityWithBigDecimal", (void*) BasicVelocityProperties_setVelocityWithBigDecimal);
    java_register_method("BasicVelocityProperties", "addVelocityWithBigDecimal", (void*) BasicVelocityProperties_addVelocityWithBigDecimal);
    java_register_method("BasicVelocityProperties", "setVelocity", (void*) BasicVelocityProperties_setVelocity);
    java_register_method("BasicVelocityProperties", "addVelocity", (void*) BasicVelocityProperties_addVelocity);
    java_register_method("BasicVelocityProperties", "setVelocityi", (void*) BasicVelocityProperties_setVelocityi);
    java_register_method("BasicVelocityProperties", "addVelocityi", (void*) BasicVelocityProperties_addVelocityi);
    java_register_method("BasicVelocityProperties", "toString", (void*) BasicVelocityProperties_toString);
}

static void BasicVelocityProperties_initFields(BasicVelocityProperties* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
    this->directionUtil = DirectionUtil_getInstance();
}


void BasicVelocityProperties_init(BasicVelocityProperties* this) {
    BasicVelocityProperties_register();
    BasicVelocityProperties_initFields(this);
        this->velocityXBasicDecimal = BasicDecimal_new(0);
        this->velocityYBasicDecimal = BasicDecimal_new(0);
        this->velocityZBasicDecimal = BasicDecimal_new(0);
}

BasicVelocityProperties* BasicVelocityProperties_new(void) {
    BasicVelocityProperties* this = java_object_alloc(sizeof(BasicVelocityProperties), "BasicVelocityProperties");
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
        int64_t xVector = (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, magnitude, angle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityXBasicDecimal)));
        int64_t yVector = (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, magnitude, angle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityYBasicDecimal)));
        int64_t zVector = (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, magnitude, otherAngle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityZBasicDecimal)));
        BasicDecimal_setlong(this->velocityXBasicDecimal, xVector);
        BasicDecimal_setlong(this->velocityYBasicDecimal, yVector);
        BasicDecimal_setlong(this->velocityZBasicDecimal, zVector);
}


void BasicVelocityProperties_addVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        int64_t xVector = (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, magnitude, angle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityXBasicDecimal)));
        int64_t yVector = (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, magnitude, angle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityYBasicDecimal)));
        int64_t zVector = (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, magnitude, otherAngle) / ((int64_t) BasicDecimal_getScaledFactorValue(this->velocityZBasicDecimal)));
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
        return java_string_of(stringBuffer);
}

