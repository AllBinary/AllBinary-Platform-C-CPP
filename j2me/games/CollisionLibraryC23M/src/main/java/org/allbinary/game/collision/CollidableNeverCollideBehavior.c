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
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"

typedef struct CollidableNeverCollideBehavior CollidableNeverCollideBehavior;
struct CollidableNeverCollideBehavior {
    CollidableBaseBehavior base;
};


CollidableNeverCollideBehavior* CollidableNeverCollideBehavior_new(bool isCollidable);

void CollidableNeverCollideBehavior_init(CollidableNeverCollideBehavior* this, bool isCollidable);
bool CollidableNeverCollideBehavior_isCollision(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);
void CollidableNeverCollideBehavior_collide(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);
void CollidableNeverCollideBehavior_collideInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
bool CollidableNeverCollideBehavior_isCollisionInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);


void CollidableNeverCollideBehavior_init(CollidableNeverCollideBehavior* this, bool isCollidable) {
        CollidableBaseBehavior_init(&this->base, isCollidable);
}

CollidableNeverCollideBehavior* CollidableNeverCollideBehavior_new(bool isCollidable) {
    CollidableNeverCollideBehavior* this = calloc(1, sizeof(CollidableNeverCollideBehavior));
    CollidableNeverCollideBehavior_init(this, isCollidable);
    return this;
}


bool CollidableNeverCollideBehavior_isCollision(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) {
        return false;
}


// throws Exception
void CollidableNeverCollideBehavior_collide(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) {
}


void CollidableNeverCollideBehavior_collideInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
}


bool CollidableNeverCollideBehavior_isCollisionInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        return false;
}

