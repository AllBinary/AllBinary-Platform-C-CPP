// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/BasicGravityConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"





void BasicGravityConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicGravityConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicGravityConstantVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("BasicGravityConstantVelocityMovement", "process", (void*) BasicGravityConstantVelocityMovement_process);
}

static void BasicGravityConstantVelocityMovement_initFields(BasicGravityConstantVelocityMovement* this) {
    this->gravityUtil = GravityUtil_getInstance();
}


void BasicGravityConstantVelocityMovement_init(BasicGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
    BasicGravityConstantVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        BasicGravityConstantVelocityMovement_initFields(this);
}

BasicGravityConstantVelocityMovement* BasicGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal) {
    BasicGravityConstantVelocityMovement* this = java_object_alloc(sizeof(BasicGravityConstantVelocityMovement), "BasicGravityConstantVelocityMovement");
    BasicGravityConstantVelocityMovement_init(this, speedBasicDecimal);
    return this;
}


// throws Exception
void BasicGravityConstantVelocityMovement_process(BasicGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        GravityUtil_process(this->gravityUtil, BasicConstantVelocityMovement_getVelocityProperties(this), this->gravityUtil->GAME_GRAVITY_VELOCITY);
}

