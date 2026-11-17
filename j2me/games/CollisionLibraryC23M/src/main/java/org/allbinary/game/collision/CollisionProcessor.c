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
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct CollisionProcessor CollisionProcessor;
struct CollisionProcessor {
    char unused;
};


CollisionProcessor* CollisionProcessor_new(void);
bool CollisionProcessor_isCollision(CollisionProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

void CollisionProcessor_init(CollisionProcessor* this) {
}

CollisionProcessor* CollisionProcessor_new(void) {
    CollisionProcessor* this = calloc(1, sizeof(CollisionProcessor));
    CollisionProcessor_init(this);
    return this;
}


bool CollisionProcessor_isCollision(CollisionProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        return false;
}

