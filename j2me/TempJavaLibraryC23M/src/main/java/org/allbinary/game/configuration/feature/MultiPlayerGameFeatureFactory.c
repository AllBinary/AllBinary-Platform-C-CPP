// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h"


static MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_instance;




void MultiPlayerGameFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MultiPlayerGameFeatureFactory_instance = MultiPlayerGameFeatureFactory_new();
}

void MultiPlayerGameFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultiPlayerGameFeatureFactory", nullptr);
    java_register_method("MultiPlayerGameFeatureFactory", "addCommands", (void*) MultiPlayerGameFeatureFactory_addCommands);
}


MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_getInstance(void) {
        return (MultiPlayerGameFeatureFactory_staticInit(), MultiPlayerGameFeatureFactory_instance);
}


void MultiPlayerGameFeatureFactory_init(MultiPlayerGameFeatureFactory* this) {
    MultiPlayerGameFeatureFactory_register();
}

MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory_new(void) {
    MultiPlayerGameFeatureFactory* this = java_object_alloc(sizeof(MultiPlayerGameFeatureFactory), "MultiPlayerGameFeatureFactory");
    MultiPlayerGameFeatureFactory_init(this);
    return this;
}


void MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory* this, void* anyType) {
}

