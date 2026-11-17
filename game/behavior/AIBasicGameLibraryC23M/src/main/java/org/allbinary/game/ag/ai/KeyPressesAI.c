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
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct KeyPressesAI KeyPressesAI;
struct KeyPressesAI {
    BasicAI base;
    bool on;
    int32_t* keys;
};


KeyPressesAI* KeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void KeyPressesAI_init(KeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void KeyPressesAI_processAI(KeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void KeyPressesAI_toggle(KeyPressesAI* this);
void KeyPressesAI_disable(KeyPressesAI* this);
void KeyPressesAI_enable(KeyPressesAI* this);
static void KeyPressesAI_setOn(KeyPressesAI* this, bool on);
bool KeyPressesAI_isOn(KeyPressesAI* this);

static void KeyPressesAI_initFields(KeyPressesAI* this) {
    this->on = true;
    
}


void KeyPressesAI_init(KeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        KeyPressesAI_initFields(this);
        this->keys = ((int32_t*) java_array_new(sizeof(int32_t), ABHashtable_size(hashtable)));
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        int32_t size = java_array_length(objectArray);
        for (int32_t index = 0; index < size; index++) {
            this->keys[index] = ((int32_t) ABHashtable_get(hashtable, ((Any*) objectArray[index])));
        }
}

KeyPressesAI* KeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    KeyPressesAI* this = calloc(1, sizeof(KeyPressesAI));
    KeyPressesAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void KeyPressesAI_processAI(KeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (this->on) {
            for (int32_t index = 0; index < java_array_length(this->keys); index++) {
                BasicAI_processKeyAI((&this->base), JAVA_CALL(this->keys[index], intValue));
            }
        }
}


// throws Exception
void KeyPressesAI_toggle(KeyPressesAI* this) {
        if (KeyPressesAI_isOn(this)) {
            KeyPressesAI_setOn(this, false);
        } else {
            KeyPressesAI_setOn(this, true);
        }
}


// throws Exception
void KeyPressesAI_disable(KeyPressesAI* this) {
        KeyPressesAI_setOn(this, false);
}


// throws Exception
void KeyPressesAI_enable(KeyPressesAI* this) {
        KeyPressesAI_setOn(this, true);
}


static void KeyPressesAI_setOn(KeyPressesAI* this, bool on) {
        this->on = on;
}


bool KeyPressesAI_isOn(KeyPressesAI* this) {
        return this->on;
}

