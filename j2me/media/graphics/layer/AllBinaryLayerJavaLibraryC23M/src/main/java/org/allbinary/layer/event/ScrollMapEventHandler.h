#ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H
#define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H
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
// package org.allbinary.layer.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ScrollMapEventListenerInterface ScrollMapEventListenerInterface;
typedef struct ScrollMapEvent ScrollMapEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct ScrollMapEventHandler ScrollMapEventHandler;
struct ScrollMapEventHandler {
    BasicEventHandler base;
};


ScrollMapEventHandler* ScrollMapEventHandler_new(void);

void ScrollMapEventHandler_init(ScrollMapEventHandler* this);

ScrollMapEventHandler* ScrollMapEventHandler_getInstance(void);

void ScrollMapEventHandler_process(ScrollMapEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define ScrollMapEventHandler_new0 ScrollMapEventHandler_new
#define ScrollMapEventHandler_init0 ScrollMapEventHandler_init
#ifndef ScrollMapEventHandler_toString
#define ScrollMapEventHandler_toString BasicEventHandler_toString
#endif
#ifndef ScrollMapEventHandler_removeAllListeners
#define ScrollMapEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef ScrollMapEventHandler_addListenerSingleThreaded
#define ScrollMapEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef ScrollMapEventHandler_addListenerInterface
#define ScrollMapEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef ScrollMapEventHandler_removeListenerSingleThreaded
#define ScrollMapEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef ScrollMapEventHandler_removeListener
#define ScrollMapEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef ScrollMapEventHandler_fireEvent
#define ScrollMapEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef ScrollMapEventHandler_getEventListenerInterfaceListP
#define ScrollMapEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef ScrollMapEventHandler_addListeners
#define ScrollMapEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef ScrollMapEventHandler_removeListeners
#define ScrollMapEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollMapEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollMapEventHandler_register(void);


#endif // ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTHANDLER_H
