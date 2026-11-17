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
// package org.allbinary.game.tick

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/tick/TickableInterface.h"

typedef struct NullTickable NullTickable;
struct NullTickable {
    TickableInterface TickableInterface_interface;
    const char* NAME;
};

static NullTickable* NullTickable_SINGLETON;

NullTickable* NullTickable_new(void);
NullTickable* NullTickable_getInstance(void);
void NullTickable_processTick(NullTickable* this, AllBinaryLayerManager* allBinaryLayerManager);
const char* NullTickable_getName(NullTickable* this);

// Static fields with runtime initializers: call this once at startup
void NullTickable_staticInit(void) {
    NullTickable_SINGLETON = NullTickable_new();
}

static void NullTickable_initFields(NullTickable* this) {
    this->NAME = "NulLTickable";
}

void NullTickable_init(NullTickable* this) {
    NullTickable_initFields(this);
}

NullTickable* NullTickable_new(void) {
    NullTickable* this = calloc(1, sizeof(NullTickable));
    NullTickable_init(this);
    return this;
}


NullTickable* NullTickable_getInstance(void) {
        return NullTickable_SINGLETON;
}


// throws Exception
void NullTickable_processTick(NullTickable* this, AllBinaryLayerManager* allBinaryLayerManager) {
}


const char* NullTickable_getName(NullTickable* this) {
        return this->NAME;
}

