// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/LurchRotationAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/LurchRotationAI.h"




void LurchRotationAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LurchRotationAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LurchRotationAIFactory", nullptr);
    java_register_method("LurchRotationAIFactory", "getInstance", (void*) LurchRotationAIFactory_getInstance);
}

void LurchRotationAIFactory_init(LurchRotationAIFactory* this) {
    LurchRotationAIFactory_register();
}

LurchRotationAIFactory* LurchRotationAIFactory_new(void) {
    LurchRotationAIFactory* this = java_object_alloc(sizeof(LurchRotationAIFactory), "LurchRotationAIFactory");
    LurchRotationAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* LurchRotationAIFactory_getInstance(LurchRotationAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return LurchRotationAI_new(ownerLayerInterface, gameInput);
}

