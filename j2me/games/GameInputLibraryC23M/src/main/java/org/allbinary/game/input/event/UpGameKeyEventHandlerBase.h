#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_H
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
typedef struct UpGameKeyEventListenerInterface UpGameKeyEventListenerInterface;
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

typedef struct UpGameKeyEventHandlerBase UpGameKeyEventHandlerBase;
struct UpGameKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};


UpGameKeyEventHandlerBase* UpGameKeyEventHandlerBase_new(void);

void UpGameKeyEventHandlerBase_init(UpGameKeyEventHandlerBase* this);

void UpGameKeyEventHandlerBase_addListener(UpGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);

void UpGameKeyEventHandlerBase_removeAllListeners(UpGameKeyEventHandlerBase* this);

void UpGameKeyEventHandlerBase_removeListenerSingleThreaded(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void UpGameKeyEventHandlerBase_removeListener(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);

void UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject);

void UpGameKeyEventHandlerBase_process(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

const char* UpGameKeyEventHandlerBase_toString(UpGameKeyEventHandlerBase* this);
#define UpGameKeyEventHandlerBase_new0 UpGameKeyEventHandlerBase_new
#define UpGameKeyEventHandlerBase_init0 UpGameKeyEventHandlerBase_init
#ifndef UpGameKeyEventHandlerBase_addListenerSingleThreaded
#define UpGameKeyEventHandlerBase_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef UpGameKeyEventHandlerBase_addListenerInterface
#define UpGameKeyEventHandlerBase_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef UpGameKeyEventHandlerBase_getEventListenerInterfaceListP
#define UpGameKeyEventHandlerBase_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef UpGameKeyEventHandlerBase_addListeners
#define UpGameKeyEventHandlerBase_addListeners BasicEventHandler_addListeners
#endif
#ifndef UpGameKeyEventHandlerBase_removeListeners
#define UpGameKeyEventHandlerBase_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpGameKeyEventHandlerBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpGameKeyEventHandlerBase_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_H
