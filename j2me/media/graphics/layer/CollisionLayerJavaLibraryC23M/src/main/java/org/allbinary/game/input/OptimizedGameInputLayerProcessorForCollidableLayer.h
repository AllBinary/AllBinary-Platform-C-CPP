#ifndef ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERPROCESSORFORCOLLIDABLELAYER_H
#define ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERPROCESSORFORCOLLIDABLELAYER_H
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
typedef struct OptimizedGameInputLayerManager OptimizedGameInputLayerManager;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedGameInputLayerProcessorForCollidableLayer OptimizedGameInputLayerProcessorForCollidableLayer;
struct OptimizedGameInputLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedGameInputLayerProcessorForCollidableLayer* OptimizedGameInputLayerProcessorForCollidableLayer_new(void);

void OptimizedGameInputLayerProcessorForCollidableLayer_init(OptimizedGameInputLayerProcessorForCollidableLayer* this);

void OptimizedGameInputLayerProcessorForCollidableLayer_processAt(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool OptimizedGameInputLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);
#define OptimizedGameInputLayerProcessorForCollidableLayer_new0 OptimizedGameInputLayerProcessorForCollidableLayer_new
#define OptimizedGameInputLayerProcessorForCollidableLayer_init0 OptimizedGameInputLayerProcessorForCollidableLayer_init
#ifndef OptimizedGameInputLayerProcessorForCollidableLayer_getLayerManager
#define OptimizedGameInputLayerProcessorForCollidableLayer_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef OptimizedGameInputLayerProcessorForCollidableLayer_process
#define OptimizedGameInputLayerProcessorForCollidableLayer_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedGameInputLayerProcessorForCollidableLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedGameInputLayerProcessorForCollidableLayer_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_OPTIMIZEDGAMEINPUTLAYERPROCESSORFORCOLLIDABLELAYER_H
