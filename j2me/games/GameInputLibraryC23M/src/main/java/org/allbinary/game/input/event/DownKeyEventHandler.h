#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
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
typedef struct DownKeyEventHandlerBase DownKeyEventHandlerBase;
typedef struct LocalPlayerInputIdFactory LocalPlayerInputIdFactory;
typedef struct EventListenerInterface EventListenerInterface;
#if __has_include("org/allbinary/game/input/LocalPlayerInputIdFactory.h")
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#endif
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"

typedef struct DownKeyEventHandler DownKeyEventHandler;
struct DownKeyEventHandler {
    DownKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};


DownKeyEventHandler* DownKeyEventHandler_new(void);

DownKeyEventHandler* DownKeyEventHandler_getInstance(void);

DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForDevice(DownKeyEventHandler* this, int32_t deviceId);

DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForPlayer(DownKeyEventHandler* this, int32_t playerInputId);

void DownKeyEventHandler_init(DownKeyEventHandler* this);

void DownKeyEventHandler_removeAllListeners(DownKeyEventHandler* this);

void DownKeyEventHandler_removeListenerSingleThreaded(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

void DownKeyEventHandler_removeListener(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
#define DownKeyEventHandler_new0 DownKeyEventHandler_new
#define DownKeyEventHandler_init0 DownKeyEventHandler_init
#ifndef DownKeyEventHandler_addListener
#define DownKeyEventHandler_addListener DownKeyEventHandlerBase_addListener
#endif
#ifndef DownKeyEventHandler_fireEventI
#define DownKeyEventHandler_fireEventI DownKeyEventHandlerBase_fireEventI
#endif
#ifndef DownKeyEventHandler_fireEventForGameKeyEvent
#define DownKeyEventHandler_fireEventForGameKeyEvent DownKeyEventHandlerBase_fireEventForGameKeyEvent
#endif
#ifndef DownKeyEventHandler_processI
#define DownKeyEventHandler_processI DownKeyEventHandlerBase_processI
#endif
#ifndef DownKeyEventHandler_processEvent
#define DownKeyEventHandler_processEvent DownKeyEventHandlerBase_processEvent
#endif
#ifndef DownKeyEventHandler_toString
#define DownKeyEventHandler_toString DownKeyEventHandlerBase_toString
#endif
#ifndef DownKeyEventHandler_toString
#define DownKeyEventHandler_toString BasicEventHandler_toString
#endif
#ifndef DownKeyEventHandler_addListenerSingleThreaded
#define DownKeyEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DownKeyEventHandler_addListenerInterface
#define DownKeyEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DownKeyEventHandler_fireEvent
#define DownKeyEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef DownKeyEventHandler_process
#define DownKeyEventHandler_process BasicEventHandler_process
#endif
#ifndef DownKeyEventHandler_getEventListenerInterfaceListP
#define DownKeyEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DownKeyEventHandler_addListeners
#define DownKeyEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef DownKeyEventHandler_removeListeners
#define DownKeyEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DownKeyEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
