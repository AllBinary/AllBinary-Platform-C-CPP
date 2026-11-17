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
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"

typedef struct CollidableNeverCollideBehaviorFactory CollidableNeverCollideBehaviorFactory;
struct CollidableNeverCollideBehaviorFactory {
    CollidableBaseBehaviorFactory base;
    CollidableNeverCollideBehavior* instance;
};

static CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_instanceC;

CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_new(void);
CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_getInstance(void);
CollidableBaseBehavior* CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory* this);

// Static fields with runtime initializers: call this once at startup
void CollidableNeverCollideBehaviorFactory_staticInit(void) {
    CollidableNeverCollideBehaviorFactory_instanceC = CollidableNeverCollideBehaviorFactory_new();
}

static void CollidableNeverCollideBehaviorFactory_initFields(CollidableNeverCollideBehaviorFactory* this) {
    this->instance = CollidableNeverCollideBehavior_new(false);
}

void CollidableNeverCollideBehaviorFactory_init(CollidableNeverCollideBehaviorFactory* this) {
    CollidableBaseBehaviorFactory_init(&this->base);
    CollidableNeverCollideBehaviorFactory_initFields(this);
}

CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_new(void) {
    CollidableNeverCollideBehaviorFactory* this = calloc(1, sizeof(CollidableNeverCollideBehaviorFactory));
    CollidableNeverCollideBehaviorFactory_init(this);
    return this;
}


CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_getInstance(void) {
        return CollidableNeverCollideBehaviorFactory_instanceC;
}


CollidableBaseBehavior* CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory* this) {
        return this->instance;
}

