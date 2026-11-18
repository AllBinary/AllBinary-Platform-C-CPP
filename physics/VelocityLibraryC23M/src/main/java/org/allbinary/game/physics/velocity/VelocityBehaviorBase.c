// Generated Code Do Not Modify
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"






void VelocityBehaviorBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VelocityBehaviorBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VelocityBehaviorBase", nullptr);
    java_register_method("VelocityBehaviorBase", "reduce", (void*) VelocityBehaviorBase_reduce);
    java_register_method("VelocityBehaviorBase", "reduceX", (void*) VelocityBehaviorBase_reduceX);
    java_register_method("VelocityBehaviorBase", "reduceY", (void*) VelocityBehaviorBase_reduceY);
}

void VelocityBehaviorBase_init(VelocityBehaviorBase* this) {
    VelocityBehaviorBase_register();
}

VelocityBehaviorBase* VelocityBehaviorBase_new(void) {
    VelocityBehaviorBase* this = java_object_alloc(sizeof(VelocityBehaviorBase), "VelocityBehaviorBase");
    VelocityBehaviorBase_init(this);
    return this;
}


void VelocityBehaviorBase_reduce(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}


void VelocityBehaviorBase_reduceX(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}


void VelocityBehaviorBase_reduceY(VelocityBehaviorBase* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
}

