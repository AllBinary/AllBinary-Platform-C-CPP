#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H
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
typedef struct CollisionType CollisionType;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct NamedInterface NamedInterface;
#include "org/allbinary/layer/NamedInterface.h"

typedef struct CollidableInterface CollidableInterface;
struct CollidableInterface {
    bool (*isCollidable)(void* this, CollidableCompositeLayer* ownerLayer);
    bool (*isCollision)(void* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
    void (*collide)(void* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
    CollisionType* (*getCollisionTypeWith)(void* this, AllBinaryLayer* layerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableInterface_staticInit(void);

static inline bool CollidableInterface_isCollidable(void* this, CollidableCompositeLayer* ownerLayer) {
    return ((__typeof__(((CollidableInterface*) nullptr)->isCollidable)) java_method_of(this, "isCollidable"))(this, ownerLayer);
}

static inline bool CollidableInterface_isCollision(void* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
    return ((__typeof__(((CollidableInterface*) nullptr)->isCollision)) java_method_of(this, "isCollision"))(this, ownerLayer, collidableInterfaceCompositeInterface);
}

static inline void CollidableInterface_collide(void* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
    ((__typeof__(((CollidableInterface*) nullptr)->collide)) java_method_of(this, "collide"))(this, ownerLayer, collidableInterfaceCompositeInterface);
}

static inline CollisionType* CollidableInterface_getCollisionTypeWith(void* this, AllBinaryLayer* layerInterface) {
    return ((__typeof__(((CollidableInterface*) nullptr)->getCollisionTypeWith)) java_method_of(this, "getCollisionTypeWith"))(this, layerInterface);
}
#define CollidableInterface_getName NamedInterface_getName


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H
