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
// package org.allbinary.game.layer.hud.event

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
#include "org/allbinary/logic/util/event/NullEventListener.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GameNotificationEventHandler GameNotificationEventHandler;
struct GameNotificationEventHandler {
    BasicEventHandler base;
    bool enabled;
};

static GameNotificationEventHandler* GameNotificationEventHandler_instance;

GameNotificationEventHandler* GameNotificationEventHandler_new(void);

void GameNotificationEventHandler_init(GameNotificationEventHandler* this);
void GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler* this);
GameNotificationEventHandler* GameNotificationEventHandler_getInstance(void);
void GameNotificationEventHandler_process(GameNotificationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GameNotificationEventHandler_staticInit(void) {
    GameNotificationEventHandler_instance = GameNotificationEventHandler_new();
}

static void GameNotificationEventHandler_initFields(GameNotificationEventHandler* this) {
    this->enabled = true;
}


void GameNotificationEventHandler_init(GameNotificationEventHandler* this) {
    BasicEventHandler_init(&this->base);
    GameNotificationEventHandler_initFields(this);
}

GameNotificationEventHandler* GameNotificationEventHandler_new(void) {
    GameNotificationEventHandler* this = calloc(1, sizeof(GameNotificationEventHandler));
    GameNotificationEventHandler_init(this);
    return this;
}


// synchronized
void GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler* this) {
        EventListenerInterface* eventListenerInterface = NullEventListener_NULL_EVENT_LISTENER;
        BasicArrayList* list = this->eventListenerInterfaceList;
        if (BasicArrayList_size(list) > 0) {
            eventListenerInterface = ((EventListenerInterface*) list->objectArray[0]);
        }
        BasicEventHandler_removeAllListeners((&this->base));
        if (eventListenerInterface != NullEventListener_NULL_EVENT_LISTENER) {
            GameNotificationEventHandler_addListenerInterface(this, eventListenerInterface);
        }
}


GameNotificationEventHandler* GameNotificationEventHandler_getInstance(void) {
        return GameNotificationEventHandler_instance;
}


// throws Exception
void GameNotificationEventHandler_process(GameNotificationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        if (!this->enabled) {
            return;
        }
        GameNotificationListenerInterface* gameNotificationListenerInterface = ((GameNotificationListenerInterface*) eventListenerInterface);
        GameNotificationListenerInterface_onGameNotificationEvent(gameNotificationListenerInterface, ((GameNotificationEvent*) eventObject));
}

