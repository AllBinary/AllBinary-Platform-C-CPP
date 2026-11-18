// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/ConstantVelocityNotifyViewChangeMovement.h"
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








void ConstantVelocityNotifyViewChangeMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ConstantVelocityNotifyViewChangeMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ConstantVelocityNotifyViewChangeMovement", "Movement");
    java_register_method("ConstantVelocityNotifyViewChangeMovement", "init", (void*) ConstantVelocityNotifyViewChangeMovement_initMethod);
    java_register_method("ConstantVelocityNotifyViewChangeMovement", "moveOutsideRadius", (void*) ConstantVelocityNotifyViewChangeMovement_moveOutsideRadius);
    java_register_method("ConstantVelocityNotifyViewChangeMovement", "process", (void*) ConstantVelocityNotifyViewChangeMovement_process);
    java_register_method("ConstantVelocityNotifyViewChangeMovement", "stop", (void*) ConstantVelocityNotifyViewChangeMovement_stop);
}

static void ConstantVelocityNotifyViewChangeMovement_initFields(ConstantVelocityNotifyViewChangeMovement* this) {
    
    
    this->axisMathVectorUtil = AxisMathVectorUtil_getInstance();
}


void ConstantVelocityNotifyViewChangeMovement_init(ConstantVelocityNotifyViewChangeMovement* this) {
    ConstantVelocityNotifyViewChangeMovement_register();
    Movement_init(&this->base);
    ConstantVelocityNotifyViewChangeMovement_initFields(this);
        this->speedBasicDecimal = (BasicDecimal_staticInit(), BasicDecimal_ZERO_BIGDECIMAL);
        this->basicVelocityProperties = BasicVelocityProperties_new();
}

ConstantVelocityNotifyViewChangeMovement* ConstantVelocityNotifyViewChangeMovement_new(void) {
    ConstantVelocityNotifyViewChangeMovement* this = java_object_alloc(sizeof(ConstantVelocityNotifyViewChangeMovement), "ConstantVelocityNotifyViewChangeMovement");
    ConstantVelocityNotifyViewChangeMovement_init(this);
    return this;
}


void ConstantVelocityNotifyViewChangeMovement_initMethod(ConstantVelocityNotifyViewChangeMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
        this->speedBasicDecimal = speedBasicDecimal;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        BasicVelocityProperties_setVelocityWithBigDecimal(this->basicVelocityProperties, speedBasicDecimal, AngleFactory_getAt(angleFactory, angle), AngleFactory_getAt(angleFactory, otherAngle));
}


void ConstantVelocityNotifyViewChangeMovement_moveOutsideRadius(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) {
        int32_t scaleFactorValue = BasicDecimal_getScaledFactorValue(this->speedBasicDecimal);
        int32_t xVector = ((int32_t) (AxisMathVectorUtil_calculateX(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        int32_t yVector = ((int32_t) (AxisMathVectorUtil_calculateY(this->axisMathVectorUtil, radius, angle) / ((int64_t) scaleFactorValue)));
        int32_t zVector = ((int32_t) (AxisMathVectorUtil_calculateZ(this->axisMathVectorUtil, radius, otherAngle) / ((int64_t) scaleFactorValue)));
        AllBinaryLayer_moveDXYZ(layer, xVector, yVector, zVector);
}


// throws Exception
void ConstantVelocityNotifyViewChangeMovement_process(ConstantVelocityNotifyViewChangeMovement* this, AllBinaryGameLayer* layer) {
        int32_t x = BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(this->basicVelocityProperties));
        int32_t y = BasicDecimal_getScaled(BasicVelocityProperties_getVelocityYBasicDecimalP(this->basicVelocityProperties));
        int32_t z = BasicDecimal_getScaled(BasicVelocityProperties_getVelocityZBasicDecimalP(this->basicVelocityProperties));
        AllBinaryLayer_moveDXYZ(layer, x, y, z);
        if (x != 0 || y != 0 || z != 0) {
            AllBinaryGameLayer_onViewPositionChangeEvent(layer);
        }
}


void ConstantVelocityNotifyViewChangeMovement_stop(ConstantVelocityNotifyViewChangeMovement* this) {
        BasicVelocityProperties_zero(this->basicVelocityProperties);
}

