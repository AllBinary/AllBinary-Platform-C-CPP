#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONTHREEDPROCESSOR_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISIONTHREEDPROCESSOR_H
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
typedef struct CollisionProcessor CollisionProcessor;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/game/collision/CollisionProcessor.h"

typedef struct CollisionThreedProcessor CollisionThreedProcessor;
struct CollisionThreedProcessor {
    CollisionProcessor base;
};


CollisionThreedProcessor* CollisionThreedProcessor_new(void);
void CollisionThreedProcessor_init(CollisionThreedProcessor* this);

bool CollisionThreedProcessor_isCollision(CollisionThreedProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CollisionThreedProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CollisionThreedProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISIONTHREEDPROCESSOR_H
