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

typedef struct NumberLayersSequenceAI NumberLayersSequenceAI;
struct NumberLayersSequenceAI {
    SequenceAI base;
    int32_t numberOfLayersLeft;
};


NumberLayersSequenceAI* NumberLayersSequenceAI_new(int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberLayersSequenceAI_init(NumberLayersSequenceAI* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void NumberLayersSequenceAI_processAI(NumberLayersSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void NumberLayersSequenceAI_initFields(NumberLayersSequenceAI* this) {
    
}


void NumberLayersSequenceAI_init(NumberLayersSequenceAI* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
        NumberLayersSequenceAI_initFields(this);
        this->numberOfLayersLeft = numberOfEnemiesLeft;
}

NumberLayersSequenceAI* NumberLayersSequenceAI_new(int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberLayersSequenceAI* this = calloc(1, sizeof(NumberLayersSequenceAI));
    NumberLayersSequenceAI_init(this, numberOfEnemiesLeft, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void NumberLayersSequenceAI_processAI(NumberLayersSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (NumberLayersSequenceAI_getIndex(this) == 0) {
            if (AllBinaryLayerManager_getSize(allBinaryLayerManager) < this->numberOfLayersLeft) {
                NumberLayersSequenceAI_setIndex(this, 1);
            }
        }
        SequenceAI_processAI((&this->base), allBinaryLayerManager);
}

