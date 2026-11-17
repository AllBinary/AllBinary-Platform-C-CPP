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
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer;
struct OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer {
    LayerProcessor base;
};


OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new(void);

void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this);
void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_processAt(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t startIndex);
bool OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface);


void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this) {
        LayerProcessor_init(&this->base, OptimizedAllBinaryCollisionLayerManager_new());
}

OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new(void) {
    OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this = calloc(1, sizeof(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer));
    OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_processAt(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t startIndex) {
        CollidableCompositeLayer* collidableInterfaceCompositeInterface = ((CollidableCompositeLayer*) layerInterface);
        CollidableBaseBehavior* collidableBase = CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface);
        if (CollidableBaseBehavior_isCollidable(collidableBase, collidableInterfaceCompositeInterface)) {
            LayerManager* layerManager = OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_getLayerManager(this);
            int32_t size = LayerManager_getSize(layerManager);
            CollidableCompositeLayer* collidableInterfaceCompositeInterface2 = nullptr;
            CollidableBaseBehavior* collidableBase2 = nullptr;
            for (int32_t index = startIndex + 1; index < size; index++) {
                collidableInterfaceCompositeInterface2 = ((CollidableCompositeLayer*) LayerManager_getLayerAt(layerManager, index));
                collidableBase2 = CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface2);
                if (CollidableBaseBehavior_isCollidable(collidableBase2, collidableInterfaceCompositeInterface) && CollidableBaseBehavior_isCollision(collidableBase, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2)) {
                    CollidableBaseBehavior_collide(collidableBase, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
                    CollidableBaseBehavior_collide(collidableBase2, collidableInterfaceCompositeInterface2, collidableInterfaceCompositeInterface);
                }
            }
        }
}


bool OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsCollidableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

