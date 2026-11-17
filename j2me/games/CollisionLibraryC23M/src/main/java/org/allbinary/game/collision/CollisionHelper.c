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

typedef struct CollisionHelper CollisionHelper;
struct CollisionHelper {
    AllBinaryLayer* sourceLayerInterface;
};


CollisionHelper* CollisionHelper_new(AllBinaryLayer* sourceLayerInterface);

void CollisionHelper_init(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface);
bool CollisionHelper_isCollidable(CollisionHelper* this, CollidableCompositeLayer* layerInterface);
AllBinaryLayer* CollisionHelper_getOwnerLayerInterface(CollisionHelper* this);
void CollisionHelper_setOwnerLayerInterface(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface);

static void CollisionHelper_initFields(CollisionHelper* this) {
    
}


void CollisionHelper_init(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface) {
    CollisionHelper_initFields(this);
        this->sourceLayerInterface = sourceLayerInterface;
}

CollisionHelper* CollisionHelper_new(AllBinaryLayer* sourceLayerInterface) {
    CollisionHelper* this = calloc(1, sizeof(CollisionHelper));
    CollisionHelper_init(this, sourceLayerInterface);
    return this;
}


bool CollisionHelper_isCollidable(CollisionHelper* this, CollidableCompositeLayer* layerInterface) {
        return true;
}


AllBinaryLayer* CollisionHelper_getOwnerLayerInterface(CollisionHelper* this) {
        return this->sourceLayerInterface;
}


void CollisionHelper_setOwnerLayerInterface(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface) {
        this->sourceLayerInterface = sourceLayerInterface;
}

