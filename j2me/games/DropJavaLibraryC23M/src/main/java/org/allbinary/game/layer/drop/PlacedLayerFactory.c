// Generated Code Do Not Modify
#include "org/allbinary/game/layer/drop/PlacedLayerFactory.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"


static PlacedLayerFactory* PlacedLayerFactory_instance;







void PlacedLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlacedLayerFactory_instance = PlacedLayerFactory_new();
}

void PlacedLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlacedLayerFactory", nullptr);
    java_register_method("PlacedLayerFactory", "clear", (void*) PlacedLayerFactory_clear);
    java_register_method("PlacedLayerFactory", "getSize", (void*) PlacedLayerFactory_getSize);
    java_register_method("PlacedLayerFactory", "getRandomInstance", (void*) PlacedLayerFactory_getRandomInstance);
    java_register_method("PlacedLayerFactory", "add", (void*) PlacedLayerFactory_add);
}

static void PlacedLayerFactory_initFields(PlacedLayerFactory* this) {
    this->list = BasicArrayListD_new();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void PlacedLayerFactory_init(PlacedLayerFactory* this) {
    PlacedLayerFactory_register();
    PlacedLayerFactory_initFields(this);
}

PlacedLayerFactory* PlacedLayerFactory_new(void) {
    PlacedLayerFactory* this = java_object_alloc(sizeof(PlacedLayerFactory), "PlacedLayerFactory");
    PlacedLayerFactory_init(this);
    return this;
}


void PlacedLayerFactory_clear(PlacedLayerFactory* this) {
        BasicArrayList_clear(this->list);
}


PlacedLayerFactory* PlacedLayerFactory_getInstance(void) {
        return (PlacedLayerFactory_staticInit(), PlacedLayerFactory_instance);
}


int32_t PlacedLayerFactory_getSize(PlacedLayerFactory* this) {
        return BasicArrayList_size(this->list);
}


AllBinaryLayerFactoryInterface* PlacedLayerFactory_getRandomInstance(PlacedLayerFactory* this) {
        return ((AllBinaryLayerFactoryInterface*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->list));
}


void PlacedLayerFactory_add(PlacedLayerFactory* this, AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}

