#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPE_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPE_H
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
struct CollisionType {
    const char* name;
};


CollisionType* CollisionType_new(const char* name);

void CollisionType_init(CollisionType* this, const char* name);

const char* CollisionType_toString(CollisionType* this);
#define CollisionType_new1 CollisionType_new
#define CollisionType_init1 CollisionType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollisionType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollisionType_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPE_H
