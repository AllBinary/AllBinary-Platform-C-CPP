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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/score/Scoreable.h"

typedef struct NoScoreable NoScoreable;
struct NoScoreable {
    Scoreable base;
};

static NoScoreable* NoScoreable_SINGLETON;

NoScoreable* NoScoreable_new(void);
NoScoreable* NoScoreable_getInstance(void);

void NoScoreable_init(NoScoreable* this);
void NoScoreable_addPoints(NoScoreable* this, int32_t points);
void NoScoreable_removePoints(NoScoreable* this, int32_t points);

// Static fields with runtime initializers: call this once at startup
void NoScoreable_staticInit(void) {
    NoScoreable_SINGLETON = NoScoreable_new();
}


NoScoreable* NoScoreable_getInstance(void) {
        return NoScoreable_SINGLETON;
}


void NoScoreable_init(NoScoreable* this) {
        Scoreable_init(&this->base, 0);
}

NoScoreable* NoScoreable_new(void) {
    NoScoreable* this = calloc(1, sizeof(NoScoreable));
    NoScoreable_init(this);
    return this;
}


void NoScoreable_addPoints(NoScoreable* this, int32_t points) {
}


void NoScoreable_removePoints(NoScoreable* this, int32_t points) {
}

