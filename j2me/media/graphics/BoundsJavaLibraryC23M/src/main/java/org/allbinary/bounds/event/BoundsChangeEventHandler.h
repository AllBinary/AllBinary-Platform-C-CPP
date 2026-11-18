#ifndef ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_H
#define ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_H
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
// package org.allbinary.bounds.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BoundsChangeEventListener BoundsChangeEventListener;
typedef struct BoundsChangeEvent BoundsChangeEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct BoundsChangeEventHandler BoundsChangeEventHandler;
struct BoundsChangeEventHandler {
    BasicEventHandler base;
};


BoundsChangeEventHandler* BoundsChangeEventHandler_new(void);

void BoundsChangeEventHandler_init(BoundsChangeEventHandler* this);

BasicEventHandler* BoundsChangeEventHandler_getInstance(void);

void BoundsChangeEventHandler_process(BoundsChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define BoundsChangeEventHandler_new0 BoundsChangeEventHandler_new
#define BoundsChangeEventHandler_init0 BoundsChangeEventHandler_init
#ifndef BoundsChangeEventHandler_toString
#define BoundsChangeEventHandler_toString BasicEventHandler_toString
#endif
#ifndef BoundsChangeEventHandler_removeAllListeners
#define BoundsChangeEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef BoundsChangeEventHandler_addListenerSingleThreaded
#define BoundsChangeEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef BoundsChangeEventHandler_addListenerInterface
#define BoundsChangeEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef BoundsChangeEventHandler_removeListenerSingleThreaded
#define BoundsChangeEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef BoundsChangeEventHandler_removeListener
#define BoundsChangeEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef BoundsChangeEventHandler_fireEvent
#define BoundsChangeEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef BoundsChangeEventHandler_getEventListenerInterfaceListP
#define BoundsChangeEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef BoundsChangeEventHandler_addListeners
#define BoundsChangeEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef BoundsChangeEventHandler_removeListeners
#define BoundsChangeEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BoundsChangeEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BoundsChangeEventHandler_register(void);

#if __has_include("org/allbinary/logic/util/event/handler/BasicEventHandler.h")
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#endif

#endif // ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTHANDLER_H
