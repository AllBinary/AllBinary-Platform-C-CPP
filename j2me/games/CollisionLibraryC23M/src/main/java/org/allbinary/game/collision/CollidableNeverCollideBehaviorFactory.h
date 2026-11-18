#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_H
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
typedef struct CollidableNeverCollideBehavior CollidableNeverCollideBehavior;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#if __has_include("org/allbinary/game/collision/CollidableNeverCollideBehavior.h")
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#endif

typedef struct CollidableNeverCollideBehaviorFactory CollidableNeverCollideBehaviorFactory;
struct CollidableNeverCollideBehaviorFactory {
    CollidableBaseBehaviorFactory base;
    CollidableNeverCollideBehavior* instance;
};


CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_new(void);
void CollidableNeverCollideBehaviorFactory_init(CollidableNeverCollideBehaviorFactory* this);

CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_getInstance(void);

CollidableBaseBehavior* CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollidableNeverCollideBehaviorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollidableNeverCollideBehaviorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_H
