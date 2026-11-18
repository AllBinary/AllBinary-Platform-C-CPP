#ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERPROCESSOR_H
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
// package org.allbinary.game.collision.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CollidableInterfaceLayerManager CollidableInterfaceLayerManager;
typedef struct AllBinaryCollisionManager AllBinaryCollisionManager;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct CollidableInterfaceLayerProcessor CollidableInterfaceLayerProcessor;
struct CollidableInterfaceLayerProcessor {
    LayerProcessor base;
};


CollidableInterfaceLayerProcessor* CollidableInterfaceLayerProcessor_new(void);

void CollidableInterfaceLayerProcessor_init(CollidableInterfaceLayerProcessor* this);

void CollidableInterfaceLayerProcessor_processAt(CollidableInterfaceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool CollidableInterfaceLayerProcessor_isProcessorLayer(CollidableInterfaceLayerProcessor* this, AllBinaryLayer* layerInterface);
#define CollidableInterfaceLayerProcessor_new0 CollidableInterfaceLayerProcessor_new
#define CollidableInterfaceLayerProcessor_init0 CollidableInterfaceLayerProcessor_init
#ifndef CollidableInterfaceLayerProcessor_getLayerManager
#define CollidableInterfaceLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef CollidableInterfaceLayerProcessor_process
#define CollidableInterfaceLayerProcessor_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableInterfaceLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableInterfaceLayerProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_LAYER_COLLIDABLEINTERFACELAYERPROCESSOR_H
