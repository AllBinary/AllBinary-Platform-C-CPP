/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"

typedef struct NullPlayerGameInputComposite NullPlayerGameInputComposite;
struct NullPlayerGameInputComposite {
    PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface_interface;
};

NullPlayerGameInputComposite* NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE;

NullPlayerGameInputComposite* NullPlayerGameInputComposite_new(void);
const char* NullPlayerGameInputComposite_getName(NullPlayerGameInputComposite* this);
void NullPlayerGameInputComposite_processInput(NullPlayerGameInputComposite* this, AllBinaryLayerManager* layerManager);
void NullPlayerGameInputComposite_initInputProcessors(NullPlayerGameInputComposite* this);
PlayerGameInput* NullPlayerGameInputComposite_getPlayerGameInput(NullPlayerGameInputComposite* this);

// Static fields with runtime initializers: call this once at startup
void NullPlayerGameInputComposite_staticInit(void) {
    NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE = NullPlayerGameInputComposite_new();
}

void NullPlayerGameInputComposite_init(NullPlayerGameInputComposite* this) {
}

NullPlayerGameInputComposite* NullPlayerGameInputComposite_new(void) {
    NullPlayerGameInputComposite* this = calloc(1, sizeof(NullPlayerGameInputComposite));
    NullPlayerGameInputComposite_init(this);
    return this;
}


const char* NullPlayerGameInputComposite_getName(NullPlayerGameInputComposite* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
void NullPlayerGameInputComposite_processInput(NullPlayerGameInputComposite* this, AllBinaryLayerManager* layerManager) {
}


void NullPlayerGameInputComposite_initInputProcessors(NullPlayerGameInputComposite* this) {
}


PlayerGameInput* NullPlayerGameInputComposite_getPlayerGameInput(NullPlayerGameInputComposite* this) {
        return NoPlayerGameInput_getInstance();
}

