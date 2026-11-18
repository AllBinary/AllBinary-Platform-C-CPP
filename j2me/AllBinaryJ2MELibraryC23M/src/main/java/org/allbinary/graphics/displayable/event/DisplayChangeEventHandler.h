#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENTHANDLER_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENTHANDLER_H
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
// package org.allbinary.graphics.displayable.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
struct DisplayChangeEventHandler {
    BasicEventHandler base;
};


DisplayChangeEventHandler* DisplayChangeEventHandler_new(void);

DisplayChangeEventHandler* DisplayChangeEventHandler_getInstance(void);

void DisplayChangeEventHandler_init(DisplayChangeEventHandler* this);

void DisplayChangeEventHandler_process(DisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define DisplayChangeEventHandler_new0 DisplayChangeEventHandler_new
#define DisplayChangeEventHandler_init0 DisplayChangeEventHandler_init
#ifndef DisplayChangeEventHandler_toString
#define DisplayChangeEventHandler_toString BasicEventHandler_toString
#endif
#ifndef DisplayChangeEventHandler_removeAllListeners
#define DisplayChangeEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef DisplayChangeEventHandler_addListenerSingleThreaded
#define DisplayChangeEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DisplayChangeEventHandler_addListenerInterface
#define DisplayChangeEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DisplayChangeEventHandler_removeListenerSingleThreaded
#define DisplayChangeEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef DisplayChangeEventHandler_removeListener
#define DisplayChangeEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef DisplayChangeEventHandler_fireEvent
#define DisplayChangeEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef DisplayChangeEventHandler_getEventListenerInterfaceListP
#define DisplayChangeEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DisplayChangeEventHandler_addListeners
#define DisplayChangeEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef DisplayChangeEventHandler_removeListeners
#define DisplayChangeEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DisplayChangeEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DisplayChangeEventHandler_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENTHANDLER_H
