#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_H
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

typedef struct CollidableCharacterBehavior CollidableCharacterBehavior;
struct CollidableCharacterBehavior {
    CollidableDestroyableDamageableBehavior base;
};


CollidableCharacterBehavior* CollidableCharacterBehavior_new(bool collidable);

void CollidableCharacterBehavior_init(CollidableCharacterBehavior* this, bool collidable);

void CollidableCharacterBehavior_collide(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

void CollidableCharacterBehavior_collideInterface(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
#define CollidableCharacterBehavior_new1 CollidableCharacterBehavior_new
#define CollidableCharacterBehavior_init1 CollidableCharacterBehavior_init
#ifndef CollidableCharacterBehavior_isCollision
#define CollidableCharacterBehavior_isCollision CollidableDestroyableDamageableBehavior_isCollision
#endif
#ifndef CollidableCharacterBehavior_isCollisionInterface
#define CollidableCharacterBehavior_isCollisionInterface CollidableDestroyableDamageableBehavior_isCollisionInterface
#endif
#ifndef CollidableCharacterBehavior_update
#define CollidableCharacterBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableCharacterBehavior_getName
#define CollidableCharacterBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableCharacterBehavior_setCollidable
#define CollidableCharacterBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableCharacterBehavior_isCollidable
#define CollidableCharacterBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableCharacterBehavior_isCollision
#define CollidableCharacterBehavior_isCollision CollidableBaseBehavior_isCollision
#endif
#ifndef CollidableCharacterBehavior_isCollisionInterface
#define CollidableCharacterBehavior_isCollisionInterface CollidableBaseBehavior_isCollisionInterface
#endif
#ifndef CollidableCharacterBehavior_paint
#define CollidableCharacterBehavior_paint CollidableBaseBehavior_paint
#endif
#ifndef CollidableCharacterBehavior_getCollisionTypeWith
#define CollidableCharacterBehavior_getCollisionTypeWith CollidableBaseBehavior_getCollisionTypeWith
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableCharacterBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableCharacterBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_H
