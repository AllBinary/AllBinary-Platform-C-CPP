// Generated Code Do Not Modify
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/math/Angle.h"




void NamedAngle_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NamedAngle_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NamedAngle", "Angle");
}

static void NamedAngle_initFields(NamedAngle* this) {
    
}


void NamedAngle_init(NamedAngle* this, int16_t angle, const char* name) {
    NamedAngle_register();
        Angle_init(&this->base, angle);
        NamedAngle_initFields(this);
        this->name = name;
}

NamedAngle* NamedAngle_new(int16_t angle, const char* name) {
    NamedAngle* this = java_object_alloc(sizeof(NamedAngle), "NamedAngle");
    NamedAngle_init(this, angle, name);
    return this;
}

