// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/DamageFloaters.h"


static DamageFloaters* DamageFloaters_SINGLETON;



void DamageFloaters_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DamageFloaters_SINGLETON = DamageFloaters_new();
}

void DamageFloaters_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DamageFloaters", "Paintable");
    java_register_method("DamageFloaters", "add", (void*) DamageFloaters_add);
}

void DamageFloaters_init(DamageFloaters* this) {
    DamageFloaters_register();
    Paintable_init(&this->base);
}

DamageFloaters* DamageFloaters_new(void) {
    DamageFloaters* this = java_object_alloc(sizeof(DamageFloaters), "DamageFloaters");
    DamageFloaters_init(this);
    return this;
}


DamageFloaters* DamageFloaters_getInstance(void) {
        return (DamageFloaters_staticInit(), DamageFloaters_SINGLETON);
}


void DamageFloaters_add(DamageFloaters* this, int32_t damage) {
}

