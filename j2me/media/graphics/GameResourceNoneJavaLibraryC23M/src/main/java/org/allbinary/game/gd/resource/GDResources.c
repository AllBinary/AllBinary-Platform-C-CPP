// Generated Code Do Not Modify
#include "org/allbinary/game/gd/resource/GDResources.h"


static GDResources* GDResources_instance;


void GDResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GDResources_instance = GDResources_new();
}

void GDResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GDResources", nullptr);
}

static void GDResources_initFields(GDResources* this) {
    this->resourceStringArray = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){  }) / sizeof(const char*), (const char*[]){  }));
    this->currentLayoutRequiredTotal = 0;
}

void GDResources_init(GDResources* this) {
    GDResources_register();
    GDResources_initFields(this);
}

GDResources* GDResources_new(void) {
    GDResources* this = java_object_alloc(sizeof(GDResources), "GDResources");
    GDResources_init(this);
    return this;
}


GDResources* GDResources_getInstance(void) {
        return (GDResources_staticInit(), GDResources_instance);
}

