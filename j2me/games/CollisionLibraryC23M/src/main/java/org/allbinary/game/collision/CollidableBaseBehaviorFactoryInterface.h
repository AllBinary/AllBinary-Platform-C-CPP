#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORYINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct CollidableBaseBehaviorFactoryInterface CollidableBaseBehaviorFactoryInterface;
struct CollidableBaseBehaviorFactoryInterface {
    CollidableBaseBehavior* (*createBehavior)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableBaseBehaviorFactoryInterface_staticInit(void);

static inline CollidableBaseBehavior* CollidableBaseBehaviorFactoryInterface_createBehavior(void* this) {
    return ((__typeof__(((CollidableBaseBehaviorFactoryInterface*) nullptr)->createBehavior)) java_method_of(this, "createBehavior"))(this);
}


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORYINTERFACE_H
