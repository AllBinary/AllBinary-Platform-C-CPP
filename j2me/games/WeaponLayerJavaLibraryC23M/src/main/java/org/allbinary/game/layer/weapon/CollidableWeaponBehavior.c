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
#include "org/allbinary/logic/NullUtil.h"

typedef struct CollidableWeaponBehavior CollidableWeaponBehavior;
struct CollidableWeaponBehavior {
    CollidableDestroyableDamageableBehavior base;
    bool collided;
    CollisionHelper* collisionHelper;
};

static Any* CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR;

CollidableWeaponBehavior* CollidableWeaponBehavior_new(bool collidable);
CollidableWeaponBehavior* CollidableWeaponBehavior_getNullInstance(void);

void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, bool collidable);
void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface);
bool CollidableWeaponBehavior_isCollision(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
void CollidableWeaponBehavior_collide(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
bool CollidableWeaponBehavior_isCollisionInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableWeaponBehavior_collideInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
CollisionType* CollidableWeaponBehavior_getCollisionTypeWith(CollidableWeaponBehavior* this, AllBinaryLayer* layerInterface);
bool CollidableWeaponBehavior_isCollided(CollidableWeaponBehavior* this);
static void CollidableWeaponBehavior_setCollided(CollidableWeaponBehavior* this, bool collided);

// Static fields with runtime initializers: call this once at startup
void CollidableWeaponBehavior_staticInit(void) {
    CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR = NullUtil_getInstance()->NULL_OBJECT;
}

static void CollidableWeaponBehavior_initFields(CollidableWeaponBehavior* this) {
    this->collided = false;
    
}


CollidableWeaponBehavior* CollidableWeaponBehavior_getNullInstance(void) {
        if (CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR = CollidableWeaponBehavior_new(false);
        }
        return ((CollidableWeaponBehavior*) CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR);
}


void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
        CollidableWeaponBehavior_initFields(this);
        CollidableWeaponBehavior_setCollided(this, false);
        CollidableWeaponBehavior_setCollidable(this, true);
        this->collisionHelper = CollidableHelperFactory_getInstance();
}

CollidableWeaponBehavior* CollidableWeaponBehavior_new(bool collidable) {
    CollidableWeaponBehavior* this = calloc(1, sizeof(CollidableWeaponBehavior));
    CollidableWeaponBehavior_init(this, collidable);
    return this;
}


void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface) {
        CollidableWeaponBehavior_setCollided(this, false);
        CollisionHelper_setOwnerLayerInterface(this->collisionHelper, sourceLayerInterface);
}


bool CollidableWeaponBehavior_isCollision(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (CollisionHelper_isCollidable(this->collisionHelper, collisionLayer)) {
            if (CollidableCompositeLayer_getGroupInterface(ownerLayer)[0] != CollidableCompositeLayer_getGroupInterface(collisionLayer)[0]) {
                return CollidableDestroyableDamageableBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
            }
        }
        return false;
}


// throws Exception
void CollidableWeaponBehavior_collide(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collisionLayer);
        this->collided = true;
}


bool CollidableWeaponBehavior_isCollisionInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
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
void CollidableWeaponBehavior_collideInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        DamageableInterface* ownerDamageableInterface = ((DamageableInterface*) ownerLayer);
        DamageableInterface* damageableInterface = ((DamageableInterface*) collidableInterfaceCompositeInterface);
        JAVA_CALL(this->damageUtil, process, ownerDamageableInterface, damageableInterface);
        this->collided = true;
}


CollisionType* CollidableWeaponBehavior_getCollisionTypeWith(CollidableWeaponBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->COLLISION;
}


bool CollidableWeaponBehavior_isCollided(CollidableWeaponBehavior* this) {
        return this->collided;
}


static void CollidableWeaponBehavior_setCollided(CollidableWeaponBehavior* this, bool collided) {
        this->collided = collided;
}

