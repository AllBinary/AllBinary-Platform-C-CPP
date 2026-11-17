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
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer;
struct OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new(void);

void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this);
void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_processAt(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);


void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this) {
        LayerProcessor_init(&this->base, OptimizedArtificialIntelligenceLayerManager_new());
}

OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new(void) {
    OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this = calloc(1, sizeof(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer));
    OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_processAt(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        CollidableCompositeLayer* artificialIntelligenceCompositeInterface = ((CollidableCompositeLayer*) layerInterface);
        JAVA_CALL(CollidableCompositeLayer_getArtificialIntelligenceInterface(artificialIntelligenceCompositeInterface), processAI, allBinaryLayerManager);
}


// throws Exception
bool OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

