// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LockedResources.h"


static LockedResources* LockedResources_instance;


void LockedResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LockedResources_instance = LockedResources_new();
}

void LockedResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockedResources", nullptr);
}

static void LockedResources_initFields(LockedResources* this) {
    this->LOCKED_DEMO_GAME_FEATURE_RESOURCE = "/locked_demo_game_feature_64_by_64.png";
}

void LockedResources_init(LockedResources* this) {
    LockedResources_register();
    LockedResources_initFields(this);
}

LockedResources* LockedResources_new(void) {
    LockedResources* this = java_object_alloc(sizeof(LockedResources), "LockedResources");
    LockedResources_init(this);
    return this;
}


LockedResources* LockedResources_getInstance(void) {
        return (LockedResources_staticInit(), LockedResources_instance);
}

