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

typedef struct Special3GameInputInterfaceProcessor Special3GameInputInterfaceProcessor;
struct Special3GameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


Special3GameInputInterfaceProcessor* Special3GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void Special3GameInputInterfaceProcessor_init(Special3GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);
void Special3GameInputInterfaceProcessor_processEvent(Special3GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void Special3GameInputInterfaceProcessor_init(Special3GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special3GameInputInterfaceProcessor* Special3GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special3GameInputInterfaceProcessor* this = calloc(1, sizeof(Special3GameInputInterfaceProcessor));
    Special3GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special3GameInputInterfaceProcessor_processEvent(Special3GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        JAVA_CALL(this->specialGameInputInterface, special3, allbinaryLayerManager, gameKeyEvent);
}

