#ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H
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
typedef struct CollidableHelperFactory CollidableHelperFactory;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct CollisionHelper CollisionHelper;
typedef struct CollisionType CollisionType;
typedef struct CollisionTypeFactory CollisionTypeFactory;
typedef struct DamageableInterface DamageableInterface;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct CollidableDestroyableDamageableBehavior CollidableDestroyableDamageableBehavior;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/game/collision/CollisionHelper.h")
#include "org/allbinary/game/collision/CollisionHelper.h"
#endif
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"

typedef struct CollidableDamageWeaponBehavior CollidableDamageWeaponBehavior;
struct CollidableDamageWeaponBehavior {
    CollidableDestroyableDamageableBehavior base;
    bool collided;
    CollisionHelper* collisionHelper;
};


CollidableDamageWeaponBehavior* CollidableDamageWeaponBehavior_new(bool collidable);

void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, bool collidable);

void CollidableDamageWeaponBehavior_initMethod(CollidableDamageWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface);

bool CollidableDamageWeaponBehavior_isCollision(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

void CollidableDamageWeaponBehavior_collide(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

bool CollidableDamageWeaponBehavior_isCollisionInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

void CollidableDamageWeaponBehavior_collideInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

CollisionType* CollidableDamageWeaponBehavior_getCollisionTypeWith(CollidableDamageWeaponBehavior* this, AllBinaryLayer* layerInterface);

bool CollidableDamageWeaponBehavior_isCollided(CollidableDamageWeaponBehavior* this);

#define CollidableDamageWeaponBehavior_new1 CollidableDamageWeaponBehavior_new
#define CollidableDamageWeaponBehavior_init1 CollidableDamageWeaponBehavior_init
#ifndef CollidableDamageWeaponBehavior_update
#define CollidableDamageWeaponBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableDamageWeaponBehavior_getName
#define CollidableDamageWeaponBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableDamageWeaponBehavior_setCollidable
#define CollidableDamageWeaponBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableDamageWeaponBehavior_isCollidable
#define CollidableDamageWeaponBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableDamageWeaponBehavior_paint
#define CollidableDamageWeaponBehavior_paint CollidableBaseBehavior_paint
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableDamageWeaponBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableDamageWeaponBehavior_register(void);

#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H
