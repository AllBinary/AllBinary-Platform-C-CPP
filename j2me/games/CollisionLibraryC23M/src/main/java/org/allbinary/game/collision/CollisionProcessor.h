#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H
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
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct CollisionProcessor CollisionProcessor;
struct CollisionProcessor {
    char unused;
};


CollisionProcessor* CollisionProcessor_new(void);
void CollisionProcessor_init(CollisionProcessor* this);

bool CollisionProcessor_isCollision(CollisionProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollisionProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollisionProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H
