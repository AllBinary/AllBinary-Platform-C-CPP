#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_H
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
typedef struct UpKeyEventListenerInterface UpKeyEventListenerInterface;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct StringMaker StringMaker;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"

typedef struct UpKeyEventHandlerBase UpKeyEventHandlerBase;
struct UpKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};


UpKeyEventHandlerBase* UpKeyEventHandlerBase_new(void);

void UpKeyEventHandlerBase_init(UpKeyEventHandlerBase* this);

void UpKeyEventHandlerBase_addListener(UpKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);

void UpKeyEventHandlerBase_removeAllListeners(UpKeyEventHandlerBase* this);

void UpKeyEventHandlerBase_removeListenerSingleThreaded(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void UpKeyEventHandlerBase_removeListener(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void UpKeyEventHandlerBase_fireEventForInteger(UpKeyEventHandlerBase* this, int32_t eventObject);

void UpKeyEventHandlerBase_processForInteger(UpKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface);

const char* UpKeyEventHandlerBase_toString(UpKeyEventHandlerBase* this);
#define UpKeyEventHandlerBase_new0 UpKeyEventHandlerBase_new
#define UpKeyEventHandlerBase_init0 UpKeyEventHandlerBase_init
#ifndef UpKeyEventHandlerBase_addListenerSingleThreaded
#define UpKeyEventHandlerBase_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef UpKeyEventHandlerBase_addListenerInterface
#define UpKeyEventHandlerBase_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef UpKeyEventHandlerBase_fireEvent
#define UpKeyEventHandlerBase_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef UpKeyEventHandlerBase_process
#define UpKeyEventHandlerBase_process BasicEventHandler_process
#endif
#ifndef UpKeyEventHandlerBase_getEventListenerInterfaceListP
#define UpKeyEventHandlerBase_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef UpKeyEventHandlerBase_addListeners
#define UpKeyEventHandlerBase_addListeners BasicEventHandler_addListeners
#endif
#ifndef UpKeyEventHandlerBase_removeListeners
#define UpKeyEventHandlerBase_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpKeyEventHandlerBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpKeyEventHandlerBase_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_H
