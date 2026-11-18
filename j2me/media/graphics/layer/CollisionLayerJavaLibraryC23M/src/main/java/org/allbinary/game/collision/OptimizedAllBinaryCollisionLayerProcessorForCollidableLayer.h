#ifndef ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_H
#define ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_H
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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OptimizedAllBinaryCollisionLayerManager OptimizedAllBinaryCollisionLayerManager;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerManager LayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer;
struct OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new(void);

void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this);

void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_processAt(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t startIndex);

bool OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);
#define OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new0 OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new
#define OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init0 OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init
#ifndef OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_getLayerManager
#define OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_process
#define OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_H
