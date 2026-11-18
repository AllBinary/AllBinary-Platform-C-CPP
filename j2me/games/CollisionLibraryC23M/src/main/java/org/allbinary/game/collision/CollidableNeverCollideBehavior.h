#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_H
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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"

typedef struct CollidableNeverCollideBehavior CollidableNeverCollideBehavior;
struct CollidableNeverCollideBehavior {
    CollidableBaseBehavior base;
};


CollidableNeverCollideBehavior* CollidableNeverCollideBehavior_new(bool isCollidable);

void CollidableNeverCollideBehavior_init(CollidableNeverCollideBehavior* this, bool isCollidable);

bool CollidableNeverCollideBehavior_isCollision(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);

void CollidableNeverCollideBehavior_collide(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);

void CollidableNeverCollideBehavior_collideInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

bool CollidableNeverCollideBehavior_isCollisionInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
#define CollidableNeverCollideBehavior_new1 CollidableNeverCollideBehavior_new
#define CollidableNeverCollideBehavior_init1 CollidableNeverCollideBehavior_init
#ifndef CollidableNeverCollideBehavior_update
#define CollidableNeverCollideBehavior_update CollidableBaseBehavior_update
#endif
#ifndef CollidableNeverCollideBehavior_getName
#define CollidableNeverCollideBehavior_getName CollidableBaseBehavior_getName
#endif
#ifndef CollidableNeverCollideBehavior_setCollidable
#define CollidableNeverCollideBehavior_setCollidable CollidableBaseBehavior_setCollidable
#endif
#ifndef CollidableNeverCollideBehavior_isCollidable
#define CollidableNeverCollideBehavior_isCollidable CollidableBaseBehavior_isCollidable
#endif
#ifndef CollidableNeverCollideBehavior_paint
#define CollidableNeverCollideBehavior_paint CollidableBaseBehavior_paint
#endif
#ifndef CollidableNeverCollideBehavior_getCollisionTypeWith
#define CollidableNeverCollideBehavior_getCollisionTypeWith CollidableBaseBehavior_getCollisionTypeWith
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableNeverCollideBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableNeverCollideBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_H
