// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorExplosionType.h"



void VectorExplosionType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorExplosionType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorExplosionType", nullptr);
}

void VectorExplosionType_init(VectorExplosionType* this) {
    VectorExplosionType_register();
}

VectorExplosionType* VectorExplosionType_new(void) {
    VectorExplosionType* this = java_object_alloc(sizeof(VectorExplosionType), "VectorExplosionType");
    VectorExplosionType_init(this);
    return this;
}

