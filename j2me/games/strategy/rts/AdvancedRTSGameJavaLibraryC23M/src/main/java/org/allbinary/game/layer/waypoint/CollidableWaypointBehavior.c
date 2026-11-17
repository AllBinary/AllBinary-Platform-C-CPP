/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/CollidableRTSBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"

typedef struct CollidableWaypointBehavior CollidableWaypointBehavior;
struct CollidableWaypointBehavior {
    CollidableRTSBehavior base;
};


CollidableWaypointBehavior* CollidableWaypointBehavior_new(bool collidable);

void CollidableWaypointBehavior_init(CollidableWaypointBehavior* this, bool collidable);
bool CollidableWaypointBehavior_isCollision(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
void CollidableWaypointBehavior_collide(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
bool CollidableWaypointBehavior_isCollisionInterface(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface);
void CollidableWaypointBehavior_collideInterface(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface);


void CollidableWaypointBehavior_init(CollidableWaypointBehavior* this, bool collidable) {
        CollidableRTSBehavior_init(&this->base, collidable);
}

CollidableWaypointBehavior* CollidableWaypointBehavior_new(bool collidable) {
    CollidableWaypointBehavior* this = calloc(1, sizeof(CollidableWaypointBehavior));
    CollidableWaypointBehavior_init(this, collidable);
    return this;
}


bool CollidableWaypointBehavior_isCollision(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        return false;
}


// throws Exception
void CollidableWaypointBehavior_collide(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
}


bool CollidableWaypointBehavior_isCollisionInterface(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface) {
        return false;
}


// throws Exception
void CollidableWaypointBehavior_collideInterface(CollidableWaypointBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface) {
}

