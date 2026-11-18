// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/UpDownVectorAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/UpDownVectorAI.h"




void UpDownVectorAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpDownVectorAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpDownVectorAIFactory", nullptr);
    java_register_method("UpDownVectorAIFactory", "getInstance", (void*) UpDownVectorAIFactory_getInstance);
}

void UpDownVectorAIFactory_init(UpDownVectorAIFactory* this) {
    UpDownVectorAIFactory_register();
}

UpDownVectorAIFactory* UpDownVectorAIFactory_new(void) {
    UpDownVectorAIFactory* this = java_object_alloc(sizeof(UpDownVectorAIFactory), "UpDownVectorAIFactory");
    UpDownVectorAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* UpDownVectorAIFactory_getInstance(UpDownVectorAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return UpDownVectorAI_new(ownerLayerInterface, gameInput);
}

