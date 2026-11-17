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

typedef struct ScrollMapUpGameInputProcessor ScrollMapUpGameInputProcessor;
struct ScrollMapUpGameInputProcessor {
    ScrollMapGameInputProcessor base;
};


ScrollMapUpGameInputProcessor* ScrollMapUpGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

void ScrollMapUpGameInputProcessor_init(ScrollMapUpGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput);
void ScrollMapUpGameInputProcessor_processEvent(ScrollMapUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);


void ScrollMapUpGameInputProcessor_init(ScrollMapUpGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
        ScrollMapGameInputProcessor_init(&this->base, scrollMapPlayerGameInput);
}

ScrollMapUpGameInputProcessor* ScrollMapUpGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
    ScrollMapUpGameInputProcessor* this = calloc(1, sizeof(ScrollMapUpGameInputProcessor));
    ScrollMapUpGameInputProcessor_init(this, scrollMapPlayerGameInput);
    return this;
}


// throws Exception
void ScrollMapUpGameInputProcessor_processEvent(ScrollMapUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        ScrollMapPlayerGameInput_up(this->scrollMapPlayerGameInput);
}

