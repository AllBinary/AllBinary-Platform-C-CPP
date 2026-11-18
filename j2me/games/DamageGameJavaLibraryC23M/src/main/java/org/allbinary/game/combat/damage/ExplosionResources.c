// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/ExplosionResources.h"


static ExplosionResources* ExplosionResources_instance;



void ExplosionResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ExplosionResources_instance = ExplosionResources_new();
}

void ExplosionResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ExplosionResources", nullptr);
}

static void ExplosionResources_initFields(ExplosionResources* this) {
    this->EXPLOSION_90_RESOURCE = "/explosion_sprite_90_by_90.png";
    this->EXPLOSION_60_RESOURCE = "/explosion_sprite_60_by_60.png";
    this->HALF_EXPLOSION_RESOURCE = "/explosion_sprite_30_by_30.png";
    this->THIRD_EXPLOSION_RESOURCE = "/explosion_sprite_15_by_15.png";
}


ExplosionResources* ExplosionResources_getInstance(void) {
        return (ExplosionResources_staticInit(), ExplosionResources_instance);
}


void ExplosionResources_init(ExplosionResources* this) {
    ExplosionResources_register();
    ExplosionResources_initFields(this);
}

ExplosionResources* ExplosionResources_new(void) {
    ExplosionResources* this = java_object_alloc(sizeof(ExplosionResources), "ExplosionResources");
    ExplosionResources_init(this);
    return this;
}

