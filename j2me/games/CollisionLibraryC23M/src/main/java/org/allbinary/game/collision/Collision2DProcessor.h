#ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H
#define ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H
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

typedef struct Collision2DProcessor Collision2DProcessor;
struct Collision2DProcessor {
    CollisionProcessor base;
};


Collision2DProcessor* Collision2DProcessor_new(void);
void Collision2DProcessor_init(Collision2DProcessor* this);

bool Collision2DProcessor_isCollision(Collision2DProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Collision2DProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Collision2DProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H
