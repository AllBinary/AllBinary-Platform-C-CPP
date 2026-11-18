// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/NoBasicConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"





void NoBasicConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoBasicConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoBasicConstantVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("NoBasicConstantVelocityMovement", "process", (void*) NoBasicConstantVelocityMovement_process);
}


void NoBasicConstantVelocityMovement_init(NoBasicConstantVelocityMovement* this) {
    NoBasicConstantVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, (BasicDecimal_staticInit(), BasicDecimal_ZERO_BIGDECIMAL), BasicVelocityProperties_new());
}

NoBasicConstantVelocityMovement* NoBasicConstantVelocityMovement_new(void) {
    NoBasicConstantVelocityMovement* this = java_object_alloc(sizeof(NoBasicConstantVelocityMovement), "NoBasicConstantVelocityMovement");
    NoBasicConstantVelocityMovement_init(this);
    return this;
}


// throws Exception
void NoBasicConstantVelocityMovement_process(NoBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
}

