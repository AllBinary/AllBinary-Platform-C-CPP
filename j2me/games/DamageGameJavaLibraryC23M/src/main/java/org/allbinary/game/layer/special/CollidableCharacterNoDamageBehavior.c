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
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"

typedef struct CollidableCharacterNoDamageBehavior CollidableCharacterNoDamageBehavior;
struct CollidableCharacterNoDamageBehavior {
    CollidableDestroyableDamageableBehavior base;
};


CollidableCharacterNoDamageBehavior* CollidableCharacterNoDamageBehavior_new(bool collidable);

void CollidableCharacterNoDamageBehavior_init(CollidableCharacterNoDamageBehavior* this, bool collidable);
void CollidableCharacterNoDamageBehavior_collide(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableCharacterNoDamageBehavior_collideInterface(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);


void CollidableCharacterNoDamageBehavior_init(CollidableCharacterNoDamageBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
}

CollidableCharacterNoDamageBehavior* CollidableCharacterNoDamageBehavior_new(bool collidable) {
    CollidableCharacterNoDamageBehavior* this = calloc(1, sizeof(CollidableCharacterNoDamageBehavior));
    CollidableCharacterNoDamageBehavior_init(this, collidable);
    return this;
}


// throws Exception
void CollidableCharacterNoDamageBehavior_collide(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), getCollisionTypeWith, ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
            CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) ownerLayer);
            JAVA_CALL(CollidableDestroyableDamageableLayer_getPickupBehavior(collidableDestroyableDamageableLayer), doPickupLayer, ((PickedUpLayerInterface*) collidableInterfaceCompositeInterface));
        } else {
        }
}


// throws Exception
void CollidableCharacterNoDamageBehavior_collideInterface(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}

