// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/HorizontalRotationManeuverAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/HorizontaRotationManeuverAI.h"




void HorizontalRotationManeuverAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalRotationManeuverAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalRotationManeuverAIFactory", nullptr);
    java_register_method("HorizontalRotationManeuverAIFactory", "getInstance", (void*) HorizontalRotationManeuverAIFactory_getInstance);
}

void HorizontalRotationManeuverAIFactory_init(HorizontalRotationManeuverAIFactory* this) {
    HorizontalRotationManeuverAIFactory_register();
}

HorizontalRotationManeuverAIFactory* HorizontalRotationManeuverAIFactory_new(void) {
    HorizontalRotationManeuverAIFactory* this = java_object_alloc(sizeof(HorizontalRotationManeuverAIFactory), "HorizontalRotationManeuverAIFactory");
    HorizontalRotationManeuverAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* HorizontalRotationManeuverAIFactory_getInstance(HorizontalRotationManeuverAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return HorizontaRotationManeuverAI_new(ownerLayerInterface, gameInput);
}

