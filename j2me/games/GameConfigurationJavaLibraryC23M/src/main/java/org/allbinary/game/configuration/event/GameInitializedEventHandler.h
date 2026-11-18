#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_H
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
typedef struct GameInitializedListenerInterface GameInitializedListenerInterface;
typedef struct GameInitializedEvent GameInitializedEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GameInitializedEventHandler GameInitializedEventHandler;
struct GameInitializedEventHandler {
    BasicEventHandler base;
};


GameInitializedEventHandler* GameInitializedEventHandler_new(void);

void GameInitializedEventHandler_init(GameInitializedEventHandler* this);

GameInitializedEventHandler* GameInitializedEventHandler_getInstance(void);

void GameInitializedEventHandler_process(GameInitializedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define GameInitializedEventHandler_new0 GameInitializedEventHandler_new
#define GameInitializedEventHandler_init0 GameInitializedEventHandler_init
#ifndef GameInitializedEventHandler_toString
#define GameInitializedEventHandler_toString BasicEventHandler_toString
#endif
#ifndef GameInitializedEventHandler_removeAllListeners
#define GameInitializedEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef GameInitializedEventHandler_addListenerSingleThreaded
#define GameInitializedEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef GameInitializedEventHandler_addListenerInterface
#define GameInitializedEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef GameInitializedEventHandler_removeListenerSingleThreaded
#define GameInitializedEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef GameInitializedEventHandler_removeListener
#define GameInitializedEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef GameInitializedEventHandler_fireEvent
#define GameInitializedEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef GameInitializedEventHandler_getEventListenerInterfaceListP
#define GameInitializedEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef GameInitializedEventHandler_addListeners
#define GameInitializedEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef GameInitializedEventHandler_removeListeners
#define GameInitializedEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInitializedEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInitializedEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENTHANDLER_H
