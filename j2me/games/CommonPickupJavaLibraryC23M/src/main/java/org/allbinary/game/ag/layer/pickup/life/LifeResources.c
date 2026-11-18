// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/life/LifeResources.h"


static LifeResources* LifeResources_SINGLETON;



void LifeResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LifeResources_SINGLETON = LifeResources_new();
}

void LifeResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LifeResources", nullptr);
}

static void LifeResources_initFields(LifeResources* this) {
    this->RESOURCE = "life_drop_20_by_20.png";
}


void LifeResources_init(LifeResources* this) {
    LifeResources_register();
    LifeResources_initFields(this);
}

LifeResources* LifeResources_new(void) {
    LifeResources* this = java_object_alloc(sizeof(LifeResources), "LifeResources");
    LifeResources_init(this);
    return this;
}


LifeResources* LifeResources_getInstance(void) {
        return (LifeResources_staticInit(), LifeResources_SINGLETON);
}

