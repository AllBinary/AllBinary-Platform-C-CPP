#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H
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
typedef struct UpGameKeyEventHandlerBase UpGameKeyEventHandlerBase;
typedef struct LocalPlayerInputIdFactory LocalPlayerInputIdFactory;
typedef struct EventListenerInterface EventListenerInterface;
#if __has_include("org/allbinary/game/input/LocalPlayerInputIdFactory.h")
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#endif
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"

typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
struct UpGameKeyEventHandler {
    UpGameKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};


UpGameKeyEventHandler* UpGameKeyEventHandler_new(void);

UpGameKeyEventHandler* UpGameKeyEventHandler_getInstance(void);

UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForDevice(UpGameKeyEventHandler* this, int32_t deviceId);

UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForPlayer(UpGameKeyEventHandler* this, int32_t playerInputId);

void UpGameKeyEventHandler_init(UpGameKeyEventHandler* this);

void UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler* this);

void UpGameKeyEventHandler_removeListenerSingleThreaded(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

void UpGameKeyEventHandler_removeListener(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
#define UpGameKeyEventHandler_new0 UpGameKeyEventHandler_new
#define UpGameKeyEventHandler_init0 UpGameKeyEventHandler_init
#ifndef UpGameKeyEventHandler_addListener
#define UpGameKeyEventHandler_addListener UpGameKeyEventHandlerBase_addListener
#endif
#ifndef UpGameKeyEventHandler_fireEvent
#define UpGameKeyEventHandler_fireEvent UpGameKeyEventHandlerBase_fireEvent
#endif
#ifndef UpGameKeyEventHandler_process
#define UpGameKeyEventHandler_process UpGameKeyEventHandlerBase_process
#endif
#ifndef UpGameKeyEventHandler_toString
#define UpGameKeyEventHandler_toString UpGameKeyEventHandlerBase_toString
#endif
#ifndef UpGameKeyEventHandler_toString
#define UpGameKeyEventHandler_toString BasicEventHandler_toString
#endif
#ifndef UpGameKeyEventHandler_addListenerSingleThreaded
#define UpGameKeyEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef UpGameKeyEventHandler_addListenerInterface
#define UpGameKeyEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef UpGameKeyEventHandler_fireEvent
#define UpGameKeyEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef UpGameKeyEventHandler_process
#define UpGameKeyEventHandler_process BasicEventHandler_process
#endif
#ifndef UpGameKeyEventHandler_getEventListenerInterfaceListP
#define UpGameKeyEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef UpGameKeyEventHandler_addListeners
#define UpGameKeyEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef UpGameKeyEventHandler_removeListeners
#define UpGameKeyEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpGameKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpGameKeyEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H
