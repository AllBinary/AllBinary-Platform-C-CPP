// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/sequence/ComboSequenceAI.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"





void ComboSequenceAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ComboSequenceAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ComboSequenceAI", "SequenceAI");
    java_register_method("ComboSequenceAI", "processAI", (void*) ComboSequenceAI_processAI);
}


void ComboSequenceAI_init(ComboSequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ComboSequenceAI_register();
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

ComboSequenceAI* ComboSequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ComboSequenceAI* this = java_object_alloc(sizeof(ComboSequenceAI), "ComboSequenceAI");
    ComboSequenceAI_init(this, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ComboSequenceAI_processAI(ComboSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray = ArrayAI_getArtificialIntelligenceInterface(this);
        int32_t size = java_array_length(artificialIntelligenceInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            SequenceAI_setIndex(this, index);
            SequenceAI_processAI((&this->base), allBinaryLayerManager);
        }
}

