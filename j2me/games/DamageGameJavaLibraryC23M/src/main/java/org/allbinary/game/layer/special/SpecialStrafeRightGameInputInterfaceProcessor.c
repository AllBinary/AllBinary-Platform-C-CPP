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

typedef struct SpecialStrafeRightGameInputInterfaceProcessor SpecialStrafeRightGameInputInterfaceProcessor;
struct SpecialStrafeRightGameInputInterfaceProcessor {
    SpecialGameInputInterfaceProcessor base;
};


SpecialStrafeRightGameInputInterfaceProcessor* SpecialStrafeRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer);

void SpecialStrafeRightGameInputInterfaceProcessor_init(SpecialStrafeRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer);
void SpecialStrafeRightGameInputInterfaceProcessor_processEvent(SpecialStrafeRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void SpecialStrafeRightGameInputInterfaceProcessor_init(SpecialStrafeRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeRightGameInputInterfaceProcessor* SpecialStrafeRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeRightGameInputInterfaceProcessor* this = calloc(1, sizeof(SpecialStrafeRightGameInputInterfaceProcessor));
    SpecialStrafeRightGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeRightGameInputInterfaceProcessor_processEvent(SpecialStrafeRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        JAVA_CALL(this->specialGameInputInterface, strafeRight);
}

