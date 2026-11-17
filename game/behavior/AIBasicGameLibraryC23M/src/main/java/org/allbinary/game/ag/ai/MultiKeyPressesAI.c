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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"

typedef struct MultiKeyPressesAI MultiKeyPressesAI;
struct MultiKeyPressesAI {
    KeyPressesAI base;
    TimeDelayHelper* toggleTimeHelper;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


MultiKeyPressesAI* MultiKeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void MultiKeyPressesAI_init(MultiKeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void MultiKeyPressesAI_processAI(MultiKeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager);
static void MultiKeyPressesAI_update(MultiKeyPressesAI* this);
void MultiKeyPressesAI_toggle(MultiKeyPressesAI* this);
void MultiKeyPressesAI_disable(MultiKeyPressesAI* this);
void MultiKeyPressesAI_enable(MultiKeyPressesAI* this);

static void MultiKeyPressesAI_initFields(MultiKeyPressesAI* this) {
    this->toggleTimeHelper = TimeDelayHelper_new(600);
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void MultiKeyPressesAI_init(MultiKeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        KeyPressesAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        MultiKeyPressesAI_initFields(this);
        MultiKeyPressesAI_update(this);
}

MultiKeyPressesAI* MultiKeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    MultiKeyPressesAI* this = calloc(1, sizeof(MultiKeyPressesAI));
    MultiKeyPressesAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void MultiKeyPressesAI_processAI(MultiKeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
}


// throws Exception
static void MultiKeyPressesAI_update(MultiKeyPressesAI* this) {
        GameInput* gameInput = MultiKeyPressesAI_getGameInput(this);
        int32_t* keys = this->keys;
        int32_t size = java_array_length(keys);
        if (MultiKeyPressesAI_isOn(this)) {
            for (int32_t index = 0; index < size; index++) {
                int32_t key = JAVA_CALL(keys[index], intValue);
                if (key != -1) {
                    GameInput_add(gameInput, JAVA_CALL(this->gameKeyEventFactory, getInstanceForKey, this, key));
                }
            }
        } else {
            for (int32_t index = 0; index < size; index++) {
                int32_t key = JAVA_CALL(keys[index], intValue);
                if (key != -1) {
                    GameInput_addForRemoval(gameInput, JAVA_CALL(this->gameKeyEventFactory, getInstanceForKey, this, key));
                }
            }
        }
}


// throws Exception
void MultiKeyPressesAI_toggle(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_toggle((&this->base));
            MultiKeyPressesAI_update(this);
        }
}


// throws Exception
void MultiKeyPressesAI_disable(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_disable((&this->base));
            MultiKeyPressesAI_update(this);
        }
}


// throws Exception
void MultiKeyPressesAI_enable(MultiKeyPressesAI* this) {
        if (TimeDelayHelper_isTime(this->toggleTimeHelper, this->gameTickTimeDelayHelper->startTime)) {
            KeyPressesAI_enable((&this->base));
            MultiKeyPressesAI_update(this);
        }
}

