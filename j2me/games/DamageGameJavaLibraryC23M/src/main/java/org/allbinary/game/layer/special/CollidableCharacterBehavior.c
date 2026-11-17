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

typedef struct CollidableCharacterBehavior CollidableCharacterBehavior;
struct CollidableCharacterBehavior {
    CollidableDestroyableDamageableBehavior base;
};


CollidableCharacterBehavior* CollidableCharacterBehavior_new(bool collidable);

void CollidableCharacterBehavior_init(CollidableCharacterBehavior* this, bool collidable);
void CollidableCharacterBehavior_collide(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableCharacterBehavior_collideInterface(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);


void CollidableCharacterBehavior_init(CollidableCharacterBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
}

CollidableCharacterBehavior* CollidableCharacterBehavior_new(bool collidable) {
    CollidableCharacterBehavior* this = calloc(1, sizeof(CollidableCharacterBehavior));
    CollidableCharacterBehavior_init(this, collidable);
    return this;
}


// throws Exception
void CollidableCharacterBehavior_collide(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), getCollisionTypeWith, ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
            CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) ownerLayer);
            JAVA_CALL(CollidableDestroyableDamageableLayer_getPickupBehavior(collidableDestroyableDamageableLayer), doPickupLayer, ((PickedUpLayerInterface*) collidableInterfaceCompositeInterface));
        } else {
            CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collidableInterfaceCompositeInterface);
        }
}


// throws Exception
void CollidableCharacterBehavior_collideInterface(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}

