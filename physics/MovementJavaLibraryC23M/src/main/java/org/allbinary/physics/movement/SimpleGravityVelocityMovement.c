// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/SimpleGravityVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"





void SimpleGravityVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimpleGravityVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleGravityVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("SimpleGravityVelocityMovement", "process", (void*) SimpleGravityVelocityMovement_process);
}

static void SimpleGravityVelocityMovement_initFields(SimpleGravityVelocityMovement* this) {
    this->gravityUtil = GravityUtil_getInstance();
}


void SimpleGravityVelocityMovement_init(SimpleGravityVelocityMovement* this, BasicDecimal* speedBasicDecimal) {
    SimpleGravityVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        SimpleGravityVelocityMovement_initFields(this);
}

SimpleGravityVelocityMovement* SimpleGravityVelocityMovement_new(BasicDecimal* speedBasicDecimal) {
    SimpleGravityVelocityMovement* this = java_object_alloc(sizeof(SimpleGravityVelocityMovement), "SimpleGravityVelocityMovement");
    SimpleGravityVelocityMovement_init(this, speedBasicDecimal);
    return this;
}


// throws Exception
void SimpleGravityVelocityMovement_process(SimpleGravityVelocityMovement* this, AllBinaryGameLayer* layer) {
        GravityUtil_process(this->gravityUtil, BasicConstantVelocityMovement_getVelocityProperties(this), this->gravityUtil->GAME_GRAVITY_VELOCITY);
        BasicConstantVelocityMovement_process((&this->base), layer);
}

