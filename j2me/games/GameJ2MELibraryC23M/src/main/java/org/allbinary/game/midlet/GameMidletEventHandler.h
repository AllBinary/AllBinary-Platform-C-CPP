#ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_H
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
typedef struct GameMidletEventListener GameMidletEventListener;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GameMidletEventHandler GameMidletEventHandler;
struct GameMidletEventHandler {
    BasicEventHandler base;
};


GameMidletEventHandler* GameMidletEventHandler_new(void);

void GameMidletEventHandler_init(GameMidletEventHandler* this);

GameMidletEventHandler* GameMidletEventHandler_getInstance(void);

void GameMidletEventHandler_process(GameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define GameMidletEventHandler_new0 GameMidletEventHandler_new
#define GameMidletEventHandler_init0 GameMidletEventHandler_init
#ifndef GameMidletEventHandler_toString
#define GameMidletEventHandler_toString BasicEventHandler_toString
#endif
#ifndef GameMidletEventHandler_removeAllListeners
#define GameMidletEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef GameMidletEventHandler_addListenerSingleThreaded
#define GameMidletEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef GameMidletEventHandler_addListenerInterface
#define GameMidletEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef GameMidletEventHandler_removeListenerSingleThreaded
#define GameMidletEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef GameMidletEventHandler_removeListener
#define GameMidletEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef GameMidletEventHandler_fireEvent
#define GameMidletEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef GameMidletEventHandler_getEventListenerInterfaceListP
#define GameMidletEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef GameMidletEventHandler_addListeners
#define GameMidletEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef GameMidletEventHandler_removeListeners
#define GameMidletEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameMidletEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameMidletEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETEVENTHANDLER_H
