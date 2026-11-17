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

typedef struct SpecialGameInputInterfaceProcessor SpecialGameInputInterfaceProcessor;
struct SpecialGameInputInterfaceProcessor {
    GameInputProcessor base;
    SpecialGameInputInterface* specialGameInputInterface;
};


SpecialGameInputInterfaceProcessor* SpecialGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialGameInputInterfaceProcessor_init(SpecialGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);

static void SpecialGameInputInterfaceProcessor_initFields(SpecialGameInputInterfaceProcessor* this) {
    
}


void SpecialGameInputInterfaceProcessor_init(SpecialGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    GameInputProcessor_init(&this->base);
    SpecialGameInputInterfaceProcessor_initFields(this);
        this->specialGameInputInterface = collidableDestroyableDamageableLayer;
}

SpecialGameInputInterfaceProcessor* SpecialGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialGameInputInterfaceProcessor* this = calloc(1, sizeof(SpecialGameInputInterfaceProcessor));
    SpecialGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}

