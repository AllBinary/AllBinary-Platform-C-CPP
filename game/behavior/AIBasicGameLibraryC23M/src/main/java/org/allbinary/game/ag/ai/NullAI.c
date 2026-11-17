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
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct NullAI NullAI;
struct NullAI {
    ArtificialIntelligence base;
};


NullAI* NullAI_new(void);

void NullAI_init(NullAI* this);
void NullAI_processAI(NullAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void NullAI_init(NullAI* this) {
    ArtificialIntelligence_init(&this->base);
}

NullAI* NullAI_new(void) {
    NullAI* this = calloc(1, sizeof(NullAI));
    NullAI_init(this);
    return this;
}


// throws Exception
void NullAI_processAI(NullAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
}

