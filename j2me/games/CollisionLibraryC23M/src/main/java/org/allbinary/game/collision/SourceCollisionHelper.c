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
#include "org/allbinary/game/collision/CollisionHelper.h"

typedef struct SourceCollisionHelper SourceCollisionHelper;
struct SourceCollisionHelper {
    CollisionHelper base;
};


SourceCollisionHelper* SourceCollisionHelper_new(AllBinaryLayer* layerInterface);

void SourceCollisionHelper_init(SourceCollisionHelper* this, AllBinaryLayer* layerInterface);
bool SourceCollisionHelper_isCollidable(SourceCollisionHelper* this, CollidableCompositeLayer* layerInterface);


void SourceCollisionHelper_init(SourceCollisionHelper* this, AllBinaryLayer* layerInterface) {
        CollisionHelper_init(&this->base, layerInterface);
}

SourceCollisionHelper* SourceCollisionHelper_new(AllBinaryLayer* layerInterface) {
    SourceCollisionHelper* this = calloc(1, sizeof(SourceCollisionHelper));
    SourceCollisionHelper_init(this, layerInterface);
    return this;
}


bool SourceCollisionHelper_isCollidable(SourceCollisionHelper* this, CollidableCompositeLayer* layerInterface) {
        if (this->sourceLayerInterface != layerInterface) {
            return true;
        }
        return false;
}

