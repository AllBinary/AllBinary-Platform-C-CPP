// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/ag/ai/InputProbability.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/tactical/BasicRandomAI.h"




void BasicRandomAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicRandomAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicRandomAIFactory", nullptr);
    java_register_method("BasicRandomAIFactory", "getInstance", (void*) BasicRandomAIFactory_getInstance);
}

void BasicRandomAIFactory_init(BasicRandomAIFactory* this) {
    BasicRandomAIFactory_register();
}

BasicRandomAIFactory* BasicRandomAIFactory_new(void) {
    BasicRandomAIFactory* this = java_object_alloc(sizeof(BasicRandomAIFactory), "BasicRandomAIFactory");
    BasicRandomAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* BasicRandomAIFactory_getInstance(BasicRandomAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        Visitor* visitor = ((Visitor*) Hashtable_get(hashtable, ((void*) (BasicAI_staticInit(), BasicAI_AI_VISITOR))));
        if (visitor == nullptr) {
            java_throw(java_exception_new("Exception", "No Visitor Provided"));
        }
        InputProbability* inputProbability = ((InputProbability*) Hashtable_get(hashtable, ((void*) (InputProbability_staticInit(), InputProbability_INPUT_PROBABILITY))));
        return BasicRandomAI_new(ownerLayerInterface, gameInput, inputProbability, visitor);
}

