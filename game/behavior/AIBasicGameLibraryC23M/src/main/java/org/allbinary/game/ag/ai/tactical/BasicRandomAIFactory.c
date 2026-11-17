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
// package org.allbinary.game.ag.ai.tactical

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
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/ag/ai/InputProbability.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct BasicRandomAIFactory BasicRandomAIFactory;
struct BasicRandomAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


BasicRandomAIFactory* BasicRandomAIFactory_new(void);
ArtificialIntelligenceInterface* BasicRandomAIFactory_getInstance(BasicRandomAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasicRandomAIFactory_init(BasicRandomAIFactory* this) {
}

BasicRandomAIFactory* BasicRandomAIFactory_new(void) {
    BasicRandomAIFactory* this = calloc(1, sizeof(BasicRandomAIFactory));
    BasicRandomAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* BasicRandomAIFactory_getInstance(BasicRandomAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        Visitor* visitor = ((Visitor*) ABHashtable_get(hashtable, ((Any*) BasicAI_AI_VISITOR)));
        if (visitor == nullptr) {
            java_throw(java_exception_new("Exception", "No Visitor Provided"));
        }
        InputProbability* inputProbability = ((InputProbability*) ABHashtable_get(hashtable, ((Any*) InputProbability_INPUT_PROBABILITY)));
        return BasicRandomAI_new(ownerLayerInterface, gameInput, inputProbability, visitor);
}

