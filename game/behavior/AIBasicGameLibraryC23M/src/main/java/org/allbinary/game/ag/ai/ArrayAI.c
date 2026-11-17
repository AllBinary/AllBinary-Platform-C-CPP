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
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct ArrayAI ArrayAI;
struct ArrayAI {
    BasicAI base;
    ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray;
};


ArrayAI* ArrayAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ArrayAI_init(ArrayAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void ArrayAI_processAI(ArrayAI* this, AllBinaryLayerManager* allBinaryLayerManager);
ArtificialIntelligenceInterface** ArrayAI_getArtificialIntelligenceInterface(ArrayAI* this);

static void ArrayAI_initFields(ArrayAI* this) {
    
}


void ArrayAI_init(ArrayAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        ArrayAI_initFields(this);
        this->artificialIntelligenceInterfaceArray = artificialIntelligenceInterface;
}

ArrayAI* ArrayAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ArrayAI* this = calloc(1, sizeof(ArrayAI));
    ArrayAI_init(this, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ArrayAI_processAI(ArrayAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t size = java_array_length(this->artificialIntelligenceInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(this->artificialIntelligenceInterfaceArray[index], processAI, allBinaryLayerManager);
        }
}


ArtificialIntelligenceInterface** ArrayAI_getArtificialIntelligenceInterface(ArrayAI* this) {
        return this->artificialIntelligenceInterfaceArray;
}

