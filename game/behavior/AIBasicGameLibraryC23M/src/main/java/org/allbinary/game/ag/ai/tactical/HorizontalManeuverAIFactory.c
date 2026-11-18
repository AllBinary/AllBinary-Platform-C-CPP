// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/tactical/HorizontalManeuverAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/tactical/HorizontalManeuverAI.h"




void HorizontalManeuverAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalManeuverAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalManeuverAIFactory", nullptr);
    java_register_method("HorizontalManeuverAIFactory", "getInstance", (void*) HorizontalManeuverAIFactory_getInstance);
}

void HorizontalManeuverAIFactory_init(HorizontalManeuverAIFactory* this) {
    HorizontalManeuverAIFactory_register();
}

HorizontalManeuverAIFactory* HorizontalManeuverAIFactory_new(void) {
    HorizontalManeuverAIFactory* this = java_object_alloc(sizeof(HorizontalManeuverAIFactory), "HorizontalManeuverAIFactory");
    HorizontalManeuverAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* HorizontalManeuverAIFactory_getInstance(HorizontalManeuverAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return HorizontalManeuverAI_new(ownerLayerInterface, gameInput);
}

