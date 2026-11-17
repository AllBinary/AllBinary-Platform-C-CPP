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
#include "org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct DiveAndDirectionalTrackingAIFactory DiveAndDirectionalTrackingAIFactory;
struct DiveAndDirectionalTrackingAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


DiveAndDirectionalTrackingAIFactory* DiveAndDirectionalTrackingAIFactory_new(void);
ArtificialIntelligenceInterface* DiveAndDirectionalTrackingAIFactory_getInstance(DiveAndDirectionalTrackingAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void DiveAndDirectionalTrackingAIFactory_init(DiveAndDirectionalTrackingAIFactory* this) {
}

DiveAndDirectionalTrackingAIFactory* DiveAndDirectionalTrackingAIFactory_new(void) {
    DiveAndDirectionalTrackingAIFactory* this = calloc(1, sizeof(DiveAndDirectionalTrackingAIFactory));
    DiveAndDirectionalTrackingAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* DiveAndDirectionalTrackingAIFactory_getInstance(DiveAndDirectionalTrackingAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        Any* visitorCanBeNull = ABHashtable_get(hashtable, ((Any*) BasicAI_AI_VISITOR));
        if (visitorCanBeNull == nullptr) {
            visitorCanBeNull = ThrustAIVisitorFactory_getInstance();
        }
        ABHashtable* hashtable2 = BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory_new());
        ABHashtable_put(hashtable2, BasicAI_AI_VISITOR, LastKeyAIVisitorFactory_getInstance());
        ArtificialIntelligenceInterface* artificialIntelligenceInterface = BasicRandomAIFactory_getInstance(BasicRandomAIFactory_new(), hashtable2, ownerLayerInterface, gameInput);
        return DiveAndDirectionalTrackingAI_new(ownerLayerInterface, artificialIntelligenceInterface, gameInput, ((Visitor*) visitorCanBeNull));
}

