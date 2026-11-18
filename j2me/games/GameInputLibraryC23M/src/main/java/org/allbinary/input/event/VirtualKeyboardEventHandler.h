#ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
#define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
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
// package org.allbinary.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct VirtualKeyboardEvent VirtualKeyboardEvent;
typedef struct VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface;
typedef struct BooleanFactory BooleanFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "java/lang/Thread.h"
#if __has_include("org/allbinary/input/event/VirtualKeyboardEvent.h")
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#endif

typedef struct VirtualKeyboardEventHandler VirtualKeyboardEventHandler;
struct VirtualKeyboardEventHandler {
    BasicEventHandler base;
    VirtualKeyboardEvent* SHOW_EVENT;
    VirtualKeyboardEvent* HIDE_EVENT;
};


VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_new(void);

void VirtualKeyboardEventHandler_init(VirtualKeyboardEventHandler* this);

VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_getInstance(void);

void VirtualKeyboardEventHandler_process(VirtualKeyboardEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

void VirtualKeyboardEventHandler_open(VirtualKeyboardEventHandler* this);

void VirtualKeyboardEventHandler_close(VirtualKeyboardEventHandler* this);
#define VirtualKeyboardEventHandler_new0 VirtualKeyboardEventHandler_new
#define VirtualKeyboardEventHandler_init0 VirtualKeyboardEventHandler_init
#ifndef VirtualKeyboardEventHandler_toString
#define VirtualKeyboardEventHandler_toString BasicEventHandler_toString
#endif
#ifndef VirtualKeyboardEventHandler_removeAllListeners
#define VirtualKeyboardEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef VirtualKeyboardEventHandler_addListenerSingleThreaded
#define VirtualKeyboardEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef VirtualKeyboardEventHandler_addListenerInterface
#define VirtualKeyboardEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef VirtualKeyboardEventHandler_removeListenerSingleThreaded
#define VirtualKeyboardEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef VirtualKeyboardEventHandler_removeListener
#define VirtualKeyboardEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef VirtualKeyboardEventHandler_fireEvent
#define VirtualKeyboardEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef VirtualKeyboardEventHandler_getEventListenerInterfaceListP
#define VirtualKeyboardEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef VirtualKeyboardEventHandler_addListeners
#define VirtualKeyboardEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef VirtualKeyboardEventHandler_removeListeners
#define VirtualKeyboardEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VirtualKeyboardEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VirtualKeyboardEventHandler_register(void);


#endif // ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTHANDLER_H
