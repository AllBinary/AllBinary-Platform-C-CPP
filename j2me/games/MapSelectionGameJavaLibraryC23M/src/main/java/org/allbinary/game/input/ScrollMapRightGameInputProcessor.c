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

typedef struct ScrollMapRightGameInputProcessor ScrollMapRightGameInputProcessor;
struct ScrollMapRightGameInputProcessor {
    ScrollMapGameInputProcessor base;
};


ScrollMapRightGameInputProcessor* ScrollMapRightGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

void ScrollMapRightGameInputProcessor_init(ScrollMapRightGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput);
void ScrollMapRightGameInputProcessor_processEvent(ScrollMapRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void ScrollMapRightGameInputProcessor_init(ScrollMapRightGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
        ScrollMapGameInputProcessor_init(&this->base, scrollMapPlayerGameInput);
}

ScrollMapRightGameInputProcessor* ScrollMapRightGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
    ScrollMapRightGameInputProcessor* this = calloc(1, sizeof(ScrollMapRightGameInputProcessor));
    ScrollMapRightGameInputProcessor_init(this, scrollMapPlayerGameInput);
    return this;
}


// throws Exception
void ScrollMapRightGameInputProcessor_processEvent(ScrollMapRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        ScrollMapPlayerGameInput_right(this->scrollMapPlayerGameInput);
}

