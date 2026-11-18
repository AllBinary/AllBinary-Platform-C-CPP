#ifndef ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_H
#define ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_H
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
// package org.allbinary.view.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ViewPositionEvent ViewPositionEvent;
typedef struct ViewPositionEventListenerInterface ViewPositionEventListenerInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
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

typedef struct ViewPositionEventHandler ViewPositionEventHandler;
struct ViewPositionEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


ViewPositionEventHandler* ViewPositionEventHandler_new(void);

ViewPositionEventHandler* ViewPositionEventHandler_getInstance(void);

void ViewPositionEventHandler_init(ViewPositionEventHandler* this);

void ViewPositionEventHandler_addListener(ViewPositionEventHandler* this, AllBinaryLayer* layerInterface);

void ViewPositionEventHandler_removeAllListeners(ViewPositionEventHandler* this);

void ViewPositionEventHandler_removeListener(ViewPositionEventHandler* this, EventListenerInterface* eventListenerInterface);

void ViewPositionEventHandler_fireEvent(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject);

void ViewPositionEventHandler_process(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define ViewPositionEventHandler_new0 ViewPositionEventHandler_new
#define ViewPositionEventHandler_init0 ViewPositionEventHandler_init
#ifndef ViewPositionEventHandler_toString
#define ViewPositionEventHandler_toString BasicEventHandler_toString
#endif
#ifndef ViewPositionEventHandler_addListenerSingleThreaded
#define ViewPositionEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef ViewPositionEventHandler_addListenerInterface
#define ViewPositionEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef ViewPositionEventHandler_removeListenerSingleThreaded
#define ViewPositionEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef ViewPositionEventHandler_getEventListenerInterfaceListP
#define ViewPositionEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef ViewPositionEventHandler_addListeners
#define ViewPositionEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef ViewPositionEventHandler_removeListeners
#define ViewPositionEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPositionEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ViewPositionEventHandler_register(void);


#endif // ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_H
