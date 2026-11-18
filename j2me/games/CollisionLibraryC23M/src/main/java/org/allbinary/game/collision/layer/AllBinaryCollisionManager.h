#ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
#define ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
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
// package org.allbinary.game.collision.layer

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
typedef struct LayerManager LayerManager;

typedef struct AllBinaryCollisionManager AllBinaryCollisionManager;
struct AllBinaryCollisionManager {
    char unused;
};


AllBinaryCollisionManager* AllBinaryCollisionManager_new(void);

void AllBinaryCollisionManager_init(AllBinaryCollisionManager* this);

AllBinaryCollisionManager* AllBinaryCollisionManager_getInstance(void);

void AllBinaryCollisionManager_process(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex);

#define AllBinaryCollisionManager_new0 AllBinaryCollisionManager_new
#define AllBinaryCollisionManager_init0 AllBinaryCollisionManager_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryCollisionManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryCollisionManager_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
