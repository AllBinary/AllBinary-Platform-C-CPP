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
#include "org/allbinary/game/collision/CollisionProcessor.h"

typedef struct CollisionThreedProcessor CollisionThreedProcessor;
struct CollisionThreedProcessor {
    CollisionProcessor base;
};


CollisionThreedProcessor* CollisionThreedProcessor_new(void);
bool CollisionThreedProcessor_isCollision(CollisionThreedProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

void CollisionThreedProcessor_init(CollisionThreedProcessor* this) {
    CollisionProcessor_init(&this->base);
}

CollisionThreedProcessor* CollisionThreedProcessor_new(void) {
    CollisionThreedProcessor* this = calloc(1, sizeof(CollisionThreedProcessor));
    CollisionThreedProcessor_init(this);
    return this;
}


bool CollisionThreedProcessor_isCollision(CollisionThreedProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        if (AllBinaryLayer_getXP(myLayer2) >= AllBinaryLayer_getX2(myLayer) || AllBinaryLayer_getYP(myLayer2) >= AllBinaryLayer_getY2(myLayer) || AllBinaryLayer_getX2(myLayer2) <= AllBinaryLayer_getXP(myLayer) || AllBinaryLayer_getY2(myLayer2) <= AllBinaryLayer_getYP(myLayer) || AllBinaryLayer_getZP(myLayer2) < AllBinaryLayer_getZ2(myLayer) || AllBinaryLayer_getZ2(myLayer2) > AllBinaryLayer_getZP(myLayer)) {
            return false;
        } else {
            return true;
        }
}

