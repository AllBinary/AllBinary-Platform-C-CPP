#ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H
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
// package org.allbinary.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct VirtualKeyboardEvent VirtualKeyboardEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface;
struct VirtualKeyboardEventListenerInterface {
    void (*onVirtualKeyboardEvent)(void* this, VirtualKeyboardEvent* virtualKeyboardEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VirtualKeyboardEventListenerInterface_staticInit(void);

static inline void VirtualKeyboardEventListenerInterface_onVirtualKeyboardEvent(void* this, VirtualKeyboardEvent* virtualKeyboardEvent) {
    ((__typeof__(((VirtualKeyboardEventListenerInterface*) nullptr)->onVirtualKeyboardEvent)) java_method_of(this, "onVirtualKeyboardEvent"))(this, virtualKeyboardEvent);
}
#define VirtualKeyboardEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENTLISTENERINTERFACE_H
