// Generated Code Do Not Modify
#include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/layer/LayerPlacementType.h"
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif


static LayerPlacementTypeFactory* LayerPlacementTypeFactory_instance;


void LayerPlacementTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerPlacementTypeFactory_instance = LayerPlacementTypeFactory_new();
}

void LayerPlacementTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerPlacementTypeFactory", nullptr);
}

static void LayerPlacementTypeFactory_initFields(LayerPlacementTypeFactory* this) {
    this->MAP = LayerPlacementType_new((Integer_staticInit(), Integer_MAX_VALUE));
    this->LEFT = LayerPlacementType_new(Direction_getValue(DirectionFactory_getInstance()->LEFT));
    this->DOWN = LayerPlacementType_new(Direction_getValue(DirectionFactory_getInstance()->DOWN));
    this->UP = LayerPlacementType_new(Direction_getValue(DirectionFactory_getInstance()->UP));
    this->RIGHT = LayerPlacementType_new(Direction_getValue(DirectionFactory_getInstance()->RIGHT));
}

void LayerPlacementTypeFactory_init(LayerPlacementTypeFactory* this) {
    LayerPlacementTypeFactory_register();
    LayerPlacementTypeFactory_initFields(this);
}

LayerPlacementTypeFactory* LayerPlacementTypeFactory_new(void) {
    LayerPlacementTypeFactory* this = java_object_alloc(sizeof(LayerPlacementTypeFactory), "LayerPlacementTypeFactory");
    LayerPlacementTypeFactory_init(this);
    return this;
}


LayerPlacementTypeFactory* LayerPlacementTypeFactory_getInstance(void) {
        return (LayerPlacementTypeFactory_staticInit(), LayerPlacementTypeFactory_instance);
}

