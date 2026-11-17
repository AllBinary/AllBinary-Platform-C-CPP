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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct ArtificialIntelligenceLayerProcessor ArtificialIntelligenceLayerProcessor;
struct ArtificialIntelligenceLayerProcessor {
    LayerProcessor base;
};


ArtificialIntelligenceLayerProcessor* ArtificialIntelligenceLayerProcessor_new(void);

void ArtificialIntelligenceLayerProcessor_init(ArtificialIntelligenceLayerProcessor* this);
void ArtificialIntelligenceLayerProcessor_processAt(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool ArtificialIntelligenceLayerProcessor_isProcessorLayer(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayer* layerInterface);


void ArtificialIntelligenceLayerProcessor_init(ArtificialIntelligenceLayerProcessor* this) {
        LayerProcessor_init(&this->base, ArtificialIntelligenceLayerManager_new());
}

ArtificialIntelligenceLayerProcessor* ArtificialIntelligenceLayerProcessor_new(void) {
    ArtificialIntelligenceLayerProcessor* this = calloc(1, sizeof(ArtificialIntelligenceLayerProcessor));
    ArtificialIntelligenceLayerProcessor_init(this);
    return this;
}


// throws Exception
void ArtificialIntelligenceLayerProcessor_processAt(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        ArtificialIntelligenceCompositeInterface* artificialIntelligenceCompositeInterface = ((ArtificialIntelligenceCompositeInterface*) layerInterface);
        JAVA_CALL(ArtificialIntelligenceCompositeInterface_getArtificialIntelligenceInterface(artificialIntelligenceCompositeInterface), processAI, allBinaryLayerManager);
}


// throws Exception
bool ArtificialIntelligenceLayerProcessor_isProcessorLayer(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

