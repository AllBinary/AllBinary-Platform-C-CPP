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
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"

typedef struct Special2GameInputProcessor Special2GameInputProcessor;
struct Special2GameInputProcessor {
    SpecialGameInputProcessor base;
};


Special2GameInputProcessor* Special2GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void Special2GameInputProcessor_init(Special2GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
void Special2GameInputProcessor_processEvent(Special2GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void Special2GameInputProcessor_init(Special2GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special2GameInputProcessor* Special2GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special2GameInputProcessor* this = calloc(1, sizeof(Special2GameInputProcessor));
    Special2GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special2GameInputProcessor_processEvent(Special2GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special2(this->collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

