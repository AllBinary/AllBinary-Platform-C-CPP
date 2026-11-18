// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/NoZBasicConstantVelocityMovement.h"
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













void NoZBasicConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoZBasicConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoZBasicConstantVelocityMovement", "Movement");
    java_register_method("NoZBasicConstantVelocityMovement", "init", (void*) NoZBasicConstantVelocityMovement_initMethod);
    java_register_method("NoZBasicConstantVelocityMovement", "moveOutsideRadius", (void*) NoZBasicConstantVelocityMovement_moveOutsideRadius);
    java_register_method("NoZBasicConstantVelocityMovement", "process", (void*) NoZBasicConstantVelocityMovement_process);
    java_register_method("NoZBasicConstantVelocityMovement", "toString", (void*) NoZBasicConstantVelocityMovement_toString);
    java_register_method("NoZBasicConstantVelocityMovement", "stop", (void*) NoZBasicConstantVelocityMovement_stop);
    java_register_method("NoZBasicConstantVelocityMovement", "getVelocityProperties", (void*) NoZBasicConstantVelocityMovement_getVelocityProperties);
    java_register_method("NoZBasicConstantVelocityMovement", "setVelocityProperties", (void*) NoZBasicConstantVelocityMovement_setVelocityProperties);
    java_register_method("NoZBasicConstantVelocityMovement", "setSpeedBasicDecimal", (void*) NoZBasicConstantVelocityMovement_setSpeedBasicDecimal);
    java_register_method("NoZBasicConstantVelocityMovement", "getSpeedBasicDecimal", (void*) NoZBasicConstantVelocityMovement_getSpeedBasicDecimal);
}

static void NoZBasicConstantVelocityMovement_initFields(NoZBasicConstantVelocityMovement* this) {
    
    this->speedBasicDecimal = (BasicDecimal_staticInit(), BasicDecimal_ZERO_BIGDECIMAL);
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    NoZBasicConstantVelocityMovement_register();
    Movement_init(&this->base);
    NoZBasicConstantVelocityMovement_initFields(this);
        NoZBasicConstantVelocityMovement_setSpeedBasicDecimal(this, basicDecimal);
        this->velocityProperties = velocityProperties;
}

NoZBasicConstantVelocityMovement* NoZBasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    NoZBasicConstantVelocityMovement* this = java_object_alloc(sizeof(NoZBasicConstantVelocityMovement), "NoZBasicConstantVelocityMovement");
    NoZBasicConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void NoZBasicConstantVelocityMovement_initMethod(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->velocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void NoZBasicConstantVelocityMovement_moveOutsideRadius(NoZBasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, 0);
}


// throws Exception
void NoZBasicConstantVelocityMovement_process(NoZBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        AllBinaryLayer_moveDXYZ(layer, BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(this->velocityProperties)), BasicDecimal_getScaled(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityProperties)), 0);
}


const char* NoZBasicConstantVelocityMovement_toString(NoZBasicConstantVelocityMovement* this) {
        return java_string_of(this->velocityProperties);
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

