#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H
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
typedef struct CollidableBaseBehaviorFactoryInterface CollidableBaseBehaviorFactoryInterface;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h"

typedef struct CollidableBaseBehaviorFactory CollidableBaseBehaviorFactory;
struct CollidableBaseBehaviorFactory {
    CollidableBaseBehaviorFactoryInterface CollidableBaseBehaviorFactoryInterface_interface;
};


CollidableBaseBehaviorFactory* CollidableBaseBehaviorFactory_new(void);
void CollidableBaseBehaviorFactory_init(CollidableBaseBehaviorFactory* this);

CollidableBaseBehavior* CollidableBaseBehaviorFactory_createBehavior(CollidableBaseBehaviorFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableBaseBehaviorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableBaseBehaviorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H
