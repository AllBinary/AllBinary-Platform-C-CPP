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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameKeyEventHandler GameKeyEventHandler;
struct GameKeyEventHandler {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PressGameKeyEventHandler* pressGameKeyEventHandler;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    DownGameKeyEventHandler* downGameKeyEventHandler;
};

static GameKeyEventHandler* GameKeyEventHandler_instance;

GameKeyEventHandler* GameKeyEventHandler_new(void);
GameKeyEventHandler* GameKeyEventHandler_getInstance(void);
void GameKeyEventHandler_removeAllListeners(GameKeyEventHandler* this);
void GameKeyEventHandler_addListenerForPlayer(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface, int32_t playerInputId);
void GameKeyEventHandler_addListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void GameKeyEventHandler_removeListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GameKeyEventHandler_staticInit(void) {
    GameKeyEventHandler_instance = GameKeyEventHandler_new();
}

static void GameKeyEventHandler_initFields(GameKeyEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->pressGameKeyEventHandler = PressGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
}

void GameKeyEventHandler_init(GameKeyEventHandler* this) {
    GameKeyEventHandler_initFields(this);
}

GameKeyEventHandler* GameKeyEventHandler_new(void) {
    GameKeyEventHandler* this = calloc(1, sizeof(GameKeyEventHandler));
    GameKeyEventHandler_init(this);
    return this;
}


GameKeyEventHandler* GameKeyEventHandler_getInstance(void) {
        return GameKeyEventHandler_instance;
}


// synchronized
void GameKeyEventHandler_removeAllListeners(GameKeyEventHandler* this) {
        PressGameKeyEventHandler_removeAllListeners(this->pressGameKeyEventHandler);
        UpGameKeyEventHandler_removeAllListeners(this->upGameKeyEventHandler);
        DownGameKeyEventHandler_removeAllListeners(this->downGameKeyEventHandler);
}


void GameKeyEventHandler_addListenerForPlayer(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface, int32_t playerInputId) {
        LogUtil_putF(this->logUtil, EventListenerInterface_toString(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
        PressGameKeyEventHandler_addListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        JAVA_CALL(UpGameKeyEventHandler_getInstanceForPlayer(this->upGameKeyEventHandler, playerInputId), addListenerSingleThreaded, eventListenerInterface);
        JAVA_CALL(DownGameKeyEventHandler_getInstanceForPlayer(this->downGameKeyEventHandler, playerInputId), addListenerSingleThreaded, eventListenerInterface);
}


void GameKeyEventHandler_addListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        LogUtil_putF(this->logUtil, EventListenerInterface_toString(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
        PressGameKeyEventHandler_addListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        UpGameKeyEventHandler_addListenerSingleThreaded(this->upGameKeyEventHandler, eventListenerInterface);
        DownGameKeyEventHandler_addListenerSingleThreaded(this->downGameKeyEventHandler, eventListenerInterface);
}


void GameKeyEventHandler_removeListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        LogUtil_putF(this->logUtil, EventListenerInterface_toString(eventListenerInterface), this, this->commonStrings->REMOVE_LISTENER);
        PressGameKeyEventHandler_removeListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        UpGameKeyEventHandler_removeListenerSingleThreaded(this->upGameKeyEventHandler, eventListenerInterface);
        DownGameKeyEventHandler_removeListenerSingleThreaded(this->downGameKeyEventHandler, eventListenerInterface);
}

