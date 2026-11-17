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
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"

typedef struct GameEventHandlerUtil GameEventHandlerUtil;
struct GameEventHandlerUtil {
    char unused;
};


GameEventHandlerUtil* GameEventHandlerUtil_new(void);
void GameEventHandlerUtil_removeAllListeners(void);

void GameEventHandlerUtil_init(GameEventHandlerUtil* this) {
}

GameEventHandlerUtil* GameEventHandlerUtil_new(void) {
    GameEventHandlerUtil* this = calloc(1, sizeof(GameEventHandlerUtil));
    GameEventHandlerUtil_init(this);
    return this;
}


void GameEventHandlerUtil_removeAllListeners(void) {
        UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler_getInstance());
        DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler_getInstance());
}

