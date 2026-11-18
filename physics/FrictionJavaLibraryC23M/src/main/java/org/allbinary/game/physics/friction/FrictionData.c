// Generated Code Do Not Modify
#include "org/allbinary/game/physics/friction/FrictionData.h"


static constexpr int32_t FrictionData_FRICTION_DENOMINATOR = 100;



void FrictionData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FrictionData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FrictionData", nullptr);
}


void FrictionData_init(FrictionData* this) {
    FrictionData_register();
}

FrictionData* FrictionData_new(void) {
    FrictionData* this = java_object_alloc(sizeof(FrictionData), "FrictionData");
    FrictionData_init(this);
    return this;
}


int32_t FrictionData_getFrictionDenominator(void) {
        return FrictionData_FRICTION_DENOMINATOR;
}

