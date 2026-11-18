#ifndef ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
#define ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
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
typedef struct CollisionHelper CollisionHelper;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/game/collision/CollisionHelper.h"

typedef struct SourceCollisionHelper SourceCollisionHelper;
struct SourceCollisionHelper {
    CollisionHelper base;
};


SourceCollisionHelper* SourceCollisionHelper_new(AllBinaryLayer* layerInterface);

void SourceCollisionHelper_init(SourceCollisionHelper* this, AllBinaryLayer* layerInterface);

bool SourceCollisionHelper_isCollidable(SourceCollisionHelper* this, CollidableCompositeLayer* layerInterface);
#define SourceCollisionHelper_new1 SourceCollisionHelper_new
#define SourceCollisionHelper_init1 SourceCollisionHelper_init
#ifndef SourceCollisionHelper_getOwnerLayerInterface
#define SourceCollisionHelper_getOwnerLayerInterface CollisionHelper_getOwnerLayerInterface
#endif
#ifndef SourceCollisionHelper_setOwnerLayerInterface
#define SourceCollisionHelper_setOwnerLayerInterface CollisionHelper_setOwnerLayerInterface
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SourceCollisionHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SourceCollisionHelper_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
