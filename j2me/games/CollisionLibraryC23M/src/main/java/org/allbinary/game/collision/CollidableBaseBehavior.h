#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H
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
typedef struct CollidableInterface CollidableInterface;
typedef struct LayerCollisionUtil LayerCollisionUtil;
typedef struct CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface;
typedef struct CollisionTypeFactory CollisionTypeFactory;
typedef struct CollisionType CollisionType;
typedef struct Graphics Graphics;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/game/collision/CollidableInterface.h"
#if __has_include("org/allbinary/game/collision/LayerCollisionUtil.h")
#include "org/allbinary/game/collision/LayerCollisionUtil.h"
#endif

typedef struct CollidableBaseBehavior CollidableBaseBehavior;
struct CollidableBaseBehavior {
    CollidableInterface CollidableInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    LayerCollisionUtil* layerCollisionUtil;
    bool collidable;
};


CollidableBaseBehavior* CollidableBaseBehavior_new(bool collidable);

void CollidableBaseBehavior_init(CollidableBaseBehavior* this, bool collidable);

void CollidableBaseBehavior_update(CollidableBaseBehavior* this);

const char* CollidableBaseBehavior_getName(CollidableBaseBehavior* this);

void CollidableBaseBehavior_setCollidable(CollidableBaseBehavior* this, bool collidable);

bool CollidableBaseBehavior_isCollidable(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer);

void CollidableBaseBehavior_collide(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);

bool CollidableBaseBehavior_isCollision(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

bool CollidableBaseBehavior_isCollisionInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

void CollidableBaseBehavior_collideInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

void CollidableBaseBehavior_paint(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, Graphics* graphics);

CollisionType* CollidableBaseBehavior_getCollisionTypeWith(CollidableBaseBehavior* this, AllBinaryLayer* layerInterface);
#define CollidableBaseBehavior_new1 CollidableBaseBehavior_new
#define CollidableBaseBehavior_init1 CollidableBaseBehavior_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableBaseBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableBaseBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H
