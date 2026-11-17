/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.ag.ai.sequence

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"

typedef struct ComboSequenceAI ComboSequenceAI;
struct ComboSequenceAI {
    SequenceAI base;
};


ComboSequenceAI* ComboSequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ComboSequenceAI_init(ComboSequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void ComboSequenceAI_processAI(ComboSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void ComboSequenceAI_init(ComboSequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

ComboSequenceAI* ComboSequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ComboSequenceAI* this = calloc(1, sizeof(ComboSequenceAI));
    ComboSequenceAI_init(this, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ComboSequenceAI_processAI(ComboSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray = ComboSequenceAI_getArtificialIntelligenceInterface(this);
        int32_t size = java_array_length(artificialIntelligenceInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            ComboSequenceAI_setIndex(this, index);
            SequenceAI_processAI((&this->base), allBinaryLayerManager);
        }
}

