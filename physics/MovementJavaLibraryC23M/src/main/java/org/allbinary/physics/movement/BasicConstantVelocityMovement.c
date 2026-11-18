// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/physics/movement/Movement.h"
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif













void BasicConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicConstantVelocityMovement", "Movement");
    java_register_method("BasicConstantVelocityMovement", "init", (void*) BasicConstantVelocityMovement_initMethod);
    java_register_method("BasicConstantVelocityMovement", "moveOutsideRadius", (void*) BasicConstantVelocityMovement_moveOutsideRadius);
    java_register_method("BasicConstantVelocityMovement", "process", (void*) BasicConstantVelocityMovement_process);
    java_register_method("BasicConstantVelocityMovement", "toString", (void*) BasicConstantVelocityMovement_toString);
    java_register_method("BasicConstantVelocityMovement", "stop", (void*) BasicConstantVelocityMovement_stop);
    java_register_method("BasicConstantVelocityMovement", "getVelocityProperties", (void*) BasicConstantVelocityMovement_getVelocityProperties);
    java_register_method("BasicConstantVelocityMovement", "setVelocityProperties", (void*) BasicConstantVelocityMovement_setVelocityProperties);
    java_register_method("BasicConstantVelocityMovement", "setSpeedBasicDecimal", (void*) BasicConstantVelocityMovement_setSpeedBasicDecimal);
    java_register_method("BasicConstantVelocityMovement", "getSpeedBasicDecimal", (void*) BasicConstantVelocityMovement_getSpeedBasicDecimal);
}

static void BasicConstantVelocityMovement_initFields(BasicConstantVelocityMovement* this) {
    
    this->speedBasicDecimal = (BasicDecimal_staticInit(), BasicDecimal_ZERO_BIGDECIMAL);
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    BasicConstantVelocityMovement_register();
    Movement_init(&this->base);
    BasicConstantVelocityMovement_initFields(this);
        BasicConstantVelocityMovement_setSpeedBasicDecimal(this, basicDecimal);
        this->velocityProperties = velocityProperties;
}

BasicConstantVelocityMovement* BasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    BasicConstantVelocityMovement* this = java_object_alloc(sizeof(BasicConstantVelocityMovement), "BasicConstantVelocityMovement");
    BasicConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void BasicConstantVelocityMovement_initMethod(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->velocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void BasicConstantVelocityMovement_moveOutsideRadius(BasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        int32_t zVector = ((int32_t) (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, radius, otherAngle) / ((int64_t) scaleFactorValue)));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, zVector);
}


// throws Exception
void BasicConstantVelocityMovement_process(BasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        AllBinaryLayer_moveDXYZ(layer, BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(this->velocityProperties)), BasicDecimal_getScaled(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityProperties)), BasicDecimal_getScaled(BasicVelocityProperties_getVelocityZBasicDecimalP(this->velocityProperties)));
}


const char* BasicConstantVelocityMovement_toString(BasicConstantVelocityMovement* this) {
        return java_string_of(this->velocityProperties);
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

