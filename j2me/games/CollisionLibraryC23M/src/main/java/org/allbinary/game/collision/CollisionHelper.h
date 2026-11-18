#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H
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
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

typedef struct CollisionHelper CollisionHelper;
struct CollisionHelper {
    AllBinaryLayer* sourceLayerInterface;
};


CollisionHelper* CollisionHelper_new(AllBinaryLayer* sourceLayerInterface);

void CollisionHelper_init(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface);

bool CollisionHelper_isCollidable(CollisionHelper* this, CollidableCompositeLayer* layerInterface);

AllBinaryLayer* CollisionHelper_getOwnerLayerInterface(CollisionHelper* this);

void CollisionHelper_setOwnerLayerInterface(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface);
#define CollisionHelper_new1 CollisionHelper_new
#define CollisionHelper_init1 CollisionHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollisionHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollisionHelper_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H
