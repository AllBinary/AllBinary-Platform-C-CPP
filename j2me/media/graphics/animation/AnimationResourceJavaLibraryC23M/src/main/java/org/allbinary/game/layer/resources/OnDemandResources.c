// Generated Code Do Not Modify
#include "org/allbinary/game/layer/resources/OnDemandResources.h"
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"


OnDemandResources* OnDemandResources_NULL_ON_DEMAND_RESOURCES;





void OnDemandResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OnDemandResources_NULL_ON_DEMAND_RESOURCES = OnDemandResources_new();
}

void OnDemandResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OnDemandResources", nullptr);
    java_register_method("OnDemandResources", "waitFor", (void*) OnDemandResources_waitFor);
    java_register_method("OnDemandResources", "init", (void*) OnDemandResources_initMethod);
    java_register_method("OnDemandResources", "initAt", (void*) OnDemandResources_initAt);
}

static void OnDemandResources_initFields(OnDemandResources* this) {
    this->logUtil = LogUtil_getInstance();
}


void OnDemandResources_init(OnDemandResources* this) {
    OnDemandResources_register();
    OnDemandResources_initFields(this);
}

OnDemandResources* OnDemandResources_new(void) {
    OnDemandResources* this = java_object_alloc(sizeof(OnDemandResources), "OnDemandResources");
    OnDemandResources_init(this);
    return this;
}


// throws Exception
void OnDemandResources_waitFor(OnDemandResources* this) {
}


// throws Exception
void OnDemandResources_initMethod(OnDemandResources* this) {
}


// throws Exception
int32_t OnDemandResources_initAt(OnDemandResources* this, ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, const char* loadingString, int32_t index) {
        return 0;
}

