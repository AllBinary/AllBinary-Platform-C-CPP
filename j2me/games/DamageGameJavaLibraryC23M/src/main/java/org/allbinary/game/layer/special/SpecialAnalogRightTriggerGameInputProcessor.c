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

typedef struct SpecialAnalogRightTriggerGameInputProcessor SpecialAnalogRightTriggerGameInputProcessor;
struct SpecialAnalogRightTriggerGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogRightTriggerGameInputProcessor* SpecialAnalogRightTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogRightTriggerGameInputProcessor_init(SpecialAnalogRightTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
void SpecialAnalogRightTriggerGameInputProcessor_processAnalog(SpecialAnalogRightTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);


void SpecialAnalogRightTriggerGameInputProcessor_init(SpecialAnalogRightTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogRightTriggerGameInputProcessor* SpecialAnalogRightTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogRightTriggerGameInputProcessor* this = calloc(1, sizeof(SpecialAnalogRightTriggerGameInputProcessor));
    SpecialAnalogRightTriggerGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogRightTriggerGameInputProcessor_processAnalog(SpecialAnalogRightTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_rightTrigger(this->collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent, yAnalogValue);
}

