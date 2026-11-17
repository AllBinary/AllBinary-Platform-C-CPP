/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/input/RTSPlayerGameInputProcessor.h"

typedef struct RTSPlayerFireGameInputProcessor RTSPlayerFireGameInputProcessor;
struct RTSPlayerFireGameInputProcessor {
    RTSPlayerGameInputProcessor base;
};


RTSPlayerFireGameInputProcessor* RTSPlayerFireGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput);

void RTSPlayerFireGameInputProcessor_init(RTSPlayerFireGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput);
void RTSPlayerFireGameInputProcessor_processEvent(RTSPlayerFireGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void RTSPlayerFireGameInputProcessor_init(RTSPlayerFireGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput) {
        RTSPlayerGameInputProcessor_init(&this->base, rtsPlayerGameInput);
}

RTSPlayerFireGameInputProcessor* RTSPlayerFireGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput) {
    RTSPlayerFireGameInputProcessor* this = calloc(1, sizeof(RTSPlayerFireGameInputProcessor));
    RTSPlayerFireGameInputProcessor_init(this, rtsPlayerGameInput);
    return this;
}


// throws Exception
void RTSPlayerFireGameInputProcessor_processEvent(RTSPlayerFireGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        RTSPlayerGameInput_addForRemoval(this->rtsPlayerGameInput, gameKeyEvent);
}

