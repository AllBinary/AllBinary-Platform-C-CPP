// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif




void PacePatrolAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PacePatrolAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PacePatrolAIFactory", nullptr);
    java_register_method("PacePatrolAIFactory", "getInstance", (void*) PacePatrolAIFactory_getInstance);
}

void PacePatrolAIFactory_init(PacePatrolAIFactory* this) {
    PacePatrolAIFactory_register();
}

PacePatrolAIFactory* PacePatrolAIFactory_new(void) {
    PacePatrolAIFactory* this = java_object_alloc(sizeof(PacePatrolAIFactory), "PacePatrolAIFactory");
    PacePatrolAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* PacePatrolAIFactory_getInstance(PacePatrolAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        Hashtable_put(hashtable, (BasePatrolAI_staticInit(), BasePatrolAI_MAX_DISTANCE), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 220));
        return PacePatrolAI_new(hashtable, ownerLayerInterface, gameInput);
}

