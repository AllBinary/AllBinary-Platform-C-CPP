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
// package org.allbinary.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"

typedef struct ArtificialIntelligence ArtificialIntelligence;
struct ArtificialIntelligence {
    ArtificialIntelligenceInterface ArtificialIntelligenceInterface_interface;
};

constexpr int32_t ArtificialIntelligence_AI_ID = 2;
static ArtificialIntelligence* ArtificialIntelligence_instance;

ArtificialIntelligence* ArtificialIntelligence_new(void);
ArtificialIntelligence* ArtificialIntelligence_getInstance(void);

void ArtificialIntelligence_init(ArtificialIntelligence* this);
void ArtificialIntelligence_processAI(ArtificialIntelligence* this, AllBinaryLayerManager* layerManager);
int32_t ArtificialIntelligence_getId(ArtificialIntelligence* this);

// Static fields with runtime initializers: call this once at startup
void ArtificialIntelligence_staticInit(void) {
    ArtificialIntelligence_instance = ArtificialIntelligence_new();
}


ArtificialIntelligence* ArtificialIntelligence_getInstance(void) {
        return ArtificialIntelligence_instance;
}


void ArtificialIntelligence_init(ArtificialIntelligence* this) {
}

ArtificialIntelligence* ArtificialIntelligence_new(void) {
    ArtificialIntelligence* this = calloc(1, sizeof(ArtificialIntelligence));
    ArtificialIntelligence_init(this);
    return this;
}


// throws Exception
void ArtificialIntelligence_processAI(ArtificialIntelligence* this, AllBinaryLayerManager* layerManager) {
}


int32_t ArtificialIntelligence_getId(ArtificialIntelligence* this) {
        return 1;
}

