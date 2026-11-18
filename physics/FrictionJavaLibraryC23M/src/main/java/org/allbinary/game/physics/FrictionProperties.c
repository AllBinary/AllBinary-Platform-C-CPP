// Generated Code Do Not Modify
#include "org/allbinary/game/physics/FrictionProperties.h"
#include "org/allbinary/game/physics/friction/FrictionData.h"
#include "org/allbinary/game/physics/velocity/DragVelocityBehavior.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"





void FrictionProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FrictionProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FrictionProperties", nullptr);
    java_register_method("FrictionProperties", "friction", (void*) FrictionProperties_friction);
}


void FrictionProperties_init(FrictionProperties* this) {
    FrictionProperties_register();
}

FrictionProperties* FrictionProperties_new(void) {
    FrictionProperties* this = java_object_alloc(sizeof(FrictionProperties), "FrictionProperties");
    FrictionProperties_init(this);
    return this;
}


void FrictionProperties_friction(FrictionProperties* this, VelocityProperties* velocityProperties, int32_t nominator) {
        DragVelocityBehavior_reduce((DragVelocityBehavior_staticInit(), DragVelocityBehavior_instance), velocityProperties, nominator, FrictionData_getFrictionDenominator());
}

