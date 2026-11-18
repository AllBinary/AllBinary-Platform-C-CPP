// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/TerrainPatrolAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#include "org/allbinary/game/ag/ai/scroller/TerrainPatrolAI.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif




void TerrainPatrolAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TerrainPatrolAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainPatrolAIFactory", nullptr);
    java_register_method("TerrainPatrolAIFactory", "getInstance", (void*) TerrainPatrolAIFactory_getInstance);
}

void TerrainPatrolAIFactory_init(TerrainPatrolAIFactory* this) {
    TerrainPatrolAIFactory_register();
}

TerrainPatrolAIFactory* TerrainPatrolAIFactory_new(void) {
    TerrainPatrolAIFactory* this = java_object_alloc(sizeof(TerrainPatrolAIFactory), "TerrainPatrolAIFactory");
    TerrainPatrolAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* TerrainPatrolAIFactory_getInstance(TerrainPatrolAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        Hashtable_put(hashtable, (BasePatrolAI_staticInit(), BasePatrolAI_MAX_DISTANCE), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 220));
        return TerrainPatrolAI_new(hashtable, ownerLayerInterface, gameInput);
}

