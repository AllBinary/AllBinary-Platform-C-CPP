// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialGameInputFactory.h"
#include "org/allbinary/game/layer/special/SpecialGameInput.h"


SpecialGameInput* SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT;

void SpecialGameInputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT = SpecialGameInput_new();
}

void SpecialGameInputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialGameInputFactory", nullptr);
}

void SpecialGameInputFactory_init(SpecialGameInputFactory* this) {
    SpecialGameInputFactory_register();
}

SpecialGameInputFactory* SpecialGameInputFactory_new(void) {
    SpecialGameInputFactory* this = java_object_alloc(sizeof(SpecialGameInputFactory), "SpecialGameInputFactory");
    SpecialGameInputFactory_init(this);
    return this;
}

