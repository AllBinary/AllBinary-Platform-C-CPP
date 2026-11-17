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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct LurchRotationAIFactory LurchRotationAIFactory;
struct LurchRotationAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


LurchRotationAIFactory* LurchRotationAIFactory_new(void);
ArtificialIntelligenceInterface* LurchRotationAIFactory_getInstance(LurchRotationAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchRotationAIFactory_init(LurchRotationAIFactory* this) {
}

LurchRotationAIFactory* LurchRotationAIFactory_new(void) {
    LurchRotationAIFactory* this = calloc(1, sizeof(LurchRotationAIFactory));
    LurchRotationAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* LurchRotationAIFactory_getInstance(LurchRotationAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return LurchRotationAI_new(ownerLayerInterface, gameInput);
}

