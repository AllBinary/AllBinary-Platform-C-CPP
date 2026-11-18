// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/GenericTrackingLayerCircularStaticPool.h"


static GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_SINGLETON;



void GenericTrackingLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GenericTrackingLayerCircularStaticPool_SINGLETON = GenericTrackingLayerCircularStaticPool_new();
}

void GenericTrackingLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GenericTrackingLayerCircularStaticPool", "AllBinaryLayerCircularPool");
}


void GenericTrackingLayerCircularStaticPool_init(GenericTrackingLayerCircularStaticPool* this) {
    GenericTrackingLayerCircularStaticPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
}

GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_new(void) {
    GenericTrackingLayerCircularStaticPool* this = java_object_alloc(sizeof(GenericTrackingLayerCircularStaticPool), "GenericTrackingLayerCircularStaticPool");
    GenericTrackingLayerCircularStaticPool_init(this);
    return this;
}


GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_getInstance(void) {
        return (GenericTrackingLayerCircularStaticPool_staticInit(), GenericTrackingLayerCircularStaticPool_SINGLETON);
}

