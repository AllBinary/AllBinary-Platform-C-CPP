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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GameMidletEventHandler GameMidletEventHandler;
struct GameMidletEventHandler {
    BasicEventHandler base;
};

static GameMidletEventHandler* GameMidletEventHandler_gameKeyEventHandler;

GameMidletEventHandler* GameMidletEventHandler_new(void);

void GameMidletEventHandler_init(GameMidletEventHandler* this);
GameMidletEventHandler* GameMidletEventHandler_getInstance(void);
void GameMidletEventHandler_process(GameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GameMidletEventHandler_staticInit(void) {
    GameMidletEventHandler_gameKeyEventHandler = GameMidletEventHandler_new();
}


void GameMidletEventHandler_init(GameMidletEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

GameMidletEventHandler* GameMidletEventHandler_new(void) {
    GameMidletEventHandler* this = calloc(1, sizeof(GameMidletEventHandler));
    GameMidletEventHandler_init(this);
    return this;
}


GameMidletEventHandler* GameMidletEventHandler_getInstance(void) {
        return GameMidletEventHandler_gameKeyEventHandler;
}


// throws Exception
void GameMidletEventHandler_process(GameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameMidletEventListener* gameMidletEventListener = ((GameMidletEventListener*) eventListenerInterface);
        GameMidletEventListener_onGameEnd(gameMidletEventListener, eventObject);
}

