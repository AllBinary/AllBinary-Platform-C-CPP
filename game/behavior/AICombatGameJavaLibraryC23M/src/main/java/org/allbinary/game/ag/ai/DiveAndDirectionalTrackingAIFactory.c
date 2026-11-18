// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/ThrustAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/BasicProbabilityAIDataFactory.h"
#include "org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"




void DiveAndDirectionalTrackingAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DiveAndDirectionalTrackingAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiveAndDirectionalTrackingAIFactory", nullptr);
    java_register_method("DiveAndDirectionalTrackingAIFactory", "getInstance", (void*) DiveAndDirectionalTrackingAIFactory_getInstance);
}

void DiveAndDirectionalTrackingAIFactory_init(DiveAndDirectionalTrackingAIFactory* this) {
    DiveAndDirectionalTrackingAIFactory_register();
}

DiveAndDirectionalTrackingAIFactory* DiveAndDirectionalTrackingAIFactory_new(void) {
    DiveAndDirectionalTrackingAIFactory* this = java_object_alloc(sizeof(DiveAndDirectionalTrackingAIFactory), "DiveAndDirectionalTrackingAIFactory");
    DiveAndDirectionalTrackingAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* DiveAndDirectionalTrackingAIFactory_getInstance(DiveAndDirectionalTrackingAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        void* visitorCanBeNull = Hashtable_get(hashtable, ((void*) (BasicAI_staticInit(), BasicAI_AI_VISITOR)));
        if (visitorCanBeNull == nullptr) {
            visitorCanBeNull = ThrustAIVisitorFactory_getInstance();
        }
        ABHashtable* hashtable2 = BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory_new());
        Hashtable_put(hashtable2, (BasicAI_staticInit(), BasicAI_AI_VISITOR), LastKeyAIVisitorFactory_getInstance());
        ArtificialIntelligenceInterface* artificialIntelligenceInterface = BasicRandomAIFactory_getInstance(BasicRandomAIFactory_new(), hashtable2, ownerLayerInterface, gameInput);
        return DiveAndDirectionalTrackingAI_new(ownerLayerInterface, artificialIntelligenceInterface, gameInput, ((Visitor*) visitorCanBeNull));
}

