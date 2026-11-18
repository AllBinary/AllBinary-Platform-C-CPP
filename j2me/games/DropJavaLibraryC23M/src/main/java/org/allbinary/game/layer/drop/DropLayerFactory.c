// Generated Code Do Not Modify
#include "org/allbinary/game/layer/drop/DropLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"


static DropLayerFactory* DropLayerFactory_DROP_LAYER_FACTORY;








void DropLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DropLayerFactory_DROP_LAYER_FACTORY = DropLayerFactory_new();
}

void DropLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DropLayerFactory", nullptr);
    java_register_method("DropLayerFactory", "clear", (void*) DropLayerFactory_clear);
    java_register_method("DropLayerFactory", "getSize", (void*) DropLayerFactory_getSize);
    java_register_method("DropLayerFactory", "getRandomInstance", (void*) DropLayerFactory_getRandomInstance);
    java_register_method("DropLayerFactory", "add", (void*) DropLayerFactory_add);
    java_register_method("DropLayerFactory", "getList", (void*) DropLayerFactory_getList);
}

static void DropLayerFactory_initFields(DropLayerFactory* this) {
    this->list = BasicArrayListD_new();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void DropLayerFactory_init(DropLayerFactory* this) {
    DropLayerFactory_register();
    DropLayerFactory_initFields(this);
}

DropLayerFactory* DropLayerFactory_new(void) {
    DropLayerFactory* this = java_object_alloc(sizeof(DropLayerFactory), "DropLayerFactory");
    DropLayerFactory_init(this);
    return this;
}


void DropLayerFactory_clear(DropLayerFactory* this) {
        BasicArrayList_clear(this->list);
}


DropLayerFactory* DropLayerFactory_getInstance(void) {
        return (DropLayerFactory_staticInit(), DropLayerFactory_DROP_LAYER_FACTORY);
}


int32_t DropLayerFactory_getSize(DropLayerFactory* this) {
        return BasicArrayList_size(this->list);
}


PickedUpLayerInterfaceFactoryInterface* DropLayerFactory_getRandomInstance(DropLayerFactory* this) {
        return ((PickedUpLayerInterfaceFactoryInterface*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->list));
}


void DropLayerFactory_add(DropLayerFactory* this, PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}


BasicArrayList* DropLayerFactory_getList(DropLayerFactory* this) {
        return this->list;
}

