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

typedef struct RTSPlayerRightGameInputProcessor RTSPlayerRightGameInputProcessor;
struct RTSPlayerRightGameInputProcessor {
    RTSPlayerGameInputProcessor base;
};


RTSPlayerRightGameInputProcessor* RTSPlayerRightGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput);

void RTSPlayerRightGameInputProcessor_init(RTSPlayerRightGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput);
void RTSPlayerRightGameInputProcessor_processEvent(RTSPlayerRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void RTSPlayerRightGameInputProcessor_init(RTSPlayerRightGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput) {
        RTSPlayerGameInputProcessor_init(&this->base, rtsPlayerGameInput);
}

RTSPlayerRightGameInputProcessor* RTSPlayerRightGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput) {
    RTSPlayerRightGameInputProcessor* this = calloc(1, sizeof(RTSPlayerRightGameInputProcessor));
    RTSPlayerRightGameInputProcessor_init(this, rtsPlayerGameInput);
    return this;
}


// throws Exception
void RTSPlayerRightGameInputProcessor_processEvent(RTSPlayerRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        RTSPlayerGameInput_right(this->rtsPlayerGameInput);
}

