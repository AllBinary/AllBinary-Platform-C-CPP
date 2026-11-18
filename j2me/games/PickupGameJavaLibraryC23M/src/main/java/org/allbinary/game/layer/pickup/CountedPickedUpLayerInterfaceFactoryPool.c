// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_SINGLETON;





void CountedPickedUpLayerInterfaceFactoryPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CountedPickedUpLayerInterfaceFactoryPool_SINGLETON = CountedPickedUpLayerInterfaceFactoryPool_new();
}

void CountedPickedUpLayerInterfaceFactoryPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CountedPickedUpLayerInterfaceFactoryPool", nullptr);
    java_register_method("CountedPickedUpLayerInterfaceFactoryPool", "getList", (void*) CountedPickedUpLayerInterfaceFactoryPool_getList);
}

static void CountedPickedUpLayerInterfaceFactoryPool_initFields(CountedPickedUpLayerInterfaceFactoryPool* this) {
    
}


void CountedPickedUpLayerInterfaceFactoryPool_init(CountedPickedUpLayerInterfaceFactoryPool* this) {
    CountedPickedUpLayerInterfaceFactoryPool_register();
    CountedPickedUpLayerInterfaceFactoryPool_initFields(this);
        this->list = BasicArrayListD_new();
}

CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_new(void) {
    CountedPickedUpLayerInterfaceFactoryPool* this = java_object_alloc(sizeof(CountedPickedUpLayerInterfaceFactoryPool), "CountedPickedUpLayerInterfaceFactoryPool");
    CountedPickedUpLayerInterfaceFactoryPool_init(this);
    return this;
}


BasicArrayList* CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool* this) {
        return this->list;
}


CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_getInstance(void) {
        return (CountedPickedUpLayerInterfaceFactoryPool_staticInit(), CountedPickedUpLayerInterfaceFactoryPool_SINGLETON);
}


void CountedPickedUpLayerInterfaceFactoryPool_initMethod(void) {
        CountedPickedUpLayerInterfaceFactoryPool_SINGLETON = CountedPickedUpLayerInterfaceFactoryPool_new();
}

