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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct SpecialGameInputProcessor SpecialGameInputProcessor;
struct SpecialGameInputProcessor {
    GameInputProcessor base;
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer;
};


SpecialGameInputProcessor* SpecialGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialGameInputProcessor_init(SpecialGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

static void SpecialGameInputProcessor_initFields(SpecialGameInputProcessor* this) {
    
}


void SpecialGameInputProcessor_init(SpecialGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    GameInputProcessor_init(&this->base);
    SpecialGameInputProcessor_initFields(this);
        this->collidableDestroyableDamageableLayer = collidableDestroyableDamageableLayer;
}

SpecialGameInputProcessor* SpecialGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialGameInputProcessor* this = calloc(1, sizeof(SpecialGameInputProcessor));
    SpecialGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}

