// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/PreciseConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
#if __has_include("org/allbinary/logic/math/ScaleFactorFactory.h")
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif






void PreciseConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PreciseConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PreciseConstantVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("PreciseConstantVelocityMovement", "init", (void*) PreciseConstantVelocityMovement_initMethod);
    java_register_method("PreciseConstantVelocityMovement", "process", (void*) PreciseConstantVelocityMovement_process);
}

static void PreciseConstantVelocityMovement_initFields(PreciseConstantVelocityMovement* this) {
    this->accumulatedX = 0;
    this->accumulatedY = 0;
    this->accumulatedZ = 0;
    this->factorValue = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_VALUE;
}


void PreciseConstantVelocityMovement_init(PreciseConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    PreciseConstantVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, basicDecimal, velocityProperties);
        PreciseConstantVelocityMovement_initFields(this);
}

PreciseConstantVelocityMovement* PreciseConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    PreciseConstantVelocityMovement* this = java_object_alloc(sizeof(PreciseConstantVelocityMovement), "PreciseConstantVelocityMovement");
    PreciseConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void PreciseConstantVelocityMovement_initMethod(PreciseConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void PreciseConstantVelocityMovement_process(PreciseConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        MathUtil* mathUtil = MathUtil_getInstance();
        BasicVelocityProperties* velocityProperties = BasicConstantVelocityMovement_getVelocityProperties(this);
        this->accumulatedX = ((int32_t) (((int64_t) this->accumulatedX) + BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties))));
        this->accumulatedY = ((int32_t) (((int64_t) this->accumulatedY) + BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties))));
        this->accumulatedZ = ((int32_t) (((int64_t) this->accumulatedZ) + BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityZBasicDecimalP(velocityProperties))));
        AllBinaryLayer_moveDXYZ(layer, this->accumulatedX / this->factorValue, this->accumulatedY / this->factorValue, this->accumulatedZ / this->factorValue);
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

