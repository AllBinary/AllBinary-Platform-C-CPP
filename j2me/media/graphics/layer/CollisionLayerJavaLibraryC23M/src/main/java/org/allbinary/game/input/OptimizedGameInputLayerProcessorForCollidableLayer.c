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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedGameInputLayerProcessorForCollidableLayer OptimizedGameInputLayerProcessorForCollidableLayer;
struct OptimizedGameInputLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedGameInputLayerProcessorForCollidableLayer* OptimizedGameInputLayerProcessorForCollidableLayer_new(void);

void OptimizedGameInputLayerProcessorForCollidableLayer_init(OptimizedGameInputLayerProcessorForCollidableLayer* this);
void OptimizedGameInputLayerProcessorForCollidableLayer_processAt(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool OptimizedGameInputLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);


void OptimizedGameInputLayerProcessorForCollidableLayer_init(OptimizedGameInputLayerProcessorForCollidableLayer* this) {
        LayerProcessor_init(&this->base, OptimizedGameInputLayerManager_new());
}

OptimizedGameInputLayerProcessorForCollidableLayer* OptimizedGameInputLayerProcessorForCollidableLayer_new(void) {
    OptimizedGameInputLayerProcessorForCollidableLayer* this = calloc(1, sizeof(OptimizedGameInputLayerProcessorForCollidableLayer));
    OptimizedGameInputLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedGameInputLayerProcessorForCollidableLayer_processAt(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        AllBinaryGameLayer* gameInputInterface = ((AllBinaryGameLayer*) layerInterface);
        AllBinaryGameLayer_processInput(gameInputInterface, allBinaryLayerManager);
}


bool OptimizedGameInputLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsGameInputInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

