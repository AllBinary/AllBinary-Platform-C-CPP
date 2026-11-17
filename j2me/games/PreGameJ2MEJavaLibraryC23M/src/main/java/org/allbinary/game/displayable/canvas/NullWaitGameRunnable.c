/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct NullWaitGameRunnable NullWaitGameRunnable;
struct NullWaitGameRunnable {
    GameRunnable base;
};

static GameRunnable* NullWaitGameRunnable_instance;

NullWaitGameRunnable* NullWaitGameRunnable_new(void);
GameRunnable* NullWaitGameRunnable_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullWaitGameRunnable_staticInit(void) {
    NullWaitGameRunnable_instance = NullWaitGameRunnable_new();
}

void NullWaitGameRunnable_init(NullWaitGameRunnable* this) {
    GameRunnable_init(&this->base);
}

NullWaitGameRunnable* NullWaitGameRunnable_new(void) {
    NullWaitGameRunnable* this = calloc(1, sizeof(NullWaitGameRunnable));
    NullWaitGameRunnable_init(this);
    return this;
}


GameRunnable* NullWaitGameRunnable_getInstance(void) {
        return NullWaitGameRunnable_instance;
}

