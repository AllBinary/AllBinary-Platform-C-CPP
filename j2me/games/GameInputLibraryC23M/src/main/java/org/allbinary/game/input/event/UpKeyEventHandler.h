#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H
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
typedef struct UpKeyEventHandlerBase UpKeyEventHandlerBase;
typedef struct LocalPlayerInputIdFactory LocalPlayerInputIdFactory;
typedef struct EventListenerInterface EventListenerInterface;
#if __has_include("org/allbinary/game/input/LocalPlayerInputIdFactory.h")
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#endif
#include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"

typedef struct UpKeyEventHandler UpKeyEventHandler;
struct UpKeyEventHandler {
    UpKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};


UpKeyEventHandler* UpKeyEventHandler_new(void);

UpKeyEventHandler* UpKeyEventHandler_getInstance(void);

UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForDevice(UpKeyEventHandler* this, int32_t deviceId);

UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForPlayer(UpKeyEventHandler* this, int32_t playerInputId);

void UpKeyEventHandler_init(UpKeyEventHandler* this);

void UpKeyEventHandler_removeAllListeners(UpKeyEventHandler* this);

void UpKeyEventHandler_removeListenerSingleThreaded(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

void UpKeyEventHandler_removeListener(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
#define UpKeyEventHandler_new0 UpKeyEventHandler_new
#define UpKeyEventHandler_init0 UpKeyEventHandler_init
#ifndef UpKeyEventHandler_addListener
#define UpKeyEventHandler_addListener UpKeyEventHandlerBase_addListener
#endif
#ifndef UpKeyEventHandler_fireEventForInteger
#define UpKeyEventHandler_fireEventForInteger UpKeyEventHandlerBase_fireEventForInteger
#endif
#ifndef UpKeyEventHandler_processForInteger
#define UpKeyEventHandler_processForInteger UpKeyEventHandlerBase_processForInteger
#endif
#ifndef UpKeyEventHandler_toString
#define UpKeyEventHandler_toString UpKeyEventHandlerBase_toString
#endif
#ifndef UpKeyEventHandler_toString
#define UpKeyEventHandler_toString BasicEventHandler_toString
#endif
#ifndef UpKeyEventHandler_addListenerSingleThreaded
#define UpKeyEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef UpKeyEventHandler_addListenerInterface
#define UpKeyEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef UpKeyEventHandler_fireEvent
#define UpKeyEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef UpKeyEventHandler_process
#define UpKeyEventHandler_process BasicEventHandler_process
#endif
#ifndef UpKeyEventHandler_getEventListenerInterfaceListP
#define UpKeyEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef UpKeyEventHandler_addListeners
#define UpKeyEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef UpKeyEventHandler_removeListeners
#define UpKeyEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpKeyEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H
