#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_H
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
typedef struct GameKeyEvent GameKeyEvent;
typedef struct PressGameKeyEventListenerInterface PressGameKeyEventListenerInterface;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct PressGameKeyEventHandler PressGameKeyEventHandler;
struct PressGameKeyEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


PressGameKeyEventHandler* PressGameKeyEventHandler_new(void);

PressGameKeyEventHandler* PressGameKeyEventHandler_getInstance(void);

void PressGameKeyEventHandler_init(PressGameKeyEventHandler* this);

void PressGameKeyEventHandler_addListener(PressGameKeyEventHandler* this, PlayerGameInput* playerGameInput);

void PressGameKeyEventHandler_removeAllListeners(PressGameKeyEventHandler* this);

void PressGameKeyEventHandler_removeListener(PressGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

void PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject);

void PressGameKeyEventHandler_process(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define PressGameKeyEventHandler_new0 PressGameKeyEventHandler_new
#define PressGameKeyEventHandler_init0 PressGameKeyEventHandler_init
#ifndef PressGameKeyEventHandler_toString
#define PressGameKeyEventHandler_toString BasicEventHandler_toString
#endif
#ifndef PressGameKeyEventHandler_addListenerSingleThreaded
#define PressGameKeyEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef PressGameKeyEventHandler_addListenerInterface
#define PressGameKeyEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef PressGameKeyEventHandler_removeListenerSingleThreaded
#define PressGameKeyEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef PressGameKeyEventHandler_getEventListenerInterfaceListP
#define PressGameKeyEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef PressGameKeyEventHandler_addListeners
#define PressGameKeyEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef PressGameKeyEventHandler_removeListeners
#define PressGameKeyEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PressGameKeyEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PressGameKeyEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_H
