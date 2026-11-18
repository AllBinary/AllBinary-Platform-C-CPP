#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H
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
#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

typedef struct CollisionTypeFactory CollisionTypeFactory;
struct CollisionTypeFactory {
    CollisionType* NONE;
    CollisionType* DAMAGE;
    CollisionType* PICKUP;
    CollisionType* COLLISION;
};


CollisionTypeFactory* CollisionTypeFactory_new(void);
void CollisionTypeFactory_init(CollisionTypeFactory* this);

CollisionTypeFactory* CollisionTypeFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollisionTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollisionTypeFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H
