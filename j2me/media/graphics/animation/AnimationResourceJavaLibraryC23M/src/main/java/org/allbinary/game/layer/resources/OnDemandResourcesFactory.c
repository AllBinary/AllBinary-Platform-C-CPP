// Generated Code Do Not Modify
#include "org/allbinary/game/layer/resources/OnDemandResourcesFactory.h"
#include "org/allbinary/game/layer/resources/OnDemandResources.h"





void OnDemandResourcesFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OnDemandResourcesFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OnDemandResourcesFactory", nullptr);
    java_register_method("OnDemandResourcesFactory", "size", (void*) OnDemandResourcesFactory_size);
    java_register_method("OnDemandResourcesFactory", "remove", (void*) OnDemandResourcesFactory_remove);
}

void OnDemandResourcesFactory_init(OnDemandResourcesFactory* this) {
    OnDemandResourcesFactory_register();
}

OnDemandResourcesFactory* OnDemandResourcesFactory_new(void) {
    OnDemandResourcesFactory* this = java_object_alloc(sizeof(OnDemandResourcesFactory), "OnDemandResourcesFactory");
    OnDemandResourcesFactory_init(this);
    return this;
}


int32_t OnDemandResourcesFactory_size(OnDemandResourcesFactory* this) {
        return 0;
}


OnDemandResources* OnDemandResourcesFactory_remove(OnDemandResourcesFactory* this, int32_t layerId) {
        return (OnDemandResources_staticInit(), OnDemandResources_NULL_ON_DEMAND_RESOURCES);
}

