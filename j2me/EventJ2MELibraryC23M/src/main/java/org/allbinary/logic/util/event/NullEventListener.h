#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.logic.util.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct EventListenerInterface EventListenerInterface;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct NullEventListener NullEventListener;
struct NullEventListener {
    EventListenerInterface EventListenerInterface_interface;
};

extern NullEventListener* NullEventListener_NULL_EVENT_LISTENER;

NullEventListener* NullEventListener_new(void);
void NullEventListener_init(NullEventListener* this);

void NullEventListener_onEvent(NullEventListener* this, AllBinaryEventObject* eventObject);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullEventListener_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_NULLEVENTLISTENER_H
