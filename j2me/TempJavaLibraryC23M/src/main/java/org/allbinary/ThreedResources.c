// Generated Code Do Not Modify
#include "org/allbinary/ThreedResources.h"


static ThreedResources* ThreedResources_threedResources;



void ThreedResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreedResources_threedResources = ThreedResources_new();
}

void ThreedResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreedResources", nullptr);
    java_register_method("ThreedResources", "add", (void*) ThreedResources_add);
}

void ThreedResources_init(ThreedResources* this) {
    ThreedResources_register();
}

ThreedResources* ThreedResources_new(void) {
    ThreedResources* this = java_object_alloc(sizeof(ThreedResources), "ThreedResources");
    ThreedResources_init(this);
    return this;
}


ThreedResources* ThreedResources_getThreedResources(void) {
        return (ThreedResources_staticInit(), ThreedResources_threedResources);
}


void ThreedResources_add(ThreedResources* this) {
}

