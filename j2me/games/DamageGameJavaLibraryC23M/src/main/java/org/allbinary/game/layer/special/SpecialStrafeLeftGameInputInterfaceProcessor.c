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

typedef struct SpecialStrafeLeftGameInputInterfaceProcessor SpecialStrafeLeftGameInputInterfaceProcessor;
struct SpecialStrafeLeftGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialStrafeLeftGameInputInterfaceProcessor* SpecialStrafeLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeLeftGameInputInterfaceProcessor_init(SpecialStrafeLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);
void SpecialStrafeLeftGameInputInterfaceProcessor_processEvent(SpecialStrafeLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void SpecialStrafeLeftGameInputInterfaceProcessor_init(SpecialStrafeLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeLeftGameInputInterfaceProcessor* SpecialStrafeLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeLeftGameInputInterfaceProcessor* this = calloc(1, sizeof(SpecialStrafeLeftGameInputInterfaceProcessor));
    SpecialStrafeLeftGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeLeftGameInputInterfaceProcessor_processEvent(SpecialStrafeLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        JAVA_CALL(this->specialGameInputInterface, strafeLeft);
}

