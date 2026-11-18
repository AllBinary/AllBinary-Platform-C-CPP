// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/DelayedConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
#if __has_include("org/allbinary/physics/movement/GameTickTimeDelayHelper.h")
#include "org/allbinary/physics/movement/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/physics/velocity/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/math/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/math/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif






void DelayedConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DelayedConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DelayedConstantVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("DelayedConstantVelocityMovement", "init", (void*) DelayedConstantVelocityMovement_initMethod);
    java_register_method("DelayedConstantVelocityMovement", "process", (void*) DelayedConstantVelocityMovement_process);
}

static void DelayedConstantVelocityMovement_initFields(DelayedConstantVelocityMovement* this) {
    this->timeDelayHelper = TimeDelayHelper_new(60);
}


void DelayedConstantVelocityMovement_init(DelayedConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    DelayedConstantVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, basicDecimal, velocityProperties);
        DelayedConstantVelocityMovement_initFields(this);
}

DelayedConstantVelocityMovement* DelayedConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) {
    DelayedConstantVelocityMovement* this = java_object_alloc(sizeof(DelayedConstantVelocityMovement), "DelayedConstantVelocityMovement");
    DelayedConstantVelocityMovement_init(this, basicDecimal, velocityProperties);
    return this;
}


void DelayedConstantVelocityMovement_initMethod(DelayedConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void DelayedConstantVelocityMovement_process(DelayedConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            BasicConstantVelocityMovement_process((&this->base), layer);
        }
}

