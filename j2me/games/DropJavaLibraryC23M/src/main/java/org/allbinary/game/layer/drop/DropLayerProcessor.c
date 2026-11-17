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
// package org.allbinary.game.layer.drop

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
#include "org/allbinary/layer/BasicLayerProcessor.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct DropLayerProcessor DropLayerProcessor;
struct DropLayerProcessor {
    BasicLayerProcessor base;
};

static BasicLayerProcessor* DropLayerProcessor_LAYER_PROCESSOR;

DropLayerProcessor* DropLayerProcessor_new(void);

void DropLayerProcessor_init(DropLayerProcessor* this);
BasicLayerProcessor* DropLayerProcessor_getInstance(void);
void DropLayerProcessor_process(DropLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);

// Static fields with runtime initializers: call this once at startup
void DropLayerProcessor_staticInit(void) {
    DropLayerProcessor_LAYER_PROCESSOR = DropLayerProcessor_new();
}


void DropLayerProcessor_init(DropLayerProcessor* this) {
    BasicLayerProcessor_init(&this->base);
}

DropLayerProcessor* DropLayerProcessor_new(void) {
    DropLayerProcessor* this = calloc(1, sizeof(DropLayerProcessor));
    DropLayerProcessor_init(this);
    return this;
}


BasicLayerProcessor* DropLayerProcessor_getInstance(void) {
        return DropLayerProcessor_LAYER_PROCESSOR;
}


// throws Exception
void DropLayerProcessor_process(DropLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicArrayList* list = DropLayerProcessor_getList(this);
        int32_t size = BasicArrayList_size(list);
        AllBinaryLayer* layerInterface = nullptr;
        DropLayerInterface* dropLayerInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            layerInterface = ((AllBinaryLayer*) list->objectArray[index]);
            dropLayerInterface = ((DropLayerInterface*) layerInterface);
            layerInterface = ((AllBinaryLayer*) DropLayerInterface_getDroppedLayer(dropLayerInterface));
            AllBinaryLayerManager_append(allBinaryLayerManager, layerInterface);
        }
        BasicArrayList_clear(list);
}

