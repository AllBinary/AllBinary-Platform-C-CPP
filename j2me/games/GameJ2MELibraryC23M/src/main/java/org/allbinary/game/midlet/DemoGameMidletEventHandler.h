#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H
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
typedef struct DemoGameMidletEventListener DemoGameMidletEventListener;
typedef struct DemoGameMidletEvent DemoGameMidletEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct DemoGameMidletEventHandler DemoGameMidletEventHandler;
struct DemoGameMidletEventHandler {
    BasicEventHandler base;
};


DemoGameMidletEventHandler* DemoGameMidletEventHandler_new(void);

void DemoGameMidletEventHandler_init(DemoGameMidletEventHandler* this);

DemoGameMidletEventHandler* DemoGameMidletEventHandler_getInstance(void);

void DemoGameMidletEventHandler_process(DemoGameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define DemoGameMidletEventHandler_new0 DemoGameMidletEventHandler_new
#define DemoGameMidletEventHandler_init0 DemoGameMidletEventHandler_init
#ifndef DemoGameMidletEventHandler_toString
#define DemoGameMidletEventHandler_toString BasicEventHandler_toString
#endif
#ifndef DemoGameMidletEventHandler_removeAllListeners
#define DemoGameMidletEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef DemoGameMidletEventHandler_addListenerSingleThreaded
#define DemoGameMidletEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DemoGameMidletEventHandler_addListenerInterface
#define DemoGameMidletEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DemoGameMidletEventHandler_removeListenerSingleThreaded
#define DemoGameMidletEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef DemoGameMidletEventHandler_removeListener
#define DemoGameMidletEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef DemoGameMidletEventHandler_fireEvent
#define DemoGameMidletEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef DemoGameMidletEventHandler_getEventListenerInterfaceListP
#define DemoGameMidletEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DemoGameMidletEventHandler_addListeners
#define DemoGameMidletEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef DemoGameMidletEventHandler_removeListeners
#define DemoGameMidletEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidletEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameMidletEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENTHANDLER_H
