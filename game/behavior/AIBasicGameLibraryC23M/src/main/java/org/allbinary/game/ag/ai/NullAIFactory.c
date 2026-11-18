// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/NullAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/NullAI.h"


static NullAI* NullAIFactory_NULL_AI;



void NullAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullAIFactory_NULL_AI = NullAI_new();
}

void NullAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullAIFactory", nullptr);
    java_register_method("NullAIFactory", "getInstance", (void*) NullAIFactory_getInstance4);
    java_register_method("NullAIFactory", "getInstance@4", (void*) NullAIFactory_getInstance4);
}

void NullAIFactory_init(NullAIFactory* this) {
    NullAIFactory_register();
}

NullAIFactory* NullAIFactory_new(void) {
    NullAIFactory* this = java_object_alloc(sizeof(NullAIFactory), "NullAIFactory");
    NullAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* NullAIFactory_getInstance4(NullAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return (NullAIFactory_staticInit(), NullAIFactory_NULL_AI);
}


// Java overloaded method: C needs a different name
ArtificialIntelligenceInterface* NullAIFactory_getInstance0(void) {
        return (NullAIFactory_staticInit(), NullAIFactory_NULL_AI);
}

