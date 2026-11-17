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
#include "org/allbinary/game/input/ScrollMapGameInputProcessor.h"

typedef struct ScrollMapLeftGameInputProcessor ScrollMapLeftGameInputProcessor;
struct ScrollMapLeftGameInputProcessor {
    ScrollMapGameInputProcessor base;
};


ScrollMapLeftGameInputProcessor* ScrollMapLeftGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

void ScrollMapLeftGameInputProcessor_init(ScrollMapLeftGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput);
void ScrollMapLeftGameInputProcessor_processEvent(ScrollMapLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void ScrollMapLeftGameInputProcessor_init(ScrollMapLeftGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
        ScrollMapGameInputProcessor_init(&this->base, scrollMapPlayerGameInput);
}

ScrollMapLeftGameInputProcessor* ScrollMapLeftGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
    ScrollMapLeftGameInputProcessor* this = calloc(1, sizeof(ScrollMapLeftGameInputProcessor));
    ScrollMapLeftGameInputProcessor_init(this, scrollMapPlayerGameInput);
    return this;
}


// throws Exception
void ScrollMapLeftGameInputProcessor_processEvent(ScrollMapLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        ScrollMapPlayerGameInput_left(this->scrollMapPlayerGameInput);
}

