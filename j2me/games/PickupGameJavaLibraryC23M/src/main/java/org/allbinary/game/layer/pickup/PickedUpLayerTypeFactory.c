// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_instance;


void PickedUpLayerTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PickedUpLayerTypeFactory_instance = PickedUpLayerTypeFactory_new();
}

void PickedUpLayerTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickedUpLayerTypeFactory", nullptr);
}

static void PickedUpLayerTypeFactory_initFields(PickedUpLayerTypeFactory* this) {
    this->NONE = PickedUpLayerType_new(StringUtil_getInstance()->NULL_STRING);
    this->BEAM = PickedUpLayerType_new("BEAM");
    this->MINE = PickedUpLayerType_new("MINE");
    this->PROJECTILE = PickedUpLayerType_new("PROJECTILE");
    this->ENHANCEMENT = PickedUpLayerType_new("Enhancement");
    this->MORPH = PickedUpLayerType_new("Morph");
    this->PART = PickedUpLayerType_new("Part");
    this->HEAL = PickedUpLayerType_new("Heal");
    this->LIFE = PickedUpLayerType_new("Life");
    this->POINTS = PickedUpLayerType_new("Points");
}

void PickedUpLayerTypeFactory_init(PickedUpLayerTypeFactory* this) {
    PickedUpLayerTypeFactory_register();
    PickedUpLayerTypeFactory_initFields(this);
}

PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_new(void) {
    PickedUpLayerTypeFactory* this = java_object_alloc(sizeof(PickedUpLayerTypeFactory), "PickedUpLayerTypeFactory");
    PickedUpLayerTypeFactory_init(this);
    return this;
}


PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_getInstance(void) {
        return (PickedUpLayerTypeFactory_staticInit(), PickedUpLayerTypeFactory_instance);
}

