// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/RandomPatrolAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/RandomPatrolAI.h"




void RandomPatrolAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RandomPatrolAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RandomPatrolAIFactory", nullptr);
    java_register_method("RandomPatrolAIFactory", "getInstance", (void*) RandomPatrolAIFactory_getInstance);
}

void RandomPatrolAIFactory_init(RandomPatrolAIFactory* this) {
    RandomPatrolAIFactory_register();
}

RandomPatrolAIFactory* RandomPatrolAIFactory_new(void) {
    RandomPatrolAIFactory* this = java_object_alloc(sizeof(RandomPatrolAIFactory), "RandomPatrolAIFactory");
    RandomPatrolAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* RandomPatrolAIFactory_getInstance(RandomPatrolAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return RandomPatrolAI_new(hashtable, ownerLayerInterface, gameInput);
}

