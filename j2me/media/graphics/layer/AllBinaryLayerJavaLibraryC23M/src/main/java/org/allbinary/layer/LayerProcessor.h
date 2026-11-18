#ifndef ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H
#define ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H
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
typedef struct LayerProcessorInterface LayerProcessorInterface;
typedef struct LayerManager LayerManager;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/layer/LayerProcessorInterface.h"
#if __has_include("org/allbinary/layer/LayerManager.h")
#include "org/allbinary/layer/LayerManager.h"
#endif

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
#define LayerProcessor_new1 LayerProcessor_new
#define LayerProcessor_init1 LayerProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerProcessor_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H
