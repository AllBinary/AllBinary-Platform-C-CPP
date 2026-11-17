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

typedef struct GameFeatureEventHandler GameFeatureEventHandler;
struct GameFeatureEventHandler {
    BasicEventHandler base;
};

static GameFeatureEventHandler* GameFeatureEventHandler_gameKeyEventHandler;

GameFeatureEventHandler* GameFeatureEventHandler_new(void);

void GameFeatureEventHandler_init(GameFeatureEventHandler* this);
GameFeatureEventHandler* GameFeatureEventHandler_getInstance(void);
void GameFeatureEventHandler_process(GameFeatureEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GameFeatureEventHandler_staticInit(void) {
    GameFeatureEventHandler_gameKeyEventHandler = GameFeatureEventHandler_new();
}


void GameFeatureEventHandler_init(GameFeatureEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

GameFeatureEventHandler* GameFeatureEventHandler_new(void) {
    GameFeatureEventHandler* this = calloc(1, sizeof(GameFeatureEventHandler));
    GameFeatureEventHandler_init(this);
    return this;
}


GameFeatureEventHandler* GameFeatureEventHandler_getInstance(void) {
        return GameFeatureEventHandler_gameKeyEventHandler;
}


// throws Exception
void GameFeatureEventHandler_process(GameFeatureEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameFeatureListenerInterface* gameFeatureListenerInterface = (((GameFeatureListenerInterface*) eventListenerInterface));
        GameFeatureListenerInterface_onGameFeatureChange(gameFeatureListenerInterface, ((GameFeatureEvent*) eventObject));
}

