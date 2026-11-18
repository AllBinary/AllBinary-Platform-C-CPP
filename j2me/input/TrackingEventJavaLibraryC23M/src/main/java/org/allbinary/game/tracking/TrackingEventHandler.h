#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_H
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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TrackingEventListenerInterface TrackingEventListenerInterface;
typedef struct TrackingEvent TrackingEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct TrackingEventHandler TrackingEventHandler;
struct TrackingEventHandler {
    BasicEventHandler base;
};


TrackingEventHandler* TrackingEventHandler_new(void);

TrackingEventHandler* TrackingEventHandler_getInstance(void);

void TrackingEventHandler_init(TrackingEventHandler* this);

void TrackingEventHandler_process(TrackingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define TrackingEventHandler_new0 TrackingEventHandler_new
#define TrackingEventHandler_init0 TrackingEventHandler_init
#ifndef TrackingEventHandler_toString
#define TrackingEventHandler_toString BasicEventHandler_toString
#endif
#ifndef TrackingEventHandler_removeAllListeners
#define TrackingEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef TrackingEventHandler_addListenerSingleThreaded
#define TrackingEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef TrackingEventHandler_addListenerInterface
#define TrackingEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef TrackingEventHandler_removeListenerSingleThreaded
#define TrackingEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef TrackingEventHandler_removeListener
#define TrackingEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef TrackingEventHandler_fireEvent
#define TrackingEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef TrackingEventHandler_getEventListenerInterfaceListP
#define TrackingEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef TrackingEventHandler_addListeners
#define TrackingEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef TrackingEventHandler_removeListeners
#define TrackingEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackingEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrackingEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTHANDLER_H
