#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLERINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLERINTERFACE_H
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
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;

typedef struct BasicEventHandlerInterface BasicEventHandlerInterface;
struct BasicEventHandlerInterface {
    void (*addListenerInterface)(void* this, EventListenerInterface* eventListenerInterface);
    void (*fireEvent)(void* this, AllBinaryEventObject* eventObject);
    void (*removeAllListeners)(void* this);
    void (*removeListener)(void* this, EventListenerInterface* eventListenerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicEventHandlerInterface_staticInit(void);

static inline void BasicEventHandlerInterface_addListenerInterface(void* this, EventListenerInterface* eventListenerInterface) {
    ((__typeof__(((BasicEventHandlerInterface*) nullptr)->addListenerInterface)) java_method_of(this, "addListenerInterface"))(this, eventListenerInterface);
}

static inline void BasicEventHandlerInterface_fireEvent(void* this, AllBinaryEventObject* eventObject) {
    ((__typeof__(((BasicEventHandlerInterface*) nullptr)->fireEvent)) java_method_of(this, "fireEvent"))(this, eventObject);
}

static inline void BasicEventHandlerInterface_removeAllListeners(void* this) {
    ((__typeof__(((BasicEventHandlerInterface*) nullptr)->removeAllListeners)) java_method_of(this, "removeAllListeners"))(this);
}

static inline void BasicEventHandlerInterface_removeListener(void* this, EventListenerInterface* eventListenerInterface) {
    ((__typeof__(((BasicEventHandlerInterface*) nullptr)->removeListener)) java_method_of(this, "removeListener"))(this, eventListenerInterface);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLERINTERFACE_H
