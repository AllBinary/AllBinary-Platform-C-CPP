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

typedef struct NumberLayersSequenceAIFactory NumberLayersSequenceAIFactory;
struct NumberLayersSequenceAIFactory {
    char unused;
};


NumberLayersSequenceAIFactory* NumberLayersSequenceAIFactory_new(void);
ArtificialIntelligenceInterface* NumberLayersSequenceAIFactory_getInstance(NumberLayersSequenceAIFactory* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberLayersSequenceAIFactory_init(NumberLayersSequenceAIFactory* this) {
}

NumberLayersSequenceAIFactory* NumberLayersSequenceAIFactory_new(void) {
    NumberLayersSequenceAIFactory* this = calloc(1, sizeof(NumberLayersSequenceAIFactory));
    NumberLayersSequenceAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* NumberLayersSequenceAIFactory_getInstance(NumberLayersSequenceAIFactory* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return NumberLayersSequenceAI_new(numberOfEnemiesLeft, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

