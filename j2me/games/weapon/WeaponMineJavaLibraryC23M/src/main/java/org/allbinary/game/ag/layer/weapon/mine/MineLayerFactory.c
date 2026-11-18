// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayerFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionFactoryInterface.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayer.h"





void MineLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MineLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MineLayerFactory", nullptr);
    java_register_method("MineLayerFactory", "getInstance", (void*) MineLayerFactory_getInstance);
}

static void MineLayerFactory_initFields(MineLayerFactory* this) {
    
}


void MineLayerFactory_init(MineLayerFactory* this, ViewPositionFactoryInterface* viewPositionFactoryInterface) {
    MineLayerFactory_register();
    MineLayerFactory_initFields(this);
        this->viewPositionFactoryInterface = viewPositionFactoryInterface;
}

MineLayerFactory* MineLayerFactory_new(ViewPositionFactoryInterface* viewPositionFactoryInterface) {
    MineLayerFactory* this = java_object_alloc(sizeof(MineLayerFactory), "MineLayerFactory");
    MineLayerFactory_init(this, viewPositionFactoryInterface);
    return this;
}


// throws Exception
AllBinaryLayer* MineLayerFactory_getInstance(MineLayerFactory* this) {
        return MineLayer_new(ViewPositionFactoryInterface_getInstance(this->viewPositionFactoryInterface));
}

