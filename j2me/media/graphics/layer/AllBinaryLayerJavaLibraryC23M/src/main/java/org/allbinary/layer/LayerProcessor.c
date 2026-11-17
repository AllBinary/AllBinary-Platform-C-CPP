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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/layer/LayerProcessorInterface.h"

typedef struct LayerProcessor LayerProcessor;
struct LayerProcessor {
    LayerProcessorInterface LayerProcessorInterface_interface;
    CommonStrings* commonStrings;
    LayerManager* layerManager;
};


LayerProcessor* LayerProcessor_new(LayerManager* layerManager);

void LayerProcessor_init(LayerProcessor* this, LayerManager* layerManager);
void LayerProcessor_processAt(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool LayerProcessor_isProcessorLayer(LayerProcessor* this, AllBinaryLayer* layerInterface);
LayerManager* LayerProcessor_getLayerManager(LayerProcessor* this);
void LayerProcessor_process(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);

static void LayerProcessor_initFields(LayerProcessor* this) {
    this->commonStrings = CommonStrings_getInstance();
    
}


void LayerProcessor_init(LayerProcessor* this, LayerManager* layerManager) {
    LayerProcessor_initFields(this);
        this->layerManager = layerManager;
}

LayerProcessor* LayerProcessor_new(LayerManager* layerManager) {
    LayerProcessor* this = calloc(1, sizeof(LayerProcessor));
    LayerProcessor_init(this, layerManager);
    return this;
}


// throws Exception
void LayerProcessor_processAt(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool LayerProcessor_isProcessorLayer(LayerProcessor* this, AllBinaryLayer* layerInterface) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


LayerManager* LayerProcessor_getLayerManager(LayerProcessor* this) {
        return this->layerManager;
}


// throws Exception
void LayerProcessor_process(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerManager* layerManager = LayerProcessor_getLayerManager(this);
        int32_t size = LayerManager_getSize(layerManager);
        for (int32_t index = 0; index < size; index++) {
            LayerProcessor_processAt(this, allBinaryLayerManager, ((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, index)), index);
        }
}

