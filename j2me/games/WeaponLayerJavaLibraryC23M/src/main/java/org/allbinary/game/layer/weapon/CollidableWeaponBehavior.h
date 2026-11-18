#ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H
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
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/game/collision/CollisionHelper.h")
#include "org/allbinary/game/collision/CollisionHelper.h"
#endif
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"

typedef struct CollidableWeaponBehavior CollidableWeaponBehavior;
struct CollidableWeaponBehavior {
    CollidableDestroyableDamageableBehavior base;
    bool collided;
    CollisionHelper* collisionHelper;
};


CollidableWeaponBehavior* CollidableWeaponBehavior_new(bool collidable);

CollidableWeaponBehavior* CollidableWeaponBehavior_getNullInstance(void);

void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, bool collidable);

void CollidableWeaponBehavior_initMethod(CollidableWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface);

bool CollidableWeaponBehavior_isCollision(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

void CollidableWeaponBehavior_collide(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

bool CollidableWeaponBehavior_isCollisionInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

void CollidableWeaponBehavior_collideInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

CollisionType* CollidableWeaponBehavior_getCollisionTypeWith(CollidableWeaponBehavior* this, AllBinaryLayer* layerInterface);

bool CollidableWeaponBehavior_isCollided(CollidableWeaponBehavior* this);

#define CollidableWeaponBehavior_new1 CollidableWeaponBehavior_new
#define CollidableWeaponBehavior_init1 CollidableWeaponBehavior_init
#ifndef CollidableWeaponBehavior_update
#define CollidableWeaponBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableWeaponBehavior_getName
#define CollidableWeaponBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableWeaponBehavior_setCollidable
#define CollidableWeaponBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableWeaponBehavior_isCollidable
#define CollidableWeaponBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableWeaponBehavior_paint
#define CollidableWeaponBehavior_paint CollidableBaseBehavior_paint
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableWeaponBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableWeaponBehavior_register(void);

#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H
