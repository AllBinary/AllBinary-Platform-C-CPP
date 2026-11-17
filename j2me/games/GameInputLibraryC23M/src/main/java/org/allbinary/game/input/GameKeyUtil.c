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
// #include "javax/microedition/lcdui/Canvas.h"

typedef struct GameKeyUtil GameKeyUtil;
struct GameKeyUtil {
    char unused;
};

static GameKeyUtil* GameKeyUtil_instance;

GameKeyUtil* GameKeyUtil_new(void);
bool GameKeyUtil_isDirectionKey(GameKeyUtil* this, int32_t key);
GameKeyUtil* GameKeyUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameKeyUtil_staticInit(void) {
    GameKeyUtil_instance = GameKeyUtil_new();
}

void GameKeyUtil_init(GameKeyUtil* this) {
}

GameKeyUtil* GameKeyUtil_new(void) {
    GameKeyUtil* this = calloc(1, sizeof(GameKeyUtil));
    GameKeyUtil_init(this);
    return this;
}


bool GameKeyUtil_isDirectionKey(GameKeyUtil* this, int32_t key) {
        if (key == Canvas_UP || key == Canvas_DOWN || key == Canvas_LEFT || key == Canvas_RIGHT) {
            return true;
        } else {
            return false;
        }
}


GameKeyUtil* GameKeyUtil_getInstance(void) {
        return GameKeyUtil_instance;
}

