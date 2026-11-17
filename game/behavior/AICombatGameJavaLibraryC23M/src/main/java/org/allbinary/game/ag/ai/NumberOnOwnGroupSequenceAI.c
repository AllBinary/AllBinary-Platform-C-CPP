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
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct NumberOnOwnGroupSequenceAI NumberOnOwnGroupSequenceAI;
struct NumberOnOwnGroupSequenceAI {
    SequenceAI base;
    int32_t* numberOnSameTeam;
};


NumberOnOwnGroupSequenceAI* NumberOnOwnGroupSequenceAI_new(int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberOnOwnGroupSequenceAI_init(NumberOnOwnGroupSequenceAI* this, int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void NumberOnOwnGroupSequenceAI_processAI(NumberOnOwnGroupSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void NumberOnOwnGroupSequenceAI_initFields(NumberOnOwnGroupSequenceAI* this) {
    
}


void NumberOnOwnGroupSequenceAI_init(NumberOnOwnGroupSequenceAI* this, int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        SequenceAI_init(&this->base, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
        NumberOnOwnGroupSequenceAI_initFields(this);
        this->numberOnSameTeam = numberOnSameTeam;
}

NumberOnOwnGroupSequenceAI* NumberOnOwnGroupSequenceAI_new(int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    NumberOnOwnGroupSequenceAI* this = calloc(1, sizeof(NumberOnOwnGroupSequenceAI));
    NumberOnOwnGroupSequenceAI_init(this, numberOnSameTeam, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void NumberOnOwnGroupSequenceAI_processAI(NumberOnOwnGroupSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* layerInterface = NumberOnOwnGroupSequenceAI_getOwnerLayerInterface(this);
        int32_t index = NumberOnOwnGroupSequenceAI_getIndex(this);
        if (java_array_length(this->numberOnSameTeam) > index) {
            int32_t size = GroupLayerManagerListener_getGroupSizeFromInterface(GroupLayerManagerListener_getInstance(), layerInterface);
            if (JAVA_CALL(this->numberOnSameTeam[index], intValue) > size) {
                NumberOnOwnGroupSequenceAI_next(this);
            }
        }
        SequenceAI_processAI((&this->base), allBinaryLayerManager);
}

