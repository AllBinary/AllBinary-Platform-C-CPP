#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_H
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
typedef struct GameFeatureListenerInterface GameFeatureListenerInterface;
typedef struct GameFeatureEvent GameFeatureEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GameFeatureEventHandler GameFeatureEventHandler;
struct GameFeatureEventHandler {
    BasicEventHandler base;
};


GameFeatureEventHandler* GameFeatureEventHandler_new(void);

void GameFeatureEventHandler_init(GameFeatureEventHandler* this);

GameFeatureEventHandler* GameFeatureEventHandler_getInstance(void);

void GameFeatureEventHandler_process(GameFeatureEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define GameFeatureEventHandler_new0 GameFeatureEventHandler_new
#define GameFeatureEventHandler_init0 GameFeatureEventHandler_init
#ifndef GameFeatureEventHandler_toString
#define GameFeatureEventHandler_toString BasicEventHandler_toString
#endif
#ifndef GameFeatureEventHandler_removeAllListeners
#define GameFeatureEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef GameFeatureEventHandler_addListenerSingleThreaded
#define GameFeatureEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef GameFeatureEventHandler_addListenerInterface
#define GameFeatureEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef GameFeatureEventHandler_removeListenerSingleThreaded
#define GameFeatureEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef GameFeatureEventHandler_removeListener
#define GameFeatureEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef GameFeatureEventHandler_fireEvent
#define GameFeatureEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef GameFeatureEventHandler_getEventListenerInterfaceListP
#define GameFeatureEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef GameFeatureEventHandler_addListeners
#define GameFeatureEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef GameFeatureEventHandler_removeListeners
#define GameFeatureEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENTHANDLER_H
