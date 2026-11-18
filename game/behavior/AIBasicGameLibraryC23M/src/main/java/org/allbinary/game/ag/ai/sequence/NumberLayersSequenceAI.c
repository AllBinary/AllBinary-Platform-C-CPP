// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAI.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"





void NumberLayersSequenceAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberLayersSequenceAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberLayersSequenceAI", "SequenceAI");
    java_register_method("NumberLayersSequenceAI", "processAI", (void*) NumberLayersSequenceAI_processAI);
}

static void NumberLayersSequenceAI_initFields(NumberLayersSequenceAI* this) {
    
}


void NumberLayersSequenceAI_init(NumberLayersSequenceAI* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberLayersSequenceAI_register();
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
        NumberLayersSequenceAI_initFields(this);
        this->numberOfLayersLeft = numberOfEnemiesLeft;
}

NumberLayersSequenceAI* NumberLayersSequenceAI_new(int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberLayersSequenceAI* this = java_object_alloc(sizeof(NumberLayersSequenceAI), "NumberLayersSequenceAI");
    NumberLayersSequenceAI_init(this, numberOfEnemiesLeft, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void NumberLayersSequenceAI_processAI(NumberLayersSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (SequenceAI_getIndex(this) == 0) {
            if (LayerManager_getSize(allBinaryLayerManager) < this->numberOfLayersLeft) {
                SequenceAI_setIndex(this, 1);
            }
        }
        SequenceAI_processAI((&this->base), allBinaryLayerManager);
}

