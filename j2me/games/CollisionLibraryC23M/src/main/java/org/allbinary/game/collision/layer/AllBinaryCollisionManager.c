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
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/LayerManager.h"

typedef struct AllBinaryCollisionManager AllBinaryCollisionManager;
struct AllBinaryCollisionManager {
    char unused;
};

static AllBinaryCollisionManager* AllBinaryCollisionManager_allBinaryCollisionManager;

AllBinaryCollisionManager* AllBinaryCollisionManager_new(void);

void AllBinaryCollisionManager_init(AllBinaryCollisionManager* this);
AllBinaryCollisionManager* AllBinaryCollisionManager_getInstance(void);
void AllBinaryCollisionManager_process(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex);
static void AllBinaryCollisionManager_collide(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2);

// Static fields with runtime initializers: call this once at startup
void AllBinaryCollisionManager_staticInit(void) {
    AllBinaryCollisionManager_allBinaryCollisionManager = AllBinaryCollisionManager_new();
}


void AllBinaryCollisionManager_init(AllBinaryCollisionManager* this) {
}

AllBinaryCollisionManager* AllBinaryCollisionManager_new(void) {
    AllBinaryCollisionManager* this = calloc(1, sizeof(AllBinaryCollisionManager));
    AllBinaryCollisionManager_init(this);
    return this;
}


AllBinaryCollisionManager* AllBinaryCollisionManager_getInstance(void) {
        return AllBinaryCollisionManager_allBinaryCollisionManager;
}


// throws Exception
void AllBinaryCollisionManager_process(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex) {
        int32_t size = LayerManager_getSize(layerManager);
        for (int32_t index = startIndex + 1; index < size; index++) {
            CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2 = ((CollidableInterfaceCompositeInterface*) LayerManager_getLayerAt(layerManager, index));
            AllBinaryCollisionManager_collide(this, layerManager, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
        }
}


// throws Exception
static void AllBinaryCollisionManager_collide(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2) {
        CollidableBaseBehavior* collidableBase2 = CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface2);
        CollidableBaseBehavior* collidableBase = CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface);
        if (CollidableBaseBehavior_isCollidable(collidableBase2, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            if (CollidableBaseBehavior_isCollisionInterface(collidableBase, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2)) {
                CollidableBaseBehavior_collideInterface(collidableBase, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2);
                CollidableBaseBehavior_collideInterface(collidableBase2, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface);
            }
        }
}

