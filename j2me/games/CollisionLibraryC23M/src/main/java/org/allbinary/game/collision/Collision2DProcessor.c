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

typedef struct Collision2DProcessor Collision2DProcessor;
struct Collision2DProcessor {
    CollisionProcessor base;
};


Collision2DProcessor* Collision2DProcessor_new(void);
bool Collision2DProcessor_isCollision(Collision2DProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

void Collision2DProcessor_init(Collision2DProcessor* this) {
    CollisionProcessor_init(&this->base);
}

Collision2DProcessor* Collision2DProcessor_new(void) {
    Collision2DProcessor* this = calloc(1, sizeof(Collision2DProcessor));
    Collision2DProcessor_init(this);
    return this;
}


bool Collision2DProcessor_isCollision(Collision2DProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        if (AllBinaryLayer_getXP(myLayer2) >= AllBinaryLayer_getX2(myLayer) || AllBinaryLayer_getYP(myLayer2) >= AllBinaryLayer_getY2(myLayer) || AllBinaryLayer_getX2(myLayer2) <= AllBinaryLayer_getXP(myLayer) || AllBinaryLayer_getY2(myLayer2) <= AllBinaryLayer_getYP(myLayer)) {
            return false;
        } else {
            return true;
        }
}

