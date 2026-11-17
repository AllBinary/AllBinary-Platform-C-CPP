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
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct NoPlayerGameInput NoPlayerGameInput;
struct NoPlayerGameInput {
    PlayerGameInput base;
};

static NoPlayerGameInput* NoPlayerGameInput_SINGLETON;

NoPlayerGameInput* NoPlayerGameInput_new(void);
NoPlayerGameInput* NoPlayerGameInput_getInstance(void);

void NoPlayerGameInput_init(NoPlayerGameInput* this);
void NoPlayerGameInput_onDownGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent);
void NoPlayerGameInput_onUpGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent);

// Static fields with runtime initializers: call this once at startup
void NoPlayerGameInput_staticInit(void) {
    NoPlayerGameInput_SINGLETON = NoPlayerGameInput_new();
}


NoPlayerGameInput* NoPlayerGameInput_getInstance(void) {
        return NoPlayerGameInput_SINGLETON;
}


void NoPlayerGameInput_init(NoPlayerGameInput* this) {
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
}

NoPlayerGameInput* NoPlayerGameInput_new(void) {
    NoPlayerGameInput* this = calloc(1, sizeof(NoPlayerGameInput));
    NoPlayerGameInput_init(this);
    return this;
}


// synchronized
void NoPlayerGameInput_onDownGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
}


// synchronized
void NoPlayerGameInput_onUpGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
}

