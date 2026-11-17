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

typedef struct NullAIFactory NullAIFactory;
struct NullAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};

static NullAI* NullAIFactory_NULL_AI;

NullAIFactory* NullAIFactory_new(void);
ArtificialIntelligenceInterface* NullAIFactory_getInstance(NullAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
ArtificialIntelligenceInterface* NullAIFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullAIFactory_staticInit(void) {
    NullAIFactory_NULL_AI = NullAI_new();
}

void NullAIFactory_init(NullAIFactory* this) {
}

NullAIFactory* NullAIFactory_new(void) {
    NullAIFactory* this = calloc(1, sizeof(NullAIFactory));
    NullAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* NullAIFactory_getInstance(NullAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return NullAIFactory_NULL_AI;
}


// Java overloaded method: C needs a different name
ArtificialIntelligenceInterface* NullAIFactory_getInstance(void) {
        return NullAIFactory_NULL_AI;
}

