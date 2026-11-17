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
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct SingleLayerLayerProcessor SingleLayerLayerProcessor;
struct SingleLayerLayerProcessor {
    LayerProcessor base;
};


SingleLayerLayerProcessor* SingleLayerLayerProcessor_new(void);

void SingleLayerLayerProcessor_init(SingleLayerLayerProcessor* this);
void SingleLayerLayerProcessor_process(SingleLayerLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager);


void SingleLayerLayerProcessor_init(SingleLayerLayerProcessor* this) {
        LayerProcessor_init(&this->base, SingleLayerLayerManager_new());
}

SingleLayerLayerProcessor* SingleLayerLayerProcessor_new(void) {
    SingleLayerLayerProcessor* this = calloc(1, sizeof(SingleLayerLayerProcessor));
    SingleLayerLayerProcessor_init(this);
    return this;
}


// throws Exception
void SingleLayerLayerProcessor_process(SingleLayerLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerManager* layerManager = SingleLayerLayerProcessor_getLayerManager(this);
        SingleLayerLayerProcessor_processAt(this, allBinaryLayerManager, ((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, 0)), 0);
}

