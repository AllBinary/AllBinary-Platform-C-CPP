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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/game/displayable/canvas/Runnable.h"

typedef struct GameRunnable GameRunnable;
struct GameRunnable {
    Runnable Runnable_interface;
    int32_t WAIT;
    int32_t FAST;
    int64_t waitInMillis;
};


GameRunnable* GameRunnable_new(void);

void GameRunnable_init(GameRunnable* this);
void GameRunnable_run(GameRunnable* this);
void GameRunnable_processLoopSleep(GameRunnable* this);

static void GameRunnable_initFields(GameRunnable* this) {
    this->WAIT = 240;
    this->FAST = 60;
    this->waitInMillis = ((int64_t) this->WAIT);
}


void GameRunnable_init(GameRunnable* this) {
    GameRunnable_initFields(this);
}

GameRunnable* GameRunnable_new(void) {
    GameRunnable* this = calloc(1, sizeof(GameRunnable));
    GameRunnable_init(this);
    return this;
}


void GameRunnable_run(GameRunnable* this) {
        DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
}


// throws Exception
void GameRunnable_processLoopSleep(GameRunnable* this) {
        java_sleep(this->waitInMillis);
}

