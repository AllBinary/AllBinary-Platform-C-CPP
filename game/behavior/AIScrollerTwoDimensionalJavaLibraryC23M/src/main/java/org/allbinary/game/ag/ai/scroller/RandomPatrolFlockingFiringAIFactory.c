// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/RandomPatrolFlockingFiringAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/ag/ai/ArrayAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/RandomPatrolAI.h"
#include "org/allbinary/game/ag/ai/scroller/TimedFireAI.h"




void RandomPatrolFlockingFiringAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RandomPatrolFlockingFiringAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RandomPatrolFlockingFiringAIFactory", nullptr);
    java_register_method("RandomPatrolFlockingFiringAIFactory", "getInstance", (void*) RandomPatrolFlockingFiringAIFactory_getInstance);
}

void RandomPatrolFlockingFiringAIFactory_init(RandomPatrolFlockingFiringAIFactory* this) {
    RandomPatrolFlockingFiringAIFactory_register();
}

RandomPatrolFlockingFiringAIFactory* RandomPatrolFlockingFiringAIFactory_new(void) {
    RandomPatrolFlockingFiringAIFactory* this = java_object_alloc(sizeof(RandomPatrolFlockingFiringAIFactory), "RandomPatrolFlockingFiringAIFactory");
    RandomPatrolFlockingFiringAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* RandomPatrolFlockingFiringAIFactory_getInstance(RandomPatrolFlockingFiringAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        ArtificialIntelligenceInterface** artificialIntelligenceInterface = ((ArtificialIntelligenceInterface**) java_array_new(sizeof(ArtificialIntelligenceInterface*), 2));
        artificialIntelligenceInterface[0] = RandomPatrolAI_new(hashtable, ownerLayerInterface, gameInput);
        artificialIntelligenceInterface[1] = TimedFireAI_new(1800, ownerLayerInterface, gameInput);
        return ArrayAI_new(artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

