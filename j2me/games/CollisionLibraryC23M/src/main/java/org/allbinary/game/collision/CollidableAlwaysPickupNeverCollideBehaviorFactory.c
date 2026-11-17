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

typedef struct CollidableAlwaysPickupNeverCollideBehaviorFactory CollidableAlwaysPickupNeverCollideBehaviorFactory;
struct CollidableAlwaysPickupNeverCollideBehaviorFactory {
    CollidableBaseBehaviorFactory base;
    CollidableAlwaysPickupNeverCollideBehavior* instance;
};

static CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC;

CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_new(void);
CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance(void);
CollidableBaseBehavior* CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory* this);

// Static fields with runtime initializers: call this once at startup
void CollidableAlwaysPickupNeverCollideBehaviorFactory_staticInit(void) {
    CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC = CollidableAlwaysPickupNeverCollideBehaviorFactory_new();
}

static void CollidableAlwaysPickupNeverCollideBehaviorFactory_initFields(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
    this->instance = CollidableAlwaysPickupNeverCollideBehavior_new();
}

void CollidableAlwaysPickupNeverCollideBehaviorFactory_init(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
    CollidableBaseBehaviorFactory_init(&this->base);
    CollidableAlwaysPickupNeverCollideBehaviorFactory_initFields(this);
}

CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_new(void) {
    CollidableAlwaysPickupNeverCollideBehaviorFactory* this = calloc(1, sizeof(CollidableAlwaysPickupNeverCollideBehaviorFactory));
    CollidableAlwaysPickupNeverCollideBehaviorFactory_init(this);
    return this;
}


CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance(void) {
        return CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC;
}


CollidableBaseBehavior* CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
        return this->instance;
}

