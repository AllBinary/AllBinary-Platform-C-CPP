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

typedef struct SpecialAnalogLeftTriggerGameInputProcessor SpecialAnalogLeftTriggerGameInputProcessor;
struct SpecialAnalogLeftTriggerGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogLeftTriggerGameInputProcessor* SpecialAnalogLeftTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogLeftTriggerGameInputProcessor_init(SpecialAnalogLeftTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
void SpecialAnalogLeftTriggerGameInputProcessor_processAnalog(SpecialAnalogLeftTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);


void SpecialAnalogLeftTriggerGameInputProcessor_init(SpecialAnalogLeftTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogLeftTriggerGameInputProcessor* SpecialAnalogLeftTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogLeftTriggerGameInputProcessor* this = calloc(1, sizeof(SpecialAnalogLeftTriggerGameInputProcessor));
    SpecialAnalogLeftTriggerGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogLeftTriggerGameInputProcessor_processAnalog(SpecialAnalogLeftTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_leftTrigger(this->collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent, yAnalogValue);
}

