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
// package org.allbinary.game.layer.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/collision/CollidableHelperFactory.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionHelper.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct CollidableDamageWeaponBehavior CollidableDamageWeaponBehavior;
struct CollidableDamageWeaponBehavior {
    CollidableDestroyableDamageableBehavior base;
    bool collided;
    CollisionHelper* collisionHelper;
};


CollidableDamageWeaponBehavior* CollidableDamageWeaponBehavior_new(bool collidable);

void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, bool collidable);
void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface);
bool CollidableDamageWeaponBehavior_isCollision(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
void CollidableDamageWeaponBehavior_collide(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
bool CollidableDamageWeaponBehavior_isCollisionInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableDamageWeaponBehavior_collideInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
CollisionType* CollidableDamageWeaponBehavior_getCollisionTypeWith(CollidableDamageWeaponBehavior* this, AllBinaryLayer* layerInterface);
bool CollidableDamageWeaponBehavior_isCollided(CollidableDamageWeaponBehavior* this);
static void CollidableDamageWeaponBehavior_setCollided(CollidableDamageWeaponBehavior* this, bool collided);

static void CollidableDamageWeaponBehavior_initFields(CollidableDamageWeaponBehavior* this) {
    this->collided = false;
    
}


void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
        CollidableDamageWeaponBehavior_initFields(this);
        CollidableDamageWeaponBehavior_setCollided(this, false);
        CollidableDamageWeaponBehavior_setCollidable(this, true);
        this->collisionHelper = CollidableHelperFactory_getInstance();
}

CollidableDamageWeaponBehavior* CollidableDamageWeaponBehavior_new(bool collidable) {
    CollidableDamageWeaponBehavior* this = calloc(1, sizeof(CollidableDamageWeaponBehavior));
    CollidableDamageWeaponBehavior_init(this, collidable);
    return this;
}


void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface) {
        CollidableDamageWeaponBehavior_setCollided(this, false);
        CollisionHelper_setOwnerLayerInterface(this->collisionHelper, sourceLayerInterface);
}


bool CollidableDamageWeaponBehavior_isCollision(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (CollisionHelper_isCollidable(this->collisionHelper, collisionLayer)) {
            if (CollidableCompositeLayer_getGroupInterface(ownerLayer)[0] != CollidableCompositeLayer_getGroupInterface(collisionLayer)[0]) {
                return CollidableDestroyableDamageableBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
            }
        }
        return false;
}


// throws Exception
void CollidableDamageWeaponBehavior_collide(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collisionLayer);
        this->collided = true;
}


bool CollidableDamageWeaponBehavior_isCollisionInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        if (CollisionHelper_isCollidable(this->collisionHelper, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            AllBinaryLayer* layerInterface = ((AllBinaryLayer*) collidableInterfaceCompositeInterface);
            if (CollidableCompositeLayer_getGroupInterface(ownerLayer)[0] != AllBinaryLayer_getGroupInterface(layerInterface)[0]) {
                if (JAVA_CALL(this->layerCollisionUtil, isCollision, ownerLayer, layerInterface)) {
                    return true;
                }
            }
        }
        return false;
}


// throws Exception
void CollidableDamageWeaponBehavior_collideInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        JAVA_CALL(this->damageUtil, process, ((DamageableInterface*) ownerLayer), ((DamageableInterface*) collidableInterfaceCompositeInterface));
        this->collided = true;
}


CollisionType* CollidableDamageWeaponBehavior_getCollisionTypeWith(CollidableDamageWeaponBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->COLLISION;
}


bool CollidableDamageWeaponBehavior_isCollided(CollidableDamageWeaponBehavior* this) {
        return this->collided;
}


static void CollidableDamageWeaponBehavior_setCollided(CollidableDamageWeaponBehavior* this, bool collided) {
        this->collided = collided;
}

