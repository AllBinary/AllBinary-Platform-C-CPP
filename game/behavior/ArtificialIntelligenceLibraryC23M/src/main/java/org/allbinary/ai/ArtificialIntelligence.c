// Generated Code Do Not Modify
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"



static ArtificialIntelligence* ArtificialIntelligence_instance;





void ArtificialIntelligence_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ArtificialIntelligence_instance = ArtificialIntelligence_new();
}

void ArtificialIntelligence_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArtificialIntelligence", nullptr);
    java_register_method("ArtificialIntelligence", "processAI", (void*) ArtificialIntelligence_processAI);
    java_register_method("ArtificialIntelligence", "getId", (void*) ArtificialIntelligence_getId);
}


ArtificialIntelligence* ArtificialIntelligence_getInstance(void) {
        return (ArtificialIntelligence_staticInit(), ArtificialIntelligence_instance);
}


void ArtificialIntelligence_init(ArtificialIntelligence* this) {
    ArtificialIntelligence_register();
}

ArtificialIntelligence* ArtificialIntelligence_new(void) {
    ArtificialIntelligence* this = java_object_alloc(sizeof(ArtificialIntelligence), "ArtificialIntelligence");
    ArtificialIntelligence_init(this);
    return this;
}


// throws Exception
void ArtificialIntelligence_processAI(ArtificialIntelligence* this, AllBinaryLayerManager* layerManager) {
}


int32_t ArtificialIntelligence_getId(ArtificialIntelligence* this) {
        return 1;
}

