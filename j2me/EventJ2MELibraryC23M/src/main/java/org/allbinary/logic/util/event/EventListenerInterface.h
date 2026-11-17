#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTLISTENERINTERFACE_H
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
// package org.allbinary.logic.util.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryEventObject AllBinaryEventObject;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"

typedef struct EventListenerInterface EventListenerInterface;
struct EventListenerInterface {
    void (*onEvent)(void* this, AllBinaryEventObject* eventObject);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EventListenerInterface_staticInit(void);

static inline void EventListenerInterface_onEvent(void* this, AllBinaryEventObject* eventObject) {
    ((__typeof__(((EventListenerInterface*) nullptr)->onEvent)) java_method_of(this, "onEvent"))(this, eventObject);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTLISTENERINTERFACE_H
