// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/NumberOnOwnGroupSequenceAI.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/game/layer/identification/GroupLayerManagerListener.h")
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#endif





void NumberOnOwnGroupSequenceAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberOnOwnGroupSequenceAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberOnOwnGroupSequenceAI", "SequenceAI");
    java_register_method("NumberOnOwnGroupSequenceAI", "processAI", (void*) NumberOnOwnGroupSequenceAI_processAI);
}

static void NumberOnOwnGroupSequenceAI_initFields(NumberOnOwnGroupSequenceAI* this) {
    
}


void NumberOnOwnGroupSequenceAI_init(NumberOnOwnGroupSequenceAI* this, int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberOnOwnGroupSequenceAI_register();
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
        NumberOnOwnGroupSequenceAI_initFields(this);
        this->numberOnSameTeam = numberOnSameTeam;
}

NumberOnOwnGroupSequenceAI* NumberOnOwnGroupSequenceAI_new(int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberOnOwnGroupSequenceAI* this = java_object_alloc(sizeof(NumberOnOwnGroupSequenceAI), "NumberOnOwnGroupSequenceAI");
    NumberOnOwnGroupSequenceAI_init(this, numberOnSameTeam, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void NumberOnOwnGroupSequenceAI_processAI(NumberOnOwnGroupSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* layerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t index = SequenceAI_getIndex(this);
        if (java_array_length(this->numberOnSameTeam) > index) {
            int32_t size = GroupLayerManagerListener_getGroupSizeFromInterface(GroupLayerManagerListener_getInstance(), layerInterface);
            if (Integer_intValue(this->numberOnSameTeam[index]) > size) {
                SequenceAI_next(this);
            }
        }
        SequenceAI_processAI((&this->base), allBinaryLayerManager);
}

