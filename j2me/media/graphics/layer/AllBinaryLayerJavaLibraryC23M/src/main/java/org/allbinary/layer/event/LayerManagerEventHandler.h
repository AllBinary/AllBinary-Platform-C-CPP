#ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H
#define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H
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
typedef struct LayerManagerEventListener LayerManagerEventListener;
typedef struct LayerManagerEvent LayerManagerEvent;
typedef struct LayerManagerEventListenerInterface LayerManagerEventListenerInterface;
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

typedef struct LayerManagerEventHandler LayerManagerEventHandler;
struct LayerManagerEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
    const char* CREATE;
    const char* DELETE;
};


LayerManagerEventHandler* LayerManagerEventHandler_new(void);

LayerManagerEventHandler* LayerManagerEventHandler_getInstance(void);

void LayerManagerEventHandler_init(LayerManagerEventHandler* this);

void LayerManagerEventHandler_addListener(LayerManagerEventHandler* this, LayerManagerEventListener* layerManagerEventListener);

void LayerManagerEventHandler_removeAllListeners(LayerManagerEventHandler* this);

void LayerManagerEventHandler_removeListener(LayerManagerEventHandler* this, EventListenerInterface* eventListenerInterface);

void LayerManagerEventHandler_fireEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject);

void LayerManagerEventHandler_fireDeleteEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject);

void LayerManagerEventHandler_process(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define LayerManagerEventHandler_new0 LayerManagerEventHandler_new
#define LayerManagerEventHandler_init0 LayerManagerEventHandler_init
#ifndef LayerManagerEventHandler_toString
#define LayerManagerEventHandler_toString BasicEventHandler_toString
#endif
#ifndef LayerManagerEventHandler_addListenerSingleThreaded
#define LayerManagerEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef LayerManagerEventHandler_addListenerInterface
#define LayerManagerEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef LayerManagerEventHandler_removeListenerSingleThreaded
#define LayerManagerEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef LayerManagerEventHandler_getEventListenerInterfaceListP
#define LayerManagerEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef LayerManagerEventHandler_addListeners
#define LayerManagerEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef LayerManagerEventHandler_removeListeners
#define LayerManagerEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerEventHandler_register(void);


#endif // ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H
