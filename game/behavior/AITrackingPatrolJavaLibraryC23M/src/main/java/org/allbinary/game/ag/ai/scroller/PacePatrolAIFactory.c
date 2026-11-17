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
// package org.allbinary.game.ag.ai.scroller

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
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct PacePatrolAIFactory PacePatrolAIFactory;
struct PacePatrolAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


PacePatrolAIFactory* PacePatrolAIFactory_new(void);
ArtificialIntelligenceInterface* PacePatrolAIFactory_getInstance(PacePatrolAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void PacePatrolAIFactory_init(PacePatrolAIFactory* this) {
}

PacePatrolAIFactory* PacePatrolAIFactory_new(void) {
    PacePatrolAIFactory* this = calloc(1, sizeof(PacePatrolAIFactory));
    PacePatrolAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* PacePatrolAIFactory_getInstance(PacePatrolAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        ABHashtable_put(hashtable, BasePatrolAI_MAX_DISTANCE, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 220));
        return PacePatrolAI_new(hashtable, ownerLayerInterface, gameInput);
}

