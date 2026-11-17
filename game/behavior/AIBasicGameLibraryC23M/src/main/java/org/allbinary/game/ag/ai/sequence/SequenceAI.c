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
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h"
#include "org/allbinary/game/ag/ai/ArrayAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct SequenceAI SequenceAI;
struct SequenceAI {
    ArrayAI base;
    int32_t index;
};

static const char* SequenceAI_SEQUENCE_AI = "Sequence AI";

SequenceAI* SequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SequenceAI_init(SequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void SequenceAI_processAI(SequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void SequenceAI_next(SequenceAI* this);
int32_t SequenceAI_getIndex(SequenceAI* this);
void SequenceAI_setIndex(SequenceAI* this, int32_t index);
ArtificialIntelligenceInterface* SequenceAI_getSelectedArtificialIntelligenceInterface(SequenceAI* this);
const char* SequenceAI_getName(SequenceAI* this);
const char* SequenceAI_toString(SequenceAI* this);

static void SequenceAI_initFields(SequenceAI* this) {
    this->index = 0;
}


void SequenceAI_init(SequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        ArrayAI_init(&this->base, artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput);
        SequenceAI_initFields(this);
}

SequenceAI* SequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SequenceAI* this = calloc(1, sizeof(SequenceAI));
    SequenceAI_init(this, artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void SequenceAI_processAI(SequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        JAVA_CALL(SequenceAI_getArtificialIntelligenceInterface(this)[this->index], processAI, allBinaryLayerManager);
}


void SequenceAI_next(SequenceAI* this) {
        this->index++;
        ArtificialIntelligenceInterface* artificialIntelligenceInterface = SequenceAI_getSelectedArtificialIntelligenceInterface(this);
        if (ArtificialIntelligenceInterface_getId(artificialIntelligenceInterface) == ArtificialIntelligence_AI_ID) {
            ArtificialIntelligenceTransitionInterface* artificialIntelligenceTransitionInterface = ((ArtificialIntelligenceTransitionInterface*) artificialIntelligenceInterface);
            ArtificialIntelligenceTransitionInterface_transition(artificialIntelligenceTransitionInterface);
        }
}


int32_t SequenceAI_getIndex(SequenceAI* this) {
        return this->index;
}


void SequenceAI_setIndex(SequenceAI* this, int32_t index) {
        this->index = index;
}


ArtificialIntelligenceInterface* SequenceAI_getSelectedArtificialIntelligenceInterface(SequenceAI* this) {
        return SequenceAI_getArtificialIntelligenceInterface(this)[this->index];
}


const char* SequenceAI_getName(SequenceAI* this) {
        return SequenceAI_SEQUENCE_AI;
}


const char* SequenceAI_toString(SequenceAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, ArrayAI_toString((&this->base)));
        StringMaker_append(stringBuffer, " Selected AI: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), SequenceAI_getSelectedArtificialIntelligenceInterface(this)));
        return StringMaker_toString(stringBuffer);
}

