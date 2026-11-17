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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameKeyEventUtil GameKeyEventUtil;
struct GameKeyEventUtil {
    char unused;
};


GameKeyEventUtil* GameKeyEventUtil_new(void);

void GameKeyEventUtil_init(GameKeyEventUtil* this);
int32_t GameKeyEventUtil_getKey(Any* anyType);


void GameKeyEventUtil_init(GameKeyEventUtil* this) {
}

GameKeyEventUtil* GameKeyEventUtil_new(void) {
    GameKeyEventUtil* this = calloc(1, sizeof(GameKeyEventUtil));
    GameKeyEventUtil_init(this);
    return this;
}


int32_t GameKeyEventUtil_getKey(Any* anyType) {
        GameKeyEvent* gameKeyEvent = ((GameKeyEvent*) anyType);
        return GameKeyEvent_getKey(gameKeyEvent);
}

