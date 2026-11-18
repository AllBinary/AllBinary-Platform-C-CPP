#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIORFACTORY_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIORFACTORY_H
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
typedef struct CollidableBaseBehaviorFactory CollidableBaseBehaviorFactory;
typedef struct CollidableAlwaysPickupNeverCollideBehavior CollidableAlwaysPickupNeverCollideBehavior;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#if __has_include("org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehavior.h")
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehavior.h"
#endif

typedef struct CollidableAlwaysPickupNeverCollideBehaviorFactory CollidableAlwaysPickupNeverCollideBehaviorFactory;
struct CollidableAlwaysPickupNeverCollideBehaviorFactory {
    CollidableBaseBehaviorFactory base;
    CollidableAlwaysPickupNeverCollideBehavior* instance;
};


CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_new(void);
void CollidableAlwaysPickupNeverCollideBehaviorFactory_init(CollidableAlwaysPickupNeverCollideBehaviorFactory* this);

CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance(void);

CollidableBaseBehavior* CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableAlwaysPickupNeverCollideBehaviorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableAlwaysPickupNeverCollideBehaviorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIORFACTORY_H
