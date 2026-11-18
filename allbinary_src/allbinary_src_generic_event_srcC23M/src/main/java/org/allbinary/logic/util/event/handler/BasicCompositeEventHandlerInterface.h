#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICCOMPOSITEEVENTHANDLERINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICCOMPOSITEEVENTHANDLERINTERFACE_H
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
typedef struct BasicEventHandlerInterface BasicEventHandlerInterface;

typedef struct BasicCompositeEventHandlerInterface BasicCompositeEventHandlerInterface;
struct BasicCompositeEventHandlerInterface {
    BasicEventHandlerInterface* (*getEventHandler)(void* this);
    void (*setEventHandler)(void* this, BasicEventHandlerInterface* basicEventHandlerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicCompositeEventHandlerInterface_staticInit(void);

static inline BasicEventHandlerInterface* BasicCompositeEventHandlerInterface_getEventHandler(void* this) {
    return ((__typeof__(((BasicCompositeEventHandlerInterface*) nullptr)->getEventHandler)) java_method_of(this, "getEventHandler"))(this);
}

static inline void BasicCompositeEventHandlerInterface_setEventHandler(void* this, BasicEventHandlerInterface* basicEventHandlerInterface) {
    ((__typeof__(((BasicCompositeEventHandlerInterface*) nullptr)->setEventHandler)) java_method_of(this, "setEventHandler"))(this, basicEventHandlerInterface);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICCOMPOSITEEVENTHANDLERINTERFACE_H
