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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct TickableLayerProcessor TickableLayerProcessor;
struct TickableLayerProcessor {
    LayerProcessor base;
};


TickableLayerProcessor* TickableLayerProcessor_new(void);

void TickableLayerProcessor_init(TickableLayerProcessor* this);
void TickableLayerProcessor_processAt(TickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool TickableLayerProcessor_isProcessorLayer(TickableLayerProcessor* this, AllBinaryLayer* layerInterface);


void TickableLayerProcessor_init(TickableLayerProcessor* this) {
        LayerProcessor_init(&this->base, TickableLayerManager_new());
}

TickableLayerProcessor* TickableLayerProcessor_new(void) {
    TickableLayerProcessor* this = calloc(1, sizeof(TickableLayerProcessor));
    TickableLayerProcessor_init(this);
    return this;
}


// throws Exception
void TickableLayerProcessor_processAt(TickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        TickableInterface* tickableInterface = ((TickableInterface*) layerInterface);
        TickableInterface_processTick(tickableInterface, allBinaryLayerManager);
}


bool TickableLayerProcessor_isProcessorLayer(TickableLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsTickableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

