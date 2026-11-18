#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct LastDisplayChangeEventHandler LastDisplayChangeEventHandler;
struct LastDisplayChangeEventHandler {
    BasicEventHandler base;
};


LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_new(void);

LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_getInstance(void);

void LastDisplayChangeEventHandler_init(LastDisplayChangeEventHandler* this);

void LastDisplayChangeEventHandler_process(LastDisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define LastDisplayChangeEventHandler_new0 LastDisplayChangeEventHandler_new
#define LastDisplayChangeEventHandler_init0 LastDisplayChangeEventHandler_init
#ifndef LastDisplayChangeEventHandler_toString
#define LastDisplayChangeEventHandler_toString BasicEventHandler_toString
#endif
#ifndef LastDisplayChangeEventHandler_removeAllListeners
#define LastDisplayChangeEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef LastDisplayChangeEventHandler_addListenerSingleThreaded
#define LastDisplayChangeEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef LastDisplayChangeEventHandler_addListenerInterface
#define LastDisplayChangeEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef LastDisplayChangeEventHandler_removeListenerSingleThreaded
#define LastDisplayChangeEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef LastDisplayChangeEventHandler_removeListener
#define LastDisplayChangeEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef LastDisplayChangeEventHandler_fireEvent
#define LastDisplayChangeEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef LastDisplayChangeEventHandler_getEventListenerInterfaceListP
#define LastDisplayChangeEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef LastDisplayChangeEventHandler_addListeners
#define LastDisplayChangeEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef LastDisplayChangeEventHandler_removeListeners
#define LastDisplayChangeEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LastDisplayChangeEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LastDisplayChangeEventHandler_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_LASTDISPLAYCHANGEEVENTHANDLER_H
