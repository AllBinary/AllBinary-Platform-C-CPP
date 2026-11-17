/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"

typedef struct CollidableRTSBehavior CollidableRTSBehavior;
struct CollidableRTSBehavior {
    CollidableDestroyableDamageableBehavior base;
};


CollidableRTSBehavior* CollidableRTSBehavior_new(bool collidable);

void CollidableRTSBehavior_init(CollidableRTSBehavior* this, bool collidable);
bool CollidableRTSBehavior_isCollision(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableRTSBehavior_collide(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableRTSBehavior_collideNone(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterface);


void CollidableRTSBehavior_init(CollidableRTSBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
}

CollidableRTSBehavior* CollidableRTSBehavior_new(bool collidable) {
    CollidableRTSBehavior* this = calloc(1, sizeof(CollidableRTSBehavior));
    CollidableRTSBehavior_init(this, collidable);
    return this;
}


bool CollidableRTSBehavior_isCollision(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), getCollisionTypeWith, ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
        } else if (collisionType == collisionTypeFactory->COLLISION) {
            return CollidableDestroyableDamageableBehavior_isCollision((&this->base), ownerLayer, collidableInterfaceCompositeInterface);
        } else {
            if (CollidableCompositeLayer_getX2(collidableInterfaceCompositeInterface) <= CollidableCompositeLayer_getXP(ownerLayer) || CollidableCompositeLayer_getY2(collidableInterfaceCompositeInterface) <= CollidableCompositeLayer_getYP(ownerLayer) || CollidableCompositeLayer_getYP(collidableInterfaceCompositeInterface) >= CollidableCompositeLayer_getY2(ownerLayer) || CollidableCompositeLayer_getXP(collidableInterfaceCompositeInterface) >= CollidableCompositeLayer_getX2(ownerLayer)) {
                return false;
            } else {
                return true;
            }
        }
        return false;
}


// throws Exception
void CollidableRTSBehavior_collide(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), getCollisionTypeWith, ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
        } else if (collisionType == collisionTypeFactory->COLLISION) {
            CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collidableInterfaceCompositeInterface);
        } else {
            CollidableRTSBehavior_collideNone(this, ownerLayer, collidableInterfaceCompositeInterface);
        }
}


// throws Exception
void CollidableRTSBehavior_collideNone(CollidableRTSBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterface) {
}

