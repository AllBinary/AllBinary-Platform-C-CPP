#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H
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
typedef struct DownKeyEventListenerInterface DownKeyEventListenerInterface;
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

typedef struct DownKeyEventHandlerBase DownKeyEventHandlerBase;
struct DownKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};


DownKeyEventHandlerBase* DownKeyEventHandlerBase_new(void);

void DownKeyEventHandlerBase_init(DownKeyEventHandlerBase* this);

void DownKeyEventHandlerBase_addListener(DownKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);

void DownKeyEventHandlerBase_removeAllListeners(DownKeyEventHandlerBase* this);

void DownKeyEventHandlerBase_removeListenerSingleThreaded(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void DownKeyEventHandlerBase_removeListener(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void DownKeyEventHandlerBase_fireEventI(DownKeyEventHandlerBase* this, int32_t eventObject);

void DownKeyEventHandlerBase_fireEventForGameKeyEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject);

void DownKeyEventHandlerBase_processI(DownKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface);

void DownKeyEventHandlerBase_processEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject, EventListenerInterface* eventListenerInterface);

const char* DownKeyEventHandlerBase_toString(DownKeyEventHandlerBase* this);
#define DownKeyEventHandlerBase_new0 DownKeyEventHandlerBase_new
#define DownKeyEventHandlerBase_init0 DownKeyEventHandlerBase_init
#ifndef DownKeyEventHandlerBase_addListenerSingleThreaded
#define DownKeyEventHandlerBase_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DownKeyEventHandlerBase_addListenerInterface
#define DownKeyEventHandlerBase_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DownKeyEventHandlerBase_fireEvent
#define DownKeyEventHandlerBase_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef DownKeyEventHandlerBase_process
#define DownKeyEventHandlerBase_process BasicEventHandler_process
#endif
#ifndef DownKeyEventHandlerBase_getEventListenerInterfaceListP
#define DownKeyEventHandlerBase_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DownKeyEventHandlerBase_addListeners
#define DownKeyEventHandlerBase_addListeners BasicEventHandler_addListeners
#endif
#ifndef DownKeyEventHandlerBase_removeListeners
#define DownKeyEventHandlerBase_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownKeyEventHandlerBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DownKeyEventHandlerBase_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H
