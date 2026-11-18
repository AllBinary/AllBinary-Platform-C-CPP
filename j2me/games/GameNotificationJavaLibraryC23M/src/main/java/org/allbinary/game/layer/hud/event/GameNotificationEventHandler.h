#ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_H
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
typedef struct GameNotificationListenerInterface GameNotificationListenerInterface;
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct NullEventListener NullEventListener;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GameNotificationEventHandler GameNotificationEventHandler;
struct GameNotificationEventHandler {
    BasicEventHandler base;
    bool enabled;
};


GameNotificationEventHandler* GameNotificationEventHandler_new(void);

void GameNotificationEventHandler_init(GameNotificationEventHandler* this);

void GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler* this);

GameNotificationEventHandler* GameNotificationEventHandler_getInstance(void);

void GameNotificationEventHandler_process(GameNotificationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define GameNotificationEventHandler_new0 GameNotificationEventHandler_new
#define GameNotificationEventHandler_init0 GameNotificationEventHandler_init
#ifndef GameNotificationEventHandler_toString
#define GameNotificationEventHandler_toString BasicEventHandler_toString
#endif
#ifndef GameNotificationEventHandler_addListenerSingleThreaded
#define GameNotificationEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef GameNotificationEventHandler_addListenerInterface
#define GameNotificationEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef GameNotificationEventHandler_removeListenerSingleThreaded
#define GameNotificationEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef GameNotificationEventHandler_removeListener
#define GameNotificationEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef GameNotificationEventHandler_fireEvent
#define GameNotificationEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef GameNotificationEventHandler_getEventListenerInterfaceListP
#define GameNotificationEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef GameNotificationEventHandler_addListeners
#define GameNotificationEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef GameNotificationEventHandler_removeListeners
#define GameNotificationEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameNotificationEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameNotificationEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_H
