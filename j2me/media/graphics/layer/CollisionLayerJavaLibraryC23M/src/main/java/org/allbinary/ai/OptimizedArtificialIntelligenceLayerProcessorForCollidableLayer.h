#ifndef ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H
#define ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H
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
typedef struct OptimizedArtificialIntelligenceLayerManager OptimizedArtificialIntelligenceLayerManager;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer;
struct OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new(void);

void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this);

void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_processAt(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);
#define OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new0 OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new
#define OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init0 OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init
#ifndef OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_getLayerManager
#define OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_process
#define OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_register(void);


#endif // ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H
