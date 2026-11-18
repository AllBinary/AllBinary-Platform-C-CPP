// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/CustomGravityConstantVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"





void CustomGravityConstantVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomGravityConstantVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomGravityConstantVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("CustomGravityConstantVelocityMovement", "process", (void*) CustomGravityConstantVelocityMovement_process);
}

static void CustomGravityConstantVelocityMovement_initFields(CustomGravityConstantVelocityMovement* this) {
    
    this->gravityUtil = GravityUtil_getInstance();
}


void CustomGravityConstantVelocityMovement_init(CustomGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t customGravity) {
    CustomGravityConstantVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        CustomGravityConstantVelocityMovement_initFields(this);
        this->customGravity = customGravity;
}

CustomGravityConstantVelocityMovement* CustomGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t customGravity) {
    CustomGravityConstantVelocityMovement* this = java_object_alloc(sizeof(CustomGravityConstantVelocityMovement), "CustomGravityConstantVelocityMovement");
    CustomGravityConstantVelocityMovement_init(this, speedBasicDecimal, customGravity);
    return this;
}


// throws Exception
void CustomGravityConstantVelocityMovement_process(CustomGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        GravityUtil_process(this->gravityUtil, BasicConstantVelocityMovement_getVelocityProperties(this), this->customGravity);
        VelocityProperties* velocityProperties = ((VelocityProperties*) BasicConstantVelocityMovement_getVelocityProperties(this));
        VelocityProperties_limitMaxYForwardVelocity(velocityProperties);
}

