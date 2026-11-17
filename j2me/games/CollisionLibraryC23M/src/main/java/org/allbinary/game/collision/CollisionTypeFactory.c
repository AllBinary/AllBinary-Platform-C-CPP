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

typedef struct CollisionTypeFactory CollisionTypeFactory;
struct CollisionTypeFactory {
    CollisionType* NONE;
    CollisionType* DAMAGE;
    CollisionType* PICKUP;
    CollisionType* COLLISION;
};

static CollisionTypeFactory* CollisionTypeFactory_SINGLETON;

CollisionTypeFactory* CollisionTypeFactory_new(void);
CollisionTypeFactory* CollisionTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CollisionTypeFactory_staticInit(void) {
    CollisionTypeFactory_SINGLETON = CollisionTypeFactory_new();
}

static void CollisionTypeFactory_initFields(CollisionTypeFactory* this) {
    this->NONE = CollisionType_new("None");
    this->DAMAGE = CollisionType_new("Damage");
    this->PICKUP = CollisionType_new("Pickup");
    this->COLLISION = CollisionType_new("Collision");
}

void CollisionTypeFactory_init(CollisionTypeFactory* this) {
    CollisionTypeFactory_initFields(this);
}

CollisionTypeFactory* CollisionTypeFactory_new(void) {
    CollisionTypeFactory* this = calloc(1, sizeof(CollisionTypeFactory));
    CollisionTypeFactory_init(this);
    return this;
}


CollisionTypeFactory* CollisionTypeFactory_getInstance(void) {
        return CollisionTypeFactory_SINGLETON;
}

