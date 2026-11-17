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
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct ScrollMapGameInputProcessor ScrollMapGameInputProcessor;
struct ScrollMapGameInputProcessor {
    GameInputProcessor base;
    ScrollMapPlayerGameInput* scrollMapPlayerGameInput;
};


ScrollMapGameInputProcessor* ScrollMapGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

void ScrollMapGameInputProcessor_init(ScrollMapGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

static void ScrollMapGameInputProcessor_initFields(ScrollMapGameInputProcessor* this) {
    
}


void ScrollMapGameInputProcessor_init(ScrollMapGameInputProcessor* this, ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
    GameInputProcessor_init(&this->base);
    ScrollMapGameInputProcessor_initFields(this);
        this->scrollMapPlayerGameInput = scrollMapPlayerGameInput;
}

ScrollMapGameInputProcessor* ScrollMapGameInputProcessor_new(ScrollMapPlayerGameInput* scrollMapPlayerGameInput) {
    ScrollMapGameInputProcessor* this = calloc(1, sizeof(ScrollMapGameInputProcessor));
    ScrollMapGameInputProcessor_init(this, scrollMapPlayerGameInput);
    return this;
}

