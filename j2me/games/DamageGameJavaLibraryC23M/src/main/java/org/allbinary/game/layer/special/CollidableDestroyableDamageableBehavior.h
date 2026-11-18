#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
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
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct DamageUtil DamageUtil;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct ForcedLogUtil ForcedLogUtil;
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#if __has_include("org/allbinary/game/combat/damage/DamageUtil.h")
#include "org/allbinary/game/combat/damage/DamageUtil.h"
#endif

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
#define CollidableDestroyableDamageableBehavior_new1 CollidableDestroyableDamageableBehavior_new
#define CollidableDestroyableDamageableBehavior_init1 CollidableDestroyableDamageableBehavior_init
#ifndef CollidableDestroyableDamageableBehavior_update
#define CollidableDestroyableDamageableBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableDestroyableDamageableBehavior_getName
#define CollidableDestroyableDamageableBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableDestroyableDamageableBehavior_setCollidable
#define CollidableDestroyableDamageableBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableDestroyableDamageableBehavior_isCollidable
#define CollidableDestroyableDamageableBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableDestroyableDamageableBehavior_paint
#define CollidableDestroyableDamageableBehavior_paint CollidableBaseBehavior_paint
#endif
#ifndef CollidableDestroyableDamageableBehavior_getCollisionTypeWith
#define CollidableDestroyableDamageableBehavior_getCollisionTypeWith CollidableBaseBehavior_getCollisionTypeWith
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableDestroyableDamageableBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableDestroyableDamageableBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
