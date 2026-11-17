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
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct CollidableInterfaceLayerProcessor CollidableInterfaceLayerProcessor;
struct CollidableInterfaceLayerProcessor {
    LayerProcessor base;
};


CollidableInterfaceLayerProcessor* CollidableInterfaceLayerProcessor_new(void);

void CollidableInterfaceLayerProcessor_init(CollidableInterfaceLayerProcessor* this);
void CollidableInterfaceLayerProcessor_processAt(CollidableInterfaceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool CollidableInterfaceLayerProcessor_isProcessorLayer(CollidableInterfaceLayerProcessor* this, AllBinaryLayer* layerInterface);


void CollidableInterfaceLayerProcessor_init(CollidableInterfaceLayerProcessor* this) {
        LayerProcessor_init(&this->base, CollidableInterfaceLayerManager_new());
}

CollidableInterfaceLayerProcessor* CollidableInterfaceLayerProcessor_new(void) {
    CollidableInterfaceLayerProcessor* this = calloc(1, sizeof(CollidableInterfaceLayerProcessor));
    CollidableInterfaceLayerProcessor_init(this);
    return this;
}


// throws Exception
void CollidableInterfaceLayerProcessor_processAt(CollidableInterfaceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface = ((CollidableInterfaceCompositeInterface*) layerInterface);
        if (JAVA_CALL(CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface), isCollidable, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            AllBinaryCollisionManager_process(AllBinaryCollisionManager_getInstance(), CollidableInterfaceLayerProcessor_getLayerManager(this), collidableInterfaceCompositeInterface, index);
        }
}


bool CollidableInterfaceLayerProcessor_isProcessorLayer(CollidableInterfaceLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsCollidableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

