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
// package org.allbinary.game.configuration.event

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

typedef struct GameInitializedEventHandler GameInitializedEventHandler;
struct GameInitializedEventHandler {
    BasicEventHandler base;
};

static GameInitializedEventHandler* GameInitializedEventHandler_gameKeyEventHandler;

GameInitializedEventHandler* GameInitializedEventHandler_new(void);

void GameInitializedEventHandler_init(GameInitializedEventHandler* this);
GameInitializedEventHandler* GameInitializedEventHandler_getInstance(void);
void GameInitializedEventHandler_process(GameInitializedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GameInitializedEventHandler_staticInit(void) {
    GameInitializedEventHandler_gameKeyEventHandler = GameInitializedEventHandler_new();
}


void GameInitializedEventHandler_init(GameInitializedEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

GameInitializedEventHandler* GameInitializedEventHandler_new(void) {
    GameInitializedEventHandler* this = calloc(1, sizeof(GameInitializedEventHandler));
    GameInitializedEventHandler_init(this);
    return this;
}


GameInitializedEventHandler* GameInitializedEventHandler_getInstance(void) {
        return GameInitializedEventHandler_gameKeyEventHandler;
}


// throws Exception
void GameInitializedEventHandler_process(GameInitializedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameInitializedListenerInterface* gameInitializedListenerInterface = (((GameInitializedListenerInterface*) eventListenerInterface));
        GameInitializedListenerInterface_onGameInitialized(gameInitializedListenerInterface, ((GameInitializedEvent*) eventObject));
}

