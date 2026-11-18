#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H
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
// package org.allbinary.logic.util.event.handler

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicEventHandlerInterface BasicEventHandlerInterface;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"

typedef struct BasicEventHandler BasicEventHandler;
struct BasicEventHandler {
    BasicEventHandlerInterface BasicEventHandlerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    EventStrings* eventStrings;
    BasicArrayList* eventListenerInterfaceList;
};


BasicEventHandler* BasicEventHandler_new(void);

void BasicEventHandler_init(BasicEventHandler* this);

void BasicEventHandler_removeAllListeners(BasicEventHandler* this);

void BasicEventHandler_addListeners(BasicEventHandler* this, BasicArrayList* vector);

void BasicEventHandler_removeListeners(BasicEventHandler* this, BasicArrayList* vector);

void BasicEventHandler_addListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);

void BasicEventHandler_addListenerInterface(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);

void BasicEventHandler_removeListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);

void BasicEventHandler_removeListener(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);

void BasicEventHandler_fireEvent(BasicEventHandler* this, AllBinaryEventObject* eventObject);

void BasicEventHandler_process(BasicEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

BasicArrayList* BasicEventHandler_getEventListenerInterfaceListP(BasicEventHandler* this);

const char* BasicEventHandler_toString(BasicEventHandler* this);
#define BasicEventHandler_new0 BasicEventHandler_new
#define BasicEventHandler_init0 BasicEventHandler_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicEventHandler_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H
