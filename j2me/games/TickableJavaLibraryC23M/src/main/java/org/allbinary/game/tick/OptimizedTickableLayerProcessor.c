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
// package org.allbinary.game.tick

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

typedef struct OptimizedTickableLayerProcessor OptimizedTickableLayerProcessor;
struct OptimizedTickableLayerProcessor {
    LayerProcessor base;
};


OptimizedTickableLayerProcessor* OptimizedTickableLayerProcessor_new(void);

void OptimizedTickableLayerProcessor_init(OptimizedTickableLayerProcessor* this);
void OptimizedTickableLayerProcessor_processAt(OptimizedTickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool OptimizedTickableLayerProcessor_isProcessorLayer(OptimizedTickableLayerProcessor* this, AllBinaryLayer* layerInterface);


void OptimizedTickableLayerProcessor_init(OptimizedTickableLayerProcessor* this) {
        LayerProcessor_init(&this->base, OptimizedTickableLayerManager_new());
}

OptimizedTickableLayerProcessor* OptimizedTickableLayerProcessor_new(void) {
    OptimizedTickableLayerProcessor* this = calloc(1, sizeof(OptimizedTickableLayerProcessor));
    OptimizedTickableLayerProcessor_init(this);
    return this;
}


// throws Exception
void OptimizedTickableLayerProcessor_processAt(OptimizedTickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        AllBinaryGameLayer* tickableInterface = ((AllBinaryGameLayer*) layerInterface);
        AllBinaryGameLayer_processTick(tickableInterface, allBinaryLayerManager);
}


bool OptimizedTickableLayerProcessor_isProcessorLayer(OptimizedTickableLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsTickableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

