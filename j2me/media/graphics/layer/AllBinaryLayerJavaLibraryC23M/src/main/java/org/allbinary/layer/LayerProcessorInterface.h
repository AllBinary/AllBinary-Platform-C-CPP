#ifndef ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H
#define ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H
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
typedef struct BasicLayerProcessorInterface BasicLayerProcessorInterface;
typedef struct LayerManager LayerManager;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/layer/BasicLayerProcessorInterface.h"

typedef struct LayerProcessorInterface LayerProcessorInterface;
struct LayerProcessorInterface {
    LayerManager* (*getLayerManager)(void* this);
    void (*processAt)(void* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
    bool (*isProcessorLayer)(void* this, AllBinaryLayer* layerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerProcessorInterface_staticInit(void);

static inline LayerManager* LayerProcessorInterface_getLayerManager(void* this) {
    return ((__typeof__(((LayerProcessorInterface*) nullptr)->getLayerManager)) java_method_of(this, "getLayerManager"))(this);
}

static inline void LayerProcessorInterface_processAt(void* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
    ((__typeof__(((LayerProcessorInterface*) nullptr)->processAt)) java_method_of(this, "processAt"))(this, allBinaryLayerManager, layerInterface, index);
}

static inline bool LayerProcessorInterface_isProcessorLayer(void* this, AllBinaryLayer* layerInterface) {
    return ((__typeof__(((LayerProcessorInterface*) nullptr)->isProcessorLayer)) java_method_of(this, "isProcessorLayer"))(this, layerInterface);
}
#define LayerProcessorInterface_process BasicLayerProcessorInterface_process


#endif // ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H
