#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H
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
typedef struct DownGameKeyEventListenerInterface DownGameKeyEventListenerInterface;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct DownGameKeyEventHandlerBase DownGameKeyEventHandlerBase;
struct DownGameKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};


DownGameKeyEventHandlerBase* DownGameKeyEventHandlerBase_new(void);

void DownGameKeyEventHandlerBase_init(DownGameKeyEventHandlerBase* this);

void DownGameKeyEventHandlerBase_addListener(DownGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);

void DownGameKeyEventHandlerBase_removeAllListeners(DownGameKeyEventHandlerBase* this);

void DownGameKeyEventHandlerBase_removeListenerSingleThreaded(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void DownGameKeyEventHandlerBase_removeListener(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject);

void DownGameKeyEventHandlerBase_process(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

const char* DownGameKeyEventHandlerBase_toString(DownGameKeyEventHandlerBase* this);
#define DownGameKeyEventHandlerBase_new0 DownGameKeyEventHandlerBase_new
#define DownGameKeyEventHandlerBase_init0 DownGameKeyEventHandlerBase_init
#ifndef DownGameKeyEventHandlerBase_addListenerSingleThreaded
#define DownGameKeyEventHandlerBase_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DownGameKeyEventHandlerBase_addListenerInterface
#define DownGameKeyEventHandlerBase_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DownGameKeyEventHandlerBase_getEventListenerInterfaceListP
#define DownGameKeyEventHandlerBase_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DownGameKeyEventHandlerBase_addListeners
#define DownGameKeyEventHandlerBase_addListeners BasicEventHandler_addListeners
#endif
#ifndef DownGameKeyEventHandlerBase_removeListeners
#define DownGameKeyEventHandlerBase_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownGameKeyEventHandlerBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DownGameKeyEventHandlerBase_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H
