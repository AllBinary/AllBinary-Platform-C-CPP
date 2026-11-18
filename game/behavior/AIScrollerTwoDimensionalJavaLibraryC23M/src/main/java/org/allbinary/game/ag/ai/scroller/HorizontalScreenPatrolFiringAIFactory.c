// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/HorizontalScreenPatrolFiringAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/HorizontalScreenPatrolAI.h"




void HorizontalScreenPatrolFiringAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HorizontalScreenPatrolFiringAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalScreenPatrolFiringAIFactory", nullptr);
    java_register_method("HorizontalScreenPatrolFiringAIFactory", "getInstance", (void*) HorizontalScreenPatrolFiringAIFactory_getInstance);
}

void HorizontalScreenPatrolFiringAIFactory_init(HorizontalScreenPatrolFiringAIFactory* this) {
    HorizontalScreenPatrolFiringAIFactory_register();
}

HorizontalScreenPatrolFiringAIFactory* HorizontalScreenPatrolFiringAIFactory_new(void) {
    HorizontalScreenPatrolFiringAIFactory* this = java_object_alloc(sizeof(HorizontalScreenPatrolFiringAIFactory), "HorizontalScreenPatrolFiringAIFactory");
    HorizontalScreenPatrolFiringAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* HorizontalScreenPatrolFiringAIFactory_getInstance(HorizontalScreenPatrolFiringAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return HorizontalScreenPatrolAI_new(hashtable, ownerLayerInterface, gameInput);
}

