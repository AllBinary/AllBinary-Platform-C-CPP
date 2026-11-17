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
#include "org/allbinary/game/ag/ai/ArrayAI.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct RandomPatrolFlockingFiringAIFactory RandomPatrolFlockingFiringAIFactory;
struct RandomPatrolFlockingFiringAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


RandomPatrolFlockingFiringAIFactory* RandomPatrolFlockingFiringAIFactory_new(void);
ArtificialIntelligenceInterface* RandomPatrolFlockingFiringAIFactory_getInstance(RandomPatrolFlockingFiringAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void RandomPatrolFlockingFiringAIFactory_init(RandomPatrolFlockingFiringAIFactory* this) {
}

RandomPatrolFlockingFiringAIFactory* RandomPatrolFlockingFiringAIFactory_new(void) {
    RandomPatrolFlockingFiringAIFactory* this = calloc(1, sizeof(RandomPatrolFlockingFiringAIFactory));
    RandomPatrolFlockingFiringAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* RandomPatrolFlockingFiringAIFactory_getInstance(RandomPatrolFlockingFiringAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        ArtificialIntelligenceInterface** artificialIntelligenceInterface = ((ArtificialIntelligenceInterface**) java_array_new(sizeof(ArtificialIntelligenceInterface*), 2));
        artificialIntelligenceInterface[0] = RandomPatrolAI_new(hashtable, ownerLayerInterface, gameInput);
        artificialIntelligenceInterface[1] = TimedFireAI_new(1800, ownerLayerInterface, gameInput);
        return ArrayAI_new(artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

