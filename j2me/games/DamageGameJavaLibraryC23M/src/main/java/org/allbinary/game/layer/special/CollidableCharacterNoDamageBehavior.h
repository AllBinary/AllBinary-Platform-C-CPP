#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERNODAMAGEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERNODAMAGEBEHAVIOR_H
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
typedef struct CollidableDestroyableDamageableBehavior CollidableDestroyableDamageableBehavior;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct CollisionType CollisionType;
typedef struct CollisionTypeFactory CollisionTypeFactory;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct PickedUpLayerInterface PickedUpLayerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"

typedef struct CollidableCharacterNoDamageBehavior CollidableCharacterNoDamageBehavior;
struct CollidableCharacterNoDamageBehavior {
    CollidableDestroyableDamageableBehavior base;
};


CollidableCharacterNoDamageBehavior* CollidableCharacterNoDamageBehavior_new(bool collidable);

void CollidableCharacterNoDamageBehavior_init(CollidableCharacterNoDamageBehavior* this, bool collidable);

void CollidableCharacterNoDamageBehavior_collide(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

void CollidableCharacterNoDamageBehavior_collideInterface(CollidableCharacterNoDamageBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
#define CollidableCharacterNoDamageBehavior_new1 CollidableCharacterNoDamageBehavior_new
#define CollidableCharacterNoDamageBehavior_init1 CollidableCharacterNoDamageBehavior_init
#ifndef CollidableCharacterNoDamageBehavior_isCollision
#define CollidableCharacterNoDamageBehavior_isCollision CollidableDestroyableDamageableBehavior_isCollision
#endif
#ifndef CollidableCharacterNoDamageBehavior_isCollisionInterface
#define CollidableCharacterNoDamageBehavior_isCollisionInterface CollidableDestroyableDamageableBehavior_isCollisionInterface
#endif
#ifndef CollidableCharacterNoDamageBehavior_update
#define CollidableCharacterNoDamageBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableCharacterNoDamageBehavior_getName
#define CollidableCharacterNoDamageBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableCharacterNoDamageBehavior_setCollidable
#define CollidableCharacterNoDamageBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableCharacterNoDamageBehavior_isCollidable
#define CollidableCharacterNoDamageBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableCharacterNoDamageBehavior_isCollision
#define CollidableCharacterNoDamageBehavior_isCollision CollidableBaseBehavior_isCollision
#endif
#ifndef CollidableCharacterNoDamageBehavior_isCollisionInterface
#define CollidableCharacterNoDamageBehavior_isCollisionInterface CollidableBaseBehavior_isCollisionInterface
#endif
#ifndef CollidableCharacterNoDamageBehavior_paint
#define CollidableCharacterNoDamageBehavior_paint CollidableBaseBehavior_paint
#endif
#ifndef CollidableCharacterNoDamageBehavior_getCollisionTypeWith
#define CollidableCharacterNoDamageBehavior_getCollisionTypeWith CollidableBaseBehavior_getCollisionTypeWith
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableCharacterNoDamageBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableCharacterNoDamageBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERNODAMAGEBEHAVIOR_H
