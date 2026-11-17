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
// package org.allbinary.game.combat.destroy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"

typedef struct DestroyableSimpleBehavior DestroyableSimpleBehavior;
struct DestroyableSimpleBehavior {
    DestroyableBaseBehavior base;
    CollidableCompositeLayer* ownerLayer;
    bool destroyed;
};


DestroyableSimpleBehavior* DestroyableSimpleBehavior_new(CollidableCompositeLayer* ownerLayer);

void DestroyableSimpleBehavior_init(DestroyableSimpleBehavior* this, CollidableCompositeLayer* ownerLayer);
bool DestroyableSimpleBehavior_isDestroyed(DestroyableSimpleBehavior* this);
void DestroyableSimpleBehavior_setDestroyed(DestroyableSimpleBehavior* this, bool destroyed);

static void DestroyableSimpleBehavior_initFields(DestroyableSimpleBehavior* this) {
    
    this->destroyed = false;
}


void DestroyableSimpleBehavior_init(DestroyableSimpleBehavior* this, CollidableCompositeLayer* ownerLayer) {
    DestroyableBaseBehavior_init(&this->base);
    DestroyableSimpleBehavior_initFields(this);
        this->ownerLayer = ownerLayer;
}

DestroyableSimpleBehavior* DestroyableSimpleBehavior_new(CollidableCompositeLayer* ownerLayer) {
    DestroyableSimpleBehavior* this = calloc(1, sizeof(DestroyableSimpleBehavior));
    DestroyableSimpleBehavior_init(this, ownerLayer);
    return this;
}


bool DestroyableSimpleBehavior_isDestroyed(DestroyableSimpleBehavior* this) {
        return this->destroyed;
}


void DestroyableSimpleBehavior_setDestroyed(DestroyableSimpleBehavior* this, bool destroyed) {
        this->destroyed = destroyed;
        if (DestroyableSimpleBehavior_isDestroyed(this)) {
            DestroyedLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this->ownerLayer);
        }
}

