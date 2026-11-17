// Generated Code Do Not Modify
#include "org/allbinary/math/Angle.h"





void Angle_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Angle_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Angle", nullptr);
    java_register_method("Angle", "getValue", (void*) Angle_getValue);
}

static void Angle_initFields(Angle* this) {
    
}


void Angle_init(Angle* this, int16_t angle) {
    Angle_register();
    Angle_initFields(this);
        this->value = angle;
}

Angle* Angle_new(int16_t angle) {
    Angle* this = java_object_alloc(sizeof(Angle), "Angle");
    Angle_init(this, angle);
    return this;
}


int16_t Angle_getValue(Angle* this) {
        return this->value;
}

