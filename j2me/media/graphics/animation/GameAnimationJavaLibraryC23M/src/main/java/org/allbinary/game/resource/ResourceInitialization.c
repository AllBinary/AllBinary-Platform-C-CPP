// Generated Code Do Not Modify
#include "org/allbinary/game/resource/ResourceInitialization.h"



void ResourceInitialization_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ResourceInitialization_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResourceInitialization", "Init");
}

void ResourceInitialization_init(ResourceInitialization* this) {
    ResourceInitialization_register();
    Init_init(&this->base);
}

ResourceInitialization* ResourceInitialization_new(void) {
    ResourceInitialization* this = java_object_alloc(sizeof(ResourceInitialization), "ResourceInitialization");
    ResourceInitialization_init(this);
    return this;
}

