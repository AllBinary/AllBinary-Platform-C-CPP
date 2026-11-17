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
// package org.allbinary.game.layer.special

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
#include "org/allbinary/game/combat/damage/DamageUtil.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"

typedef struct CollidableDestroyableDamageableBehavior CollidableDestroyableDamageableBehavior;
struct CollidableDestroyableDamageableBehavior {
    CollidableBaseBehavior base;
    DamageUtil* damageUtil;
};


CollidableDestroyableDamageableBehavior* CollidableDestroyableDamageableBehavior_new(bool collidable);

void CollidableDestroyableDamageableBehavior_init(CollidableDestroyableDamageableBehavior* this, bool collidable);
bool CollidableDestroyableDamageableBehavior_isCollision(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
void CollidableDestroyableDamageableBehavior_collide(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
bool CollidableDestroyableDamageableBehavior_isCollisionInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableDestroyableDamageableBehavior_collideInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

static void CollidableDestroyableDamageableBehavior_initFields(CollidableDestroyableDamageableBehavior* this) {
    this->damageUtil = DamageUtil_getInstance();
}


void CollidableDestroyableDamageableBehavior_init(CollidableDestroyableDamageableBehavior* this, bool collidable) {
        CollidableBaseBehavior_init(&this->base, collidable);
        CollidableDestroyableDamageableBehavior_initFields(this);
}

CollidableDestroyableDamageableBehavior* CollidableDestroyableDamageableBehavior_new(bool collidable) {
    CollidableDestroyableDamageableBehavior* this = calloc(1, sizeof(CollidableDestroyableDamageableBehavior));
    CollidableDestroyableDamageableBehavior_init(this, collidable);
    return this;
}


bool CollidableDestroyableDamageableBehavior_isCollision(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (CollidableCompositeLayer_getGroupInterface(ownerLayer)[0] != CollidableCompositeLayer_getGroupInterface(collisionLayer)[0]) {
            return CollidableBaseBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
        }
        return false;
}


// throws Exception
void CollidableDestroyableDamageableBehavior_collide(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollidableDestroyableDamageableLayer* ownerCollidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) ownerLayer);
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) collidableInterfaceCompositeInterface);
        CollidableDestroyableDamageableLayer_damage(ownerCollidableDestroyableDamageableLayer, CollidableDestroyableDamageableLayer_getDamage(collidableDestroyableDamageableLayer, 0), 0);
}


bool CollidableDestroyableDamageableBehavior_isCollisionInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log("No Longer Used", this);
        return false;
}


// throws Exception
void CollidableDestroyableDamageableBehavior_collideInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log("No Longer Used", this);
}

