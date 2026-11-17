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
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct RTSPlayerGameInputProcessor RTSPlayerGameInputProcessor;
struct RTSPlayerGameInputProcessor {
    GameInputProcessor base;
    RTSPlayerGameInput* rtsPlayerGameInput;
};


RTSPlayerGameInputProcessor* RTSPlayerGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput);

void RTSPlayerGameInputProcessor_init(RTSPlayerGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput);

static void RTSPlayerGameInputProcessor_initFields(RTSPlayerGameInputProcessor* this) {
    
}


void RTSPlayerGameInputProcessor_init(RTSPlayerGameInputProcessor* this, RTSPlayerGameInput* rtsPlayerGameInput) {
    GameInputProcessor_init(&this->base);
    RTSPlayerGameInputProcessor_initFields(this);
        this->rtsPlayerGameInput = rtsPlayerGameInput;
}

RTSPlayerGameInputProcessor* RTSPlayerGameInputProcessor_new(RTSPlayerGameInput* rtsPlayerGameInput) {
    RTSPlayerGameInputProcessor* this = calloc(1, sizeof(RTSPlayerGameInputProcessor));
    RTSPlayerGameInputProcessor_init(this, rtsPlayerGameInput);
    return this;
}

