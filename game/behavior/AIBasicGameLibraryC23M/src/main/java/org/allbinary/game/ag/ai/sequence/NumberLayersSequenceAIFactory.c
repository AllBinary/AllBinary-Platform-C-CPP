// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAI.h"




void NumberLayersSequenceAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberLayersSequenceAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberLayersSequenceAIFactory", nullptr);
    java_register_method("NumberLayersSequenceAIFactory", "getInstance", (void*) NumberLayersSequenceAIFactory_getInstance);
}

void NumberLayersSequenceAIFactory_init(NumberLayersSequenceAIFactory* this) {
    NumberLayersSequenceAIFactory_register();
}

NumberLayersSequenceAIFactory* NumberLayersSequenceAIFactory_new(void) {
    NumberLayersSequenceAIFactory* this = java_object_alloc(sizeof(NumberLayersSequenceAIFactory), "NumberLayersSequenceAIFactory");
    NumberLayersSequenceAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* NumberLayersSequenceAIFactory_getInstance(NumberLayersSequenceAIFactory* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return NumberLayersSequenceAI_new(numberOfEnemiesLeft, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

