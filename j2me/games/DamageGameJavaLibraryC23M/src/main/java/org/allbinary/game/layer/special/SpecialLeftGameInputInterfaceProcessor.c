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
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"

typedef struct SpecialLeftGameInputInterfaceProcessor SpecialLeftGameInputInterfaceProcessor;
struct SpecialLeftGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialLeftGameInputInterfaceProcessor* SpecialLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialLeftGameInputInterfaceProcessor_init(SpecialLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);
void SpecialLeftGameInputInterfaceProcessor_processEvent(SpecialLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void SpecialLeftGameInputInterfaceProcessor_init(SpecialLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialLeftGameInputInterfaceProcessor* SpecialLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialLeftGameInputInterfaceProcessor* this = calloc(1, sizeof(SpecialLeftGameInputInterfaceProcessor));
    SpecialLeftGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialLeftGameInputInterfaceProcessor_processEvent(SpecialLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        JAVA_CALL(this->specialGameInputInterface, left);
}

