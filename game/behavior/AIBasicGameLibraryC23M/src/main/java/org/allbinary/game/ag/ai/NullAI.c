// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/NullAI.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void NullAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullAI", "ArtificialIntelligence");
    java_register_method("NullAI", "processAI", (void*) NullAI_processAI);
}


void NullAI_init(NullAI* this) {
    NullAI_register();
    ArtificialIntelligence_init(&this->base);
}

NullAI* NullAI_new(void) {
    NullAI* this = java_object_alloc(sizeof(NullAI), "NullAI");
    NullAI_init(this);
    return this;
}


// throws Exception
void NullAI_processAI(NullAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
}

