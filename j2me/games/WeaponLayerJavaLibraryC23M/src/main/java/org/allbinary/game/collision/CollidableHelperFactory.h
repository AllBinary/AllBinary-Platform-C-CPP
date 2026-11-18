#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEHELPERFACTORY_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEHELPERFACTORY_H
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
typedef struct SourceCollisionHelper SourceCollisionHelper;
typedef struct CollisionHelper CollisionHelper;
typedef struct Features Features;
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct CollidableHelperFactory CollidableHelperFactory;
struct CollidableHelperFactory {
    char unused;
};


CollidableHelperFactory* CollidableHelperFactory_new(void);
void CollidableHelperFactory_init(CollidableHelperFactory* this);

CollisionHelper* CollidableHelperFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableHelperFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableHelperFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEHELPERFACTORY_H
