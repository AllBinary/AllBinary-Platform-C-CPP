// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/health/HealthResources.h"


static HealthResources* HealthResources_SINGLETON;



void HealthResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HealthResources_SINGLETON = HealthResources_new();
}

void HealthResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthResources", nullptr);
}

static void HealthResources_initFields(HealthResources* this) {
    this->RESOURCE = "health_drop_20_by_20.png";
}


void HealthResources_init(HealthResources* this) {
    HealthResources_register();
    HealthResources_initFields(this);
}

HealthResources* HealthResources_new(void) {
    HealthResources* this = java_object_alloc(sizeof(HealthResources), "HealthResources");
    HealthResources_init(this);
    return this;
}


HealthResources* HealthResources_getInstance(void) {
        return (HealthResources_staticInit(), HealthResources_SINGLETON);
}

