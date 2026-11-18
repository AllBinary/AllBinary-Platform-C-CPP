#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H
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
typedef struct DownGameKeyEventHandlerBase DownGameKeyEventHandlerBase;
typedef struct LocalPlayerInputIdFactory LocalPlayerInputIdFactory;
typedef struct EventListenerInterface EventListenerInterface;
#if __has_include("org/allbinary/game/input/LocalPlayerInputIdFactory.h")
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#endif
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"

typedef struct DownGameKeyEventHandler DownGameKeyEventHandler;
struct DownGameKeyEventHandler {
    DownGameKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};


DownGameKeyEventHandler* DownGameKeyEventHandler_new(void);

DownGameKeyEventHandler* DownGameKeyEventHandler_getInstance(void);

DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForDevice(DownGameKeyEventHandler* this, int32_t deviceId);

DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForPlayer(DownGameKeyEventHandler* this, int32_t playerInputId);

void DownGameKeyEventHandler_init(DownGameKeyEventHandler* this);

void DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler* this);

void DownGameKeyEventHandler_removeListenerSingleThreaded(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

void DownGameKeyEventHandler_removeListener(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
#define DownGameKeyEventHandler_new0 DownGameKeyEventHandler_new
#define DownGameKeyEventHandler_init0 DownGameKeyEventHandler_init
#ifndef DownGameKeyEventHandler_addListener
#define DownGameKeyEventHandler_addListener DownGameKeyEventHandlerBase_addListener
#endif
#ifndef DownGameKeyEventHandler_fireEvent
#define DownGameKeyEventHandler_fireEvent DownGameKeyEventHandlerBase_fireEvent
#endif
#ifndef DownGameKeyEventHandler_process
#define DownGameKeyEventHandler_process DownGameKeyEventHandlerBase_process
#endif
#ifndef DownGameKeyEventHandler_toString
#define DownGameKeyEventHandler_toString DownGameKeyEventHandlerBase_toString
#endif
#ifndef DownGameKeyEventHandler_toString
#define DownGameKeyEventHandler_toString BasicEventHandler_toString
#endif
#ifndef DownGameKeyEventHandler_addListenerSingleThreaded
#define DownGameKeyEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DownGameKeyEventHandler_addListenerInterface
#define DownGameKeyEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DownGameKeyEventHandler_fireEvent
#define DownGameKeyEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef DownGameKeyEventHandler_process
#define DownGameKeyEventHandler_process BasicEventHandler_process
#endif
#ifndef DownGameKeyEventHandler_getEventListenerInterfaceListP
#define DownGameKeyEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DownGameKeyEventHandler_addListeners
#define DownGameKeyEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef DownGameKeyEventHandler_removeListeners
#define DownGameKeyEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownGameKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DownGameKeyEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H
